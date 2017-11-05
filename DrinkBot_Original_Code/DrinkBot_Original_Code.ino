/*This program is DrinkRobotMaiTie and makes the spectacular

* drink Margot's Mai Tai

* and was written by

*Ted Kinsman Rochester Institute of Technology

*March 2017 emkpph@rit.edu
*
*
*This code was editted by Tori Yuzik
*to create a variety of 7 different highballs
*last modified 05 November 2017

*12 v DC motors pump 1 oz of liquor in 32 sec.

*/
// Pin Numbers for Pumps
const int Rum = 1; //(pump1)12VDC motor to pump rum on pin 1
const int Gin = 2; //(pump2)to pump gin connected to pin 2
const int Vodka = 3; //(pump3)to pump vodka connected to pin 3
const int CokeZero = 4; //(pump4)to pump Coke Zero connected to pin 4
const int Tonic = 5; //(pump5)to pump Tonic Water connected to pin 5
const int OrangeJuice = 6; //(pump6) to pump Orange Juice connected to pin 6

// I'll set the LED pin numbers later
//#define LED8 8 // (pump1)LED to tell rum is pumping
//#define LED9 9 // (pump2)LED to tell gin is pumping
//#define LED10 10 // (pump3)LED to tell vodka is pumping
//#define LED11 11 // (pump4)LED to tell CokeZero is pumping
//#define LED12 12 // (pump5)LED to tell Tonic Water is pumping
//#define LED12 12 // (pump6)LED to tell OrangeJuice is pumping

//Pin Numbers for Buttons
const int buttonRC = 7; // pin 7 is button for Rum and Coke
const int buttonROJ = 8; // pin 8 is button for Rum and Orange Juice

const int buttonVC = 9; // pin 9 is button for Vodka and Coke
const int buttonVOJ = 10; // pin 10 is button for Vodka and Orange Juice
const int buttonVT = 11; // pin 11 is button for Vodka Tonic

const int buttonGOJ = 12; // pin 12 is button for Gin and Orange Juice
const int buttonGT = 13; // pin 13 is button for Gin and Tonic

//Declare button states as variables
int buttonStateRC = 0;
int buttonStateROJ = 0;

int buttonStateVC = 0;
int buttonStateVOJ = 0;
int buttonStateVT = 0;

int buttonStateGOJ = 0;
int buttonStateGT = 0;

//Declare Functions to Mix Drinks
void makeRumCoke();
void makeRumOrangeJuice();
void makeVodkaCoke();
void makeVodkaOrangeJuice();
void makeVodkaTonic();
void makeGinOrangeJuice();
void makeGinTonic();

//Declare function to strobe LEDs
void strobePattern();


//int strobe=100; // this controls how fast the LEDs will blink in line
//
//int sensorPin = A0; // analog read : used to tell if doorbell switch is pushed
//
//int sensorValue = 0;  //value written to when analog value is read from doorbell


void setup(){

//initialize pump pins as outputs
pinMode(Rum, OUTPUT);
pinMode(Gin, OUTPUT);
pinMode(Vodka, OUTPUT);
pinMode(CokeZero, OUTPUT);
pinMode(Tonic, OUTPUT);
pinMode(OrangeJuice, OUTPUT);

//I will initialize LED (analog) pins later
//pinMode(LED8, OUTPUT);
//pinMode(LED9, OUTPUT);
//pinMode(LED10, OUTPUT);
//pinMode(LED11, OUTPUT);
//pinMode(LED12, OUTPUT);

//initialize button pins as inputs
pinMode(buttonRC, INPUT);
pinMode(buttonROJ, INPUT);
pinMode(buttonVC, INPUT);
pinMode(buttonVOJ, INPUT);
pinMode(buttonVT, INPUT);
pinMode(buttonGOJ, INPUT);
pinMode(buttonGT, INPUT);

//Turn LEDs Off
//digitalWrite (LED8, LOW); //led 1 on
//digitalWrite (LED9, LOW);
//digitalWrite (LED10, LOW);
//digitalWrite (LED11, LOW);
//digitalWrite (LED12, LOW);

//Turn pumps off
digitalWrite (Rum, HIGH); //pump 1 off
digitalWrite (Gin, HIGH); //pump 2 off
digitalWrite (Vodka, HIGH); //pump 3 off
digitalWrite (CokeZero, HIGH); //pump 4 off
digitalWrite (Tonic, HIGH);//pump 5 off
digitalWrite (OrangeJuice, HIGH);//pump 6 off

delay(1000); // let relays settle down before running the first time.

}

