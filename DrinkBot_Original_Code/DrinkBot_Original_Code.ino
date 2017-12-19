/*This program is DrinkRobotMaiTie and makes the spectacular

* drink Margot's Mai Tai

* and was written by

*Ted Kinsman Rochester Institute of Technology

*March 2017 emkpph@rit.edu
*
*
*This code was editted by Tori Yuzik
*to create a variety of 7 different highballs
*modified 05 November 2017
*last modified 18 December 2017

*12 v DC motors pump 1 oz of liquor in 32 sec.

*/
// Pin Numbers for Pumps
const int Rum = 2; //(pump1)12VDC motor to pump rum on pin 2
const int Gin = 3; //(pump2)to pump gin connected to pin 3
const int Vodka = 4; //(pump3)to pump vodka connected to pin 4
const int Whiskey = 5; //(pump4)to pump Coke Zero connected to pin 5
const int OrangeJuice = 6; //(pump5)to pump Tonic Water connected to pin 6
const int CranJuice = 7; //(pump6) to pump Orange Juice connected to pin 7

// Pin Numbers for LEDs
const int ledRum = A5;
const int ledGin = A4;
const int ledVodka = A3;
const int ledWhisk = A2;
const int ledOJ = A1;
const int ledCran = A0;

//Pin Numbers for Buttons
const int buttonROJ = 9; // pin 9 is button for Rum and Orange Juice
const int buttonRum = 8; // pin 8 is button for Rum
const int buttonVodka = 9; // pin 9 is button for Vodka
const int buttonGin = 10; // pin 10 is button for Gin
const int buttonWhisk = 11; // pin 11 is button for Whiskey

const int buttonOJ = 12; // pin 12 is button for Orange Juice
const int buttonCran = 13; // pin 13 is button for Cranberry Juice

//Declare button states as variables
int buttonStateRum = 0;
int buttonStateVodka = 0;
int buttonStateGin = 0;
int buttonStateWhisk = 0;

int buttonStateOJ = 0;
int buttonStateCran = 0;

//Declare Functions to Mix Drinks
void makeRum();
void makeVodka();
void makeGin();
void makeWhisk();
void makeCran();
void makeOJ();
//Declare Function to Reset Buttons to High
void resetButtonsHigh();

void setup(){
Serial.begin(9600);

//initialize pump pins as outputs
pinMode(Rum, OUTPUT);
pinMode(Gin, OUTPUT);
pinMode(Vodka, OUTPUT);
pinMode(Whiskey, OUTPUT);
pinMode(CranJuice, OUTPUT);
pinMode(OrangeJuice, OUTPUT);

//Initialize LED pins as outputs
pinMode(ledRum, OUTPUT);
pinMode(ledGin, OUTPUT);
pinMode(ledVodka, OUTPUT);
pinMode(ledWhisk, OUTPUT);
pinMode(ledOJ, OUTPUT);
pinMode(ledCran, OUTPUT);


//initialize button pins as inputs
pinMode(buttonRum, INPUT);
pinMode(buttonVodka, INPUT);
pinMode(buttonGin, INPUT);
pinMode(buttonWhisk, INPUT);
pinMode(buttonOJ, INPUT);
pinMode(buttonCran, INPUT);

//set buttons to pull downs
digitalWrite(buttonRum, HIGH);
digitalWrite(buttonVodka, HIGH);
digitalWrite(buttonGin, HIGH);
digitalWrite(buttonWhisk, HIGH);
digitalWrite(buttonOJ, HIGH);
digitalWrite(buttonCran, HIGH);

//Turn LEDs Off
analogWrite (ledRum, 0);
analogWrite (ledGin, 0);
analogWrite (ledVodka, 0);
analogWrite (ledWhisk, 0);
analogWrite (ledOJ, 0);
analogWrite (ledCran, 0);

//Turn pumps off
digitalWrite (Rum, HIGH); //pump 1 off
digitalWrite (Gin, HIGH); //pump 2 off
digitalWrite (Vodka, HIGH); //pump 3 off
digitalWrite (Whiskey, HIGH); //pump 4 off
digitalWrite (OrangeJuice, HIGH);//pump 5 off
digitalWrite (CranJuice, HIGH);//pump 6 off

delay(1000); // let relays settle down before running the first time.

//Prime Pumps and Turn On LEDs
digitalWrite (Rum, LOW); //pump 1 prime
  analogWrite (ledRum, 255);
digitalWrite (Gin, LOW); //pump 2 prime
  analogWrite (ledGin, 255);
digitalWrite (Vodka, LOW); //pump 3 prime
  analogWrite (ledVodka, 255);
digitalWrite (Whiskey, LOW); //pump 4 prime
  analogWrite (ledWhisk, 255);
digitalWrite (OrangeJuice, LOW);//pump 5 prime
  analogWrite (ledOJ, 255);
digitalWrite (CranJuice, LOW);//pump 6 prime
  analogWrite (ledCran, 255);
delay (15000); //wait 15 seconds
//Turn pumps and LEDs Off
digitalWrite (Rum, HIGH); //pump 1 prime
  analogWrite (ledRum, 0);
digitalWrite (Gin, HIGH); //pump 2 prime
  analogWrite (ledGin, 0);
digitalWrite (Vodka, HIGH); //pump 3 prime
  analogWrite (ledVodka, 0);
digitalWrite (Whiskey, HIGH); //pump 4 prime
  analogWrite (ledWhisk, 0);
digitalWrite (OrangeJuice, HIGH);//pump 5 prime
  analogWrite (ledOJ, 0);
digitalWrite (CranJuice, HIGH);//pump 6 prime
  analogWrite (ledCran, 0);
}

