/*
  Example for different sending methods
  
  https://github.com/sui77/rc-switch/
  
*/

#include <RCSwitch.h>

RCSwitch mySwitch = RCSwitch();
int PLength = 380;

void setup() {

  Serial.begin(9600);
  
  // Transmitter is connected to Arduino Pin #10  
  mySwitch.enableTransmit(10);

  // Optional set pulse length.
   //mySwitch.setPulseLength(140);
  
  // Optional set protocol (default is 1, will work for most outlets)
   mySwitch.setProtocol(1);
  
  // Optional set number of transmission repetitions.
  mySwitch.setRepeatTransmit(1);
  
}

void loop() {

//Start Frame
  //Start PreAmble
  mySwitch.setProtocol(2);
 mySwitch.send("111111111111111111111111");
 //digitalWrite(10,HIGH);
 //delayMicroseconds(15000);
 //Data
  mySwitch.setProtocol(1);
  mySwitch.send("111111011001000001110110100001");
  mySwitch.send("110010111110110000001110100101");
  mySwitch.send("11010011010000100001");
//  mySwitch.send("111000110000101110010011111000");
//  mySwitch.send("111001101011110111100111100010");
//  mySwitch.send("1110110111110111110001111100");
  

  delay(3);

}


