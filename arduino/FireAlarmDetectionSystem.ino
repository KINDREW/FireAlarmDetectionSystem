#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>
#include "config.h"

const int smokeSensorPin = A0;
const int buzzerPin = D1;
const int threshold = 300;  // Define your threshold value here

void setup() {
  Serial.begin(115200);
  pinMode(smokeSensorPin, INPUT);
  pinMode(buzzerPin, OUTPUT);

  // Connect to Wi-Fi
  WiFi.begin(SSID, PASSWORD);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("Connected to Wi-Fi");
}

void loop() {
  int sensorValue = analogRead(smokeSensorPin);
  if (sensorValue > threshold) {
    digitalWrite(buzzerPin, HIGH);
    sendAlert();
  } else {
    digitalWrite(buzzerPin, LOW);
  }
  delay(1000);
}

void sendAlert() {
  if (WiFi.status() == WL_CONNECTED) {
    HTTPClient http;
    http.begin(SERVER_NAME);
    int httpCode = http.GET();
    if (httpCode > 0) {
      Serial.println("Alert sent successfully");
    } else {
      Serial.println("Error sending alert");
    }
    http.end();
  } else {
    Serial.println("Not connected to Wi-Fi");
  }
}
