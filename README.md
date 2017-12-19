# DrinkBot Project 2017 [version 1]
===================================
[![License](https://poser.pugx.org/phpunit/phpunit/license)](https://packagist.org/packages/phpunit/phpunit)

This repository includes code and other files for a drink making robot using the Arduino Uno. The project is based on the cocktail drinkbot by Ted Kinsman (https://makezine.com/projects/build-cocktail-drinkbot/).

# Description of Project

  The project described in this report is a drink robot (Drinkbot). The Drinkbot is intended to make a variety of different mixed drinks when a button is pressed. The basic structure of the Drinkbot includes six peristaltic aquarium pumps, six buttons, and six LEDs. The buttons are used to activate the pumps, which are pump alcohol and mix into the user’s drink glass.
	
  The pumps are connected to the Arduino using an 8-channel relay board. When one of the buttons on the Drinkbot is pushed, it activates the appropriate Arduino pins which send a low voltage signal to the relay board and activate the appropriate pumps. The buttons also activate the LEDs that are associated with the active pumps. 

  There are a number of different versions of Arduino-based drink robots created by other makers. Some use only one button (the project that inspired this one uses a single doorbell as its input), or Google Home voice activation, to make drinks. This Drinkbot uses six different buttons to make six different drinks, which allows the user to choose the type of drink they would like to make. 
	
  The original objective of this project was to mix a variety of different highballs (1 oz. of alcohol and 8 oz. of soda/juice). Due to the limitations of the pumps, it takes too long to pump an appropriate amount of carbonated liquid. Due to this set back, the Drinkbot can pump only alcohol and juice. Of the six pumps, four of them pump alcohol and two pump non-carbonated mix. The user can choose to pump only alcohol and manually add soda to their glass. While this was not the original plan for the Drinkbot, it is a satisfactory solution to this problem.
  
  <img src= "https://drive.google.com/open?id=19eY2khGtEqe2V-wZBLgIp6NAVE6ZOVmHGQ">
  
# Repository Contents

  
  
  
Requirements and Materials
==================
No additional libraries need to be installed for this project.

Bill of Materials:
* 6 x push buttons
* 6 x LEDs (can be any colour)
* 6 x 560 Ω resistors
* 6 x peristaltic aquarium pumps
* 5 x AA batteries
* 1 x 8-channel relay board
* 1 x 12V power supply
* 1 x battery holder
* 1 x breadboard
* 1 x Arduino Uno
* 1 x ready-to-assemble shoe shelf
* 1 x drink coaster
* 18-gauge thermostat wire
* jumper wires
* soldering iron and rosin core solder
* hot glue gun and glue
* drill and screws
* duct and electrical tape

Build Instructions
==================
This design was prototyped without the pumps and power supply using an Arduino, a breadboard, the relay board, the buttons, and the LEDs. This was done to ensure the code worked properly and the Arduino was properly connected to the rest of the elements. In the original prototype, resistors were used in the button circuits. The creator later decided to eliminate these resistors and used the code to set the buttons as pull-down buttons. Photos of the prototypes can be viewed below:

  <img src= "https://drive.google.com/open?id=1KU0cTkFUCUXqKDT-K42tT-cL3cNhKJGuKw">
	
  The frame was constructed using the pieces of a ready-to-assemble shoe shelf. The sides and the top of the shelf were assembled as per the instructions included in the package. The top of the shelf is the bottom of the project frame. The remaining shelf was cut into three pieces (one half, and two quarters). The largest piece was attached to the back of the shelf about 2 inches from the bottom. One of the smaller pieces was attached in front of the bottles about 1 inch from the bottom. The other smaller piece was attached about 4 inches in front of the bottles at the top of the shelf. Six evenly spaced holes were drilled in this piece for the LEDs. The peristaltic pumps were also attached to this piece above each of the LED holes. After the frame was assembled, the Arduino Uno and the relay board were attached at the bottom near the front of the shelf. A piece of cardboard was later added on top of these electronic components.
	
  Two 18-gauge thermostat wires were soldered to each pump. One of these wires connects to the ground of the power supply; the other wire connects to the normally open terminal of the relay module. Another 18-gauge wire is connected from the common terminal of the relay module to the 12V of the power supply. The relay board modules are connected to the Arduino digital pins 2 through 7. 
	
  The each of the LEDs to connected to 560 Ω resistors from ground and connected to one of the Arduino’s analog pins. The LEDs are inserted into the pre-drilled holes under each of the pumps. The buttons are soldered to jumper wires and are inserted into the carboard in front of the coaster. The are connected to the ground rail of a breadboard and the Arduino digital pins 8 through 13. All of the wires are taped down using duct and electrical tape to keep them out of the way and safe from any liquid. 
  
Usage
=====
  The Drinkbot is easy to use and requires little effort to set up. The first step is to plug in the computer power supply to a standard 120V house outlet. The next step is to lift up the cardboard and plug the Arduino battery power supply into the Arduino. The LEDs will turn on and the pumps will prime for 15 seconds when the Arduino is powered.
	
  The buttons are connected to the Arduino’s digital pins 8 through 13. Each of the buttons activates a different channel on the relay board and the corresponding pump. Choose what type of alcohol and/or mix to dispense and push the corresponding button. The LED associated with that pump will turn on. When the LED turns off, the pump has finished dispensing the liquid and the beverage is ready to be enjoyed.

Credits
=======
[1] Kinsman, T. (n.d.) Build a Simple Cocktail Drinkbot with Arduino. Retrieved September 24, 2017 from https://makezine.com/projects/build-cocktail-drinkbot/

[2] Circuit Builders. (2015, November 23). Using Sensors with 5V Relays on the Arduino [Video File]. Retrieved from https://www.youtube.com/watch?v=AHxG5aSWFi0




