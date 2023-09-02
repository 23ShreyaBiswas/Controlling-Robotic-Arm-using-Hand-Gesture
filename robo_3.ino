#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>
RF24 radio(7, 8);
const byte address[6] = "00001";
void setup() {
pinMode(A0,INPUT);
pinMode(A1,INPUT);
pinMode(A2,INPUT);
pinMode(A3,INPUT);
pinMode(A4,INPUT);
radio.begin();
radio.openWritingPipe(address);
radio.setPALevel(RF24_PA_MIN);
radio.stopListening();
}
void loop() {
radio.stopListening();
int potValue0 = analogRead(A0);
int potValue1 = analogRead(A1);
int potValue2 = analogRead(A2);
int potValue3 = analogRead(A3);
int potValue4 = analogRead(A4);
int Value0,Value1;
int Value2,Value3;
int Value4;
Value0=map(potValue0,0,1023,0,180);
Value1=map(potValue1,0,1023,0,180);
Value2=map(potValue2,0,1023,0,180);
Value3=map(potValue3,0,1023,0,180);
Value4=map(potValue4,0,1023,0,180);
int arr[5];
arr[0]=angleValue0;
arr[1]=angleValue1;
arr[2]=angleValue2;
arr[3]=angleValue3;
arr[4]=angleValue4;
radio.write(&arr, sizeof(arr));
delay(5);
}
