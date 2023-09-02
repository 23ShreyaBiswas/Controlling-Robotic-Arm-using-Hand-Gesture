#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>
#include <Wire.h>
#include <Servo.h>
Servo servo0;
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
RF24 radio(7,8); // CE, CSN
const byte address[6] = "00001";
int arr[5];
bool state=0;
void setup() {
servo0.attach(2);
servo1.attach(3);
servo2.attach(4);
servo3.attach(5);
servo4.attach(6);
Wire.begin(8);
Wire.onReceive(receiveEvent); /* register receive event */
Serial.begin(9600);