void loop(){   //this part of the code loops and loops forever

//read the state of the pushbutton value
buttonStateRC = digitalRead(buttonRC);
buttonStateROJ = digitalRead(buttonROJ);
buttonStateVC = digitalRead(buttonVC);
buttonStateVOJ = digitalRead(buttonVOJ);
buttonStateVT = digitalRead(buttonVT);
buttonStateGOJ = digitalRead(buttonGOJ);
buttonStateGT = digitalRead(buttonGT);

if (buttonStateRC == LOW, buttonStateROJ == LOW, buttonStateVC == LOW, buttonStateVOJ == LOW,
buttonStateVT == LOW, buttonStateGOJ == LOW, buttonStateGT == LOW) {
 strobePattern();
}

else if (buttonStateRC == HIGH){
  makeRumCoke();
}

else if (buttonStateROJ == HIGH){
  makeRumOrangeJuice();
}

else if (buttonStateVC == HIGH) {
  makeVodkaCoke();
}

else if (buttonStateVOJ == HIGH) {
  makeVodkaOrangeJuice();
}

else if (buttonStateVT == HIGH) {
  makeVodkaTonic();
}

else if (buttonStateGOJ == HIGH) {
  makeGinOrangeJuice();
}

else if (buttonGT == HIGH) {
  makeGinTonic();
}

//sensorValue = analogRead(sensorPin);

//this part makes the LEDs strobe to make the robot look cool

//this stops when the start button is pressed

//if bottom is pressed the LEDs show which motor is running

//digitalWrite (LED8, HIGH); //turns on LED on pin 8
//
//delay(strobe);         // controls how fast the LEDs flash
//
//digitalWrite (LED8, LOW); //turns off LED on pin 8
//
//delay(strobe);
//
//digitalWrite (LED9, HIGH); //turns on LED on pin 9
//
//delay(strobe);
//
//digitalWrite (LED9, LOW); //turns off LED on pin 9
//
//delay(strobe);
//
//digitalWrite (LED10, HIGH); //turns on LED on pin 10
//
//delay(strobe);
//
//digitalWrite (LED10, LOW); //turns off LED on pin 10
//
//delay(strobe);
//
//digitalWrite (LED11, HIGH); //turns on LED on pin 11
//
//delay(strobe);
//
//digitalWrite (LED11, LOW); //turns off LED on pin 11
//
//delay(strobe);
//
//digitalWrite (LED12, HIGH); //turns on LED on pin 12
//
//delay(strobe);
//
//digitalWrite (LED12, LOW); //turns off LED on pin 12
//
//delay(strobe);

//      sensorValue = analogRead(sensorPin);
//      
//      if(sensorValue < 300){
//      
//        Serial.print (sensorValue);
//      
//      digitalWrite (LED8, HIGH); //led 1 on
//      
//      digitalWrite (Rum, LOW); //pump 1 on
//      
//      digitalWrite (LED9, HIGH);
//      
//      digitalWrite (Curacao, LOW); //pump 2 on
//      
//      digitalWrite (LED10, HIGH);
//      
//      digitalWrite (Orgeat, LOW); //pump 3 on
//      
//      digitalWrite (LED11, HIGH);
//      
//      digitalWrite (Grenedine, LOW);//pump 4 on
//      
//      delay(8000);       // waits 8 sec to pump 1/4 oz of liquid
//      
//      digitalWrite (LED10, LOW); // turns off Orgeat LED P3
//      
//      digitalWrite (Orgeat, HIGH);   // turns off Orgeat pump P3
//      
//      digitalWrite (LED11, LOW);   //led for pump 5 off
//      
//      digitalWrite (Grenedine, HIGH); //turns off pimp 4
//      
//      delay(8000);     // waits 8 sec to pump 1/4 oz of liquid
//      
//      digitalWrite (Curacao, HIGH);   // turns off Curacao pump 2
//      
//      digitalWrite (LED9, LOW); // turns off Curacao LED 2

//        // at this point the Curacao has been on for 16 sec and has pumped 1/2 oz
//        
//        delay(16000);   // waits 8 sec to pump 1/4 oz of liquid
//        
//        digitalWrite (LED8, LOW); //turns off pump 1 LED
//        
//        digitalWrite (Rum, HIGH);   //turns off pump 1 (RUM)
//        
//        digitalWrite (pump6, LOW);   //turn on pineapple pump (pump6)
//        
//        //digitalWrite (PineLime, LOW); //low turns on relays to turn on pump
//        
//        delay(2500); //delay 4 seconds to pump pineapple juice
//        
//        digitalWrite (pump6, HIGH);     // turn off pineapple pump (pump6)
//        
//        //digitalWrite (PineLime, HIGH); // turns off relays to pineapple juice

//}
}