void loop(){   //this part of the code loops and loops forever

//read the state of the pushbutton value
buttonStateRum = digitalRead(buttonRum);
buttonStateVodka = digitalRead(buttonVodka);
buttonStateGin = digitalRead(buttonGin);
buttonStateWhisk = digitalRead(buttonWhisk);
buttonStateOJ = digitalRead(buttonOJ);
buttonStateCran = digitalRead(buttonCran);

Serial.print("Rum Button (button1): ");
Serial.println(buttonStateRum);
Serial.print("Vodka Button (button2): ");
Serial.println(buttonStateVodka);
Serial.print("Gin Button (button3): ");
Serial.println(buttonStateGin);
Serial.print("Whiskey Button (button4): ");
Serial.println(buttonStateWhisk);
Serial.print("OJ Button (button5): ");
Serial.println(buttonStateOJ);
Serial.print("Cranberry Juice Button (button6): ");
Serial.println(buttonStateCran);
delay(500);

if (buttonStateRum == HIGH && buttonStateVodka == HIGH &&
buttonStateGin == HIGH && buttonStateWhisk == HIGH &&
buttonStateOJ == HIGH && buttonStateCran == HIGH){
  analogWrite (ledRum, 255);
  delay(100);
  analogWrite (ledGin, 255);
  delay(100);
  analogWrite (ledVodka, 255);
  delay(100);
  analogWrite (ledWhisk, 255);
  delay(100);
  analogWrite (ledOJ, 255);
  delay(100);
  analogWrite (ledCran, 255);
  delay(100);
  analogWrite (ledCran, 0);
  delay(100);
  analogWrite (ledOJ, 0);
  delay(100);
  analogWrite (ledWhisk, 0);
  delay(100);
  analogWrite (ledVodka, 0);
  delay(100);
  analogWrite (ledGin, 0);
  delay(100);
  analogWrite (ledRum, 0);
  delay(100);

  analogWrite (ledRum, 255);
  analogWrite (ledGin, 255);
  analogWrite (ledVodka, 255);
  analogWrite (ledWhisk, 255);
  analogWrite (ledOJ, 255);
  analogWrite (ledCran, 255);  
  delay(500);
  analogWrite (ledRum, 0);
  analogWrite (ledGin, 0);
  analogWrite (ledVodka, 0);
  analogWrite (ledWhisk, 0);
  analogWrite (ledOJ, 0);
  analogWrite (ledCran, 0);
  delay(500);

  analogWrite (ledRum, 255);
  analogWrite (ledGin, 255);
  analogWrite (ledVodka, 255);
  analogWrite (ledWhisk, 255);
  analogWrite (ledOJ, 255);
  analogWrite (ledCran, 255);  
  delay(500);
  analogWrite (ledRum, 0);
  analogWrite (ledGin, 0);
  analogWrite (ledVodka, 0);
  analogWrite (ledWhisk, 0);
  analogWrite (ledOJ, 0);
  analogWrite (ledCran, 0);
  delay(500);

  analogWrite (ledRum, 255);
  analogWrite (ledGin, 255);
  analogWrite (ledVodka, 255);
  analogWrite (ledWhisk, 255);
  analogWrite (ledOJ, 255);
  analogWrite (ledCran, 255);  
  delay(500);
  analogWrite (ledRum, 0);
  analogWrite (ledGin, 0);
  analogWrite (ledVodka, 0);
  analogWrite (ledWhisk, 0);
  analogWrite (ledOJ, 0);
  analogWrite (ledCran, 0);
  delay(500);
  }

else if(buttonStateGin == HIGH &&
buttonStateVodka == HIGH && buttonStateWhisk == HIGH &&
buttonStateOJ == HIGH && buttonStateCran == HIGH && buttonStateRum == LOW){
  makeRum();
  resetButtonsHigh();
}

else if (buttonStateRum == HIGH && buttonStateVodka == LOW &&
buttonStateGin == HIGH && buttonStateWhisk == HIGH &&
buttonStateOJ == HIGH && buttonStateCran == HIGH){
  makeVodka();
  resetButtonsHigh();
}

else if (buttonStateRum == HIGH && buttonStateVodka == HIGH &&
buttonStateGin == LOW && buttonStateWhisk == HIGH &&
buttonStateOJ == HIGH && buttonStateCran == HIGH) {
  makeGin();
  resetButtonsHigh();
}

else if (buttonStateRum == HIGH && buttonStateVodka == HIGH &&
buttonStateGin == HIGH && buttonStateWhisk == LOW &&
buttonStateOJ == HIGH && buttonStateCran == HIGH){
  makeWhisk();
  resetButtonsHigh();
}

else if (buttonStateRum == HIGH && buttonStateVodka == HIGH &&
buttonStateGin == HIGH && buttonStateWhisk == HIGH && 
buttonStateOJ == HIGH && buttonStateCran == LOW) {
  makeCran();
  resetButtonsHigh();
 
}

else if (buttonStateRum == HIGH && buttonStateVodka == HIGH &&
buttonStateGin == HIGH && buttonStateWhisk == HIGH && 
buttonStateCran == HIGH && buttonStateOJ == LOW) {
  makeOJ();
  resetButtonsHigh();
  }
}

