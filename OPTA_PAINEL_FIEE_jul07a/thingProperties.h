// Code generated by Arduino IoT Cloud, DO NOT EDIT.

#include <ArduinoIoTCloud.h>
#include <Arduino_ConnectionHandler.h>

const char SSID[]     = SECRET_SSID;    // Network SSID (name)
const char PASS[]     = SECRET_OPTIONAL_PASS;    // Network password (use for WPA, or use as key for WEP)

void onResetChange();
void onSetChange();

float kWh;
float sensorValueA0;
float voltageA0;
float voltageA1;
CloudLight h1;
CloudLight h2;
CloudLight reset;
CloudLight set;

void initProperties(){

  ArduinoCloud.addProperty(kWh, READ, ON_CHANGE, NULL);
  ArduinoCloud.addProperty(sensorValueA0, READ, ON_CHANGE, NULL);
  ArduinoCloud.addProperty(voltageA0, READ, ON_CHANGE, NULL);
  ArduinoCloud.addProperty(voltageA1, READ, ON_CHANGE, NULL);
  ArduinoCloud.addProperty(h1, READ, ON_CHANGE, NULL);
  ArduinoCloud.addProperty(h2, READ, ON_CHANGE, NULL);
  ArduinoCloud.addProperty(reset, READWRITE, ON_CHANGE, onResetChange);
  ArduinoCloud.addProperty(set, READWRITE, ON_CHANGE, onSetChange);

}

WiFiConnectionHandler ArduinoIoTPreferredConnection(SSID, PASS);
