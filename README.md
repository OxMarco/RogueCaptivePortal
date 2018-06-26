# Rouge Access Portal
## Disclamer
The misuse of this software can result in criminal activities. The author(s) will not be held responsible for its misuse.
## Functions
A captive portal able to intercept DNS look-ups and give out a login interface according to the URL. Currently it implements Google, Facebook and Yahoo login masks but can be extended. Google sign-in template is the default one.
When the user connects for the first time from a smartphone, a login portal pops up asking to perform the signin in order to start browsing and, after the data is sent, an error is retrieved.
Login data is then stored in the flash memory of the ESP8266 and can be seen visiting anydomain.com/esportal/log
The built-in LED will blink 10 times to confirm successful start-up and 5 times when a user logs in.
## Usage
Simply install the sketch using the Arduino IDE on a ESP8266 compatible board, use the correct SPIFFS setup and LED pin.
No extra hardware is needed.
Change SSID and domains if you want.
## ToDo
### Software-side
Intercept HTTPS, create an admin login system to prevent unwanted users to see the logs.
### Hardware-side
Increment WiFi range
## Credits
Based on the *ESPortal project* by Corey Harding www.legacysecuritygroup.com
I kept the license on as most of the code is theirs
