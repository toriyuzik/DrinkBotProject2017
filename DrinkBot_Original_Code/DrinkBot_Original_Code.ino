/*This program is DrinkRobotMaiTie and makes the spectacular

* drink Margot's Mai Tai

* and was written by

*Ted Kinsman Rochester Institute of Technology

*March 2017 emkpph@rit.edu

*12 v DC motors pump 1 oz of liquor in 32 sec.

*/

#define Rum 1 // (pump1)12VDC motor to pump rum on pin 1

#define LED8 8 // (pump1)LED to tell rum is pumping


#define Curacao 2 // (pump2) Curacao (orange) liquor connected to pin 2

#define LED9 9 // (pump2)LED to tell Curacao (orange) liquor is pumping


#define Orgeat 3 // (pump3) on pin 3

#define LED10 10 // LED above pump 3 connected to pin 10


#define Grenedine 4 // pump4 on pin 4

#define LED11 11 // LED above pump4 connected to pin 11


#define PineLime 5 //pump5 connected to pineapple and lime juice

#define LED12 12 // LED above pump5 connected to pin 12


#define doorbell 13 // trigger switch uses a doorbell

#define pump6 6 // pump 6 big submersed pump


int strobe=100; // this controls how fast the LEDs will blink in line

int sensorPin = A0; // analog read : used to tell if doorbell switch is pushed

int sensorValue = 0;  //value written to when analog value is read from doorbell


void setup()

{

pinMode(Rum, OUTPUT);

pinMode(LED8, OUTPUT);

pinMode(Curacao, OUTPUT);

pinMode(LED9, OUTPUT);

pinMode(Orgeat, OUTPUT);

pinMode(LED10, OUTPUT);

pinMode(Grenedine, OUTPUT);

pinMode(LED11, OUTPUT);

pinMode(LED12, OUTPUT);

pinMode(doorbell, INPUT);

pinMode(pump6, OUTPUT);

digitalWrite (LED8, LOW); //led 1 on

digitalWrite (Rum, HIGH); //pump 1 off

digitalWrite (LED9, LOW);

digitalWrite (Curacao, HIGH); //pump 2 off

digitalWrite (LED10, LOW);

digitalWrite (Orgeat, HIGH); //pump 3 off

digitalWrite (LED11, LOW); //pump 4 off

digitalWrite (PineLime, HIGH); //pump 4 off

digitalWrite (LED11, LOW);

digitalWrite (Grenedine, HIGH);//pump 5 off

digitalWrite (pump6, HIGH);//pump 6 off

delay(1000); // let relays settle down before running the first time.

}

void loop()   //this part of the code loops and loops forever

{

sensorValue = analogRead(sensorPin);
Serial.print (sensorValue);

//this part makes the LEDs strobe to make the robot look cool

//this stops when the start button is pressed

//if bottom is pressed the LEDs show which motor is running

digitalWrite (LED8, HIGH); //turns on LED on pin 8

delay(strobe);         // controls how fast the LEDs flash

digitalWrite (LED8, LOW); //turns off LED on pin 8

delay(strobe);

digitalWrite (LED9, HIGH); //turns on LED on pin 9

delay(strobe);

digitalWrite (LED9, LOW); //turns off LED on pin 9

delay(strobe);

digitalWrite (LED10, HIGH); //turns on LED on pin 10

delay(strobe);

digitalWrite (LED10, LOW); //turns off LED on pin 10

delay(strobe);

digitalWrite (LED11, HIGH); //turns on LED on pin 11

delay(strobe);

digitalWrite (LED11, LOW); //turns off LED on pin 11

delay(strobe);

digitalWrite (LED12, HIGH); //turns on LED on pin 12

delay(strobe);

digitalWrite (LED12, LOW); //turns off LED on pin 12

delay(strobe);

sensorValue = analogRead(sensorPin);

if(sensorValue < 300){

  Serial.print (sensorValue);

digitalWrite (LED8, HIGH); //led 1 on

digitalWrite (Rum, LOW); //pump 1 on

digitalWrite (LED9, HIGH);

digitalWrite (Curacao, LOW); //pump 2 on

digitalWrite (LED10, HIGH);

digitalWrite (Orgeat, LOW); //pump 3 on

digitalWrite (LED11, HIGH);

digitalWrite (Grenedine, LOW);//pump 4 on

delay(8000);       // waits 8 sec to pump 1/4 oz of liquid

digitalWrite (LED10, LOW); // turns off Orgeat LED P3

digitalWrite (Orgeat, HIGH);   // turns off Orgeat pump P3

digitalWrite (LED11, LOW);   //led for pump 5 off

digitalWrite (Grenedine, HIGH); //turns off pimp 4

delay(8000);     // waits 8 sec to pump 1/4 oz of liquid

digitalWrite (Curacao, HIGH);   // turns off Curacao pump 2

digitalWrite (LED9, LOW); // turns off Curacao LED 2

// at this point the Curacao has been on for 16 sec and has pumped 1/2 oz

delay(16000);   // waits 8 sec to pump 1/4 oz of liquid

digitalWrite (LED8, LOW); //turns off pump 1 LED

digitalWrite (Rum, HIGH);   //turns off pump 1 (RUM)

digitalWrite (pump6, LOW);   //turn on pineapple pump (pump6)

//digitalWrite (PineLime, LOW); //low turns on relays to turn on pump

delay(2500); //delay 4 seconds to pump pineapple juice

digitalWrite (pump6, HIGH);     // turn off pineapple pump (pump6)

//digitalWrite (PineLime, HIGH); // turns off relays to pineapple juice

}

}