void makeRumCoke(){
  digitalWrite(Rum, LOW); // turn on pump 1
  digitalWrite(CokeZero, LOW); // turn on pump 4
      // later -- Add LEDs to show pumps 1 and 4 are on
  delay(8000); // wait 8 seconds
  digitalWrite(Rum, HIGH); // turn off pump 1
      // later -- Turn off pump 1 LED 
  delay(22000); // wait 22 seconds
  digitalWrite(CokeZero, HIGH); // turn off pump 4
      //later -- Turn off pump 4 LED
}

void makeRumOrangeJuice(){
  digitalWrite(Rum, LOW); // turn on pump 1
  digitalWrite(OrangeJuice, LOW); // turn on pump 6
      // later -- Add LEDs to show pumps 1 and 6 are on
  delay(8000); // wait 8 seconds
  digitalWrite(Rum, HIGH); // turn off pump 1
      // later -- Turn off pump 1 LED 
  delay(22000); // wait 22 seconds
  digitalWrite(OrangeJuice, HIGH); // turn off pump 6
      //later -- Turn off pump 6 LED
}

void makeVodkaCoke(){
  digitalWrite(Vodka, LOW); // turn on pump 3
  digitalWrite(CokeZero, LOW); // turn on pump 4
      // later -- Add LEDs to show pumps 3 and 4 are on
  delay(8000); // wait 8 seconds
  digitalWrite(Vodka, HIGH); // turn off pump 3
      // later -- Turn off pump 3 LED 
  delay(22000); // wait 22 seconds
  digitalWrite(CokeZero, HIGH); // turn off pump 4
      //later -- Turn off pump 4 LED
}

void makeVodkaOrangeJuice(){
  digitalWrite(Vodka, LOW); // turn on pump 3
  digitalWrite(OrangeJuice, LOW); // turn on pump 6
      // later -- Add LEDs to show pumps 3 and 6 are on
  delay(8000); // wait 8 seconds
  digitalWrite(Vodka, HIGH); // turn off pump 3
      // later -- Turn off pump 3 LED 
  delay(22000); // wait 22 seconds
  digitalWrite(OrangeJuice, HIGH); // turn off pump 6
      //later -- Turn off pump 6 LED
}

void makeVodkaTonic(){
  digitalWrite(Vodka, LOW); // turn on pump 3
  digitalWrite(Tonic, LOW); // turn on pump 5
      // later -- Add LEDs to show pumps 3 and 5 are on
  delay(8000); // wait 8 seconds
  digitalWrite(Vodka, HIGH); // turn off pump 3
      // later -- Turn off pump 3 LED 
  delay(22000); // wait 22 seconds
  digitalWrite(Tonic, HIGH); // turn off pump 5
      //later -- Turn off pump 5 LED
}

void makeGinOrangeJuice(){
  digitalWrite(Gin, LOW); // turn on pump 2
  digitalWrite(OrangeJuice, LOW); // turn on pump 6
      // later -- Add LEDs to show pumps 2 and 6 are on
  delay(8000); // wait 8 seconds
  digitalWrite(Gin, HIGH); // turn off pump 2
      // later -- Turn off pump 2 LED 
  delay(22000); // wait 22 seconds
  digitalWrite(OrangeJuice, HIGH); // turn off pump 6
      //later -- Turn off pump 6 LED
}

void makeGinTonic(){
  digitalWrite(Gin, LOW); // turn on pump 2
  digitalWrite(Tonic, LOW); // turn on pump 5
      // later -- Add LEDs to show pumps 2 and 5 are on
  delay(8000); // wait 8 seconds
  digitalWrite(Gin, HIGH); // turn off pump 2
      // later -- Turn off pump 2 LED 
  delay(22000); // wait 22 seconds
  digitalWrite(Tonic, HIGH); // turn off pump 5
      //later -- Turn off pump 5 LED
}

    // Later -- write strobe pattern function (or use the one Ted used)

