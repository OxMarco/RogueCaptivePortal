# Rouge Access Portal
## Disclamer
The misuse of this software can result in criminal activities. The author(s) will not be held responsible for its abuse.

## Functions
A captive portal able to intercept DNS look-ups and give out a login interface according to the URL. Currently it implements Google, Facebook and Yahoo login masks but can be extended. Google sign-in template is the default one.<br>
When the user connects for the first time from a smartphone, a login portal pops up asking to perform the signin in order to start browsing and, after the data is sent, an error is retrieved.<br>
Login data is then stored in the flash memory of the ESP8266 and can be seen visiting anydomain.com/logs<br>
The built-in LED will blink 10 times to confirm successful start-up and 5 times when a user logs in.

## Usage
Simply install the sketch using the Arduino IDE on a ESP8266 compatible board, use the correct SPIFFS setup and LED pin. No extra hardware is needed.<br>
You can set up a catch all captive portal plus three single websites to hack so that if the user goes to the website, a fake page will be presented to harvest credentials. In the main file there are all the configurations, namely the WiFi public SSID and captive portal page.

I use it with a power bank, choosing a smaller board and a micro LiPo battery it can be made even more portable.<br>

![ESP8266 with a power bank](https://image.ibb.co/bwiWuo/IMG_2368.jpg)

## Credits
Based on the *ESPortal project* by Corey Harding www.legacysecuritygroup.com<br>
I kept the license on as most of the code is theirs.