void makeRum(){
  digitalWrite(Rum, LOW); // turn on pump 1
    analogWrite(ledRum, 255);
  delay(32000); // wait 32 seconds
  digitalWrite(Rum, HIGH); // turn off pump 1
    analogWrite(ledRum, 0);
}

void makeVodka(){
  digitalWrite(Vodka, LOW); // turn on pump 3
    analogWrite(ledVodka, 255);
  delay(32000); // wait 32 seconds
  digitalWrite(Vodka, HIGH); // turn off pump 3
    analogWrite(ledVodka, 0);
}

void makeGin(){
  digitalWrite(Gin, LOW); // turn on pump 2
    analogWrite(ledGin, 255);
  delay(32000); // wait 32 seconds
  digitalWrite(Gin, HIGH); // turn off pump 2
    analogWrite(ledGin, 0);
}

void makeWhisk(){
  digitalWrite(Whiskey, LOW); // turn on pump 4
    analogWrite(ledWhisk, 255);
  delay(32000); // wait 32 seconds
  digitalWrite(Whiskey, HIGH); // turn off pump 4
    analogWrite(ledWhisk, 0); 
}

void makeOrangeJuice(){
  digitalWrite(OrangeJuice, LOW); // turn on pump 5
    analogWrite(ledOJ, 255);
  delay(237000); // wait 237 seconds
  digitalWrite(OrangeJuice, HIGH); // turn off pump 5
    analogWrite(ledOJ, 0);
}
void makeCran(){
  digitalWrite(CranJuice, LOW); // turn on pump 6
    analogWrite(ledCran, 255);
  delay(237000); // wait 237 seconds
  digitalWrite(CranJuice, HIGH); // turn off pump 6
    analogWrite(ledCran, 0);
}

void resetButtonsHigh(){
  digitalWrite (buttonRum, HIGH); //button1
  digitalWrite (buttonVodka, HIGH); //button2
  digitalWrite (buttonGin, HIGH); //button3
  digitalWrite (buttonWhisk, HIGH); //button4
  digitalWrite (buttonOJ, HIGH); //button5
  digitalWrite (buttonCran, HIGH); //button6
}

