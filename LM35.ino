// Positive terminal of LED (RED) long leg of theLED is connected to the one point of the Resistor 200 Ohm and 
// another point is connected to the D5 pin of the Node MCU, negative terminal of LED (RED)  [short leg of the LED] is connected to the ground pin.
// Positive terminal of LED (YELLOW) long leg of the LED is connected to the one point of the Resistor 200 Ohm and
// another point is connected to the D6 pin of the Node MCU, negative terminal of LED (YELLOW) [short leg of the LED] is connected to the ground pin.
// Positive terminal of LED (GREEN) long leg of the LED is connected to the one point of the Resistor 200 Ohm 
// and another point is connected to the D7 pin of the Node MCU, negative terminal of LED (GREEN) [short leg of the LED]is connected to the ground pin.

#include <ArduinoWiFiServer.h>
#include <BearSSLHelpers.h>
#include <CertStoreBearSSL.h>
#include <ESP8266WiFi.h>
#include <ESP8266WiFiAP.h>
#include <ESP8266WiFiGeneric.h>
#include <ESP8266WiFiGratuitous.h>
#include <ESP8266WiFiMulti.h>
#include <ESP8266WiFiSTA.h>
#include <ESP8266WiFiScan.h>
#include <ESP8266WiFiType.h>
#include <WiFiClient.h>
#include <WiFiClientSecure.h>
#include <WiFiClientSecureBearSSL.h>
#include <WiFiServer.h>
#include <WiFiServerSecure.h>
#include <WiFiServerSecureBearSSL.h>
#include <WiFiUdp.h>
//initializes/defines the output pin of the LM35 temperature sensor
int outputpin = A0;                   
//this sets the ground pin to LOW and the input voltage pin to high
void setup ()
{
Serial.begin(9600);
//Setting the baud rate for Serial Monitor Communication 
}

void loop() //main loop
{
int analogValue = analogRead(outputpin);
float millivolts = (analogValue/1024.0) * 3300; //3300 is the voltage provided by NodeMCU
float celsius = millivolts/10;
Serial.print("in DegreeC=   ");
Serial.println(celsius);

//---------- Here is the calculation for Fahrenheit ----------//
float fahrenheit = ((celsius * 9)/5 + 32);
Serial.print(" in Farenheit=   ");
Serial.println(fahrenheit);
delay(1000);
}

// After uploading the code, you should see the IP address of your web server displayed in the serial monitor 
// Copy the IP address and paste it in a web browser on any device (Mobile or PC) connected to the same network as the Node MCU. 
// You should see the web page and be able to toggle the connected appliances by clicking the buttons. 
// Copy the IP which occur on serial monitor copy that and next to that write down _ Red then RED led becomes glow. 
// If you are writing Yellow than YELLOW LED becomes glow similarly for Green. 
