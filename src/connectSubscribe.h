#ifndef connectSubscribe_h
#define connectSubscribe_h
#include "Arduino.h"

#include <ESP8266WiFi.h>
// #include <ESP8266WiFiMulti.h>
#include <WiFiClientSecure.h>
#include <PubSubClient.h>
#include "defines.h"

extern uint8_t wifiReconnectAttemptCount;
extern bool serial, wifiConnected;
extern WiFiClientSecure wificlientsecure;
// create MQTT object
extern PubSubClient client;
extern bool serial, connection;
extern unsigned long tkeepConnect, lastReconnectAttempt;
extern unsigned int connectTime;
extern char rpiServer[RPI_IP_SIZE], mqttUsername[MQTT_USERNAME_SIZE], mqttKey[MQTT_KEY_SIZE]; // MQTT username and password
// extern ESP8266WiFiMulti wifiMulti;
void connectSubscribe();
// void getFeedLatest();
void checkConnection();

#endif