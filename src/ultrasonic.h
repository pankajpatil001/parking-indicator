#ifndef ultrasonic_h
#define ultrasonic_h
#include "Arduino.h"
#include <PubSubClient.h>
#include "defines.h"

#define MAX_SAMPLES 20

extern unsigned long duration;
extern bool serial, parkSpaceOccupied;
extern unsigned int distance, prevDistance;
extern unsigned long tkeepUS, tPushStatus;
extern unsigned int usTime, parkSpaceVehicleDistance, pushStatusTime;
extern PubSubClient client;
extern char valueStr[100], deviceUUID[36]; // UUID for the device
void getDistance();
void initiateUltrasonicSensor();

#endif