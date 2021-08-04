
#include <WiFiManager.h> // https://github.com/tzapu/WiFiManager

void setup() {
  WiFi.mode(WIFI_STA); // explicitly set mode, esp defaults to STA+AP
  Serial.begin(115200);

  WiFiManager wm;

  bool res;
    // res = wm.autoConnect(); // auto generated AP name from chipid
    res = wm.autoConnect("SetupAP"); // anonymous ap
    // res = wm.autoConnect("AutoConnectAP","password"); // password protected ap

    if(!res) {
        Serial.println("Failed to connect");
        // ESP.restart();
    } 
    else {
        //if you get here you have connected to the WiFi    
        Serial.println("connected");
    }
    
}

void loop() {
  // put your main code here, to run repeatedly:

}
