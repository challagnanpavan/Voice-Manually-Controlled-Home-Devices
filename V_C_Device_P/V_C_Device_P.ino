#include <WiFi.h>
#include <SinricPro.h>
#include <SinricProSwitch.h>

// WiFi Credentials
#define WIFI_SSID         "Oppo A58"
#define WIFI_PASS         "challagp"

// Sinric Pro Credentials (from your dashboard)
#define APP_KEY           "c65d2328-b256-4973-8171-2971e30dcbd5"
#define APP_SECRET        "69932472-329b-41e0-97c0-b084d068fc8e-d8eed280-2be9-4eb9-a134-0936553b23f1"

#define FAN_ID            "68de5f245918d860c09ebefa"
#define LIGHT_ID          "68de5ee45918d860c09ebebc"

// Relay Pins
#define FAN_PIN   5   // GPIO5
#define LIGHT_PIN 18   // GPIO18

// Create SinricPro Switch devices
SinricProSwitch& myLight = SinricPro[LIGHT_ID];
SinricProSwitch& myFan   = SinricPro[FAN_ID];

// Power state callback
bool onPowerState(const String &deviceId, bool &state) {
  if (deviceId == LIGHT_ID) {
    Serial.printf("Light turned %s\r\n", state ? "ON" : "OFF");
    digitalWrite(LIGHT_PIN, state ? LOW : HIGH);
  }
  else if (deviceId == FAN_ID) {
    Serial.printf("Fan turned %s\r\n", state ? "ON" : "OFF");
    digitalWrite(FAN_PIN, state ? LOW : HIGH);
  }
  return true; // Request handled successfully
}

// WiFi setup
void setupWiFi() {
  Serial.printf("\r\n[WiFi] Connecting to %s", WIFI_SSID);
  WiFi.begin(WIFI_SSID, WIFI_PASS);
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(250);
  }
  Serial.printf("\r\n[WiFi] Connected! IP: %s\r\n", WiFi.localIP().toString().c_str());
}

// SinricPro setup
void setupSinricPro() {
  myLight.onPowerState(onPowerState);
  myFan.onPowerState(onPowerState);

  SinricPro.begin(APP_KEY, APP_SECRET);
  SinricPro.restoreDeviceStates(true); // Restore last state after restart
}

void setup() {
  Serial.begin(115200);

  pinMode(LIGHT_PIN, OUTPUT);
  pinMode(FAN_PIN, OUTPUT);

  setupWiFi();
  setupSinricPro();
}

void loop() {
  SinricPro.handle();
}
