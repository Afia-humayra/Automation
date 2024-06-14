# Automation
**Overview**

The Home Automation Project with Arduino aims to enhance your living environment by integrating several automated systems to increase safety, convenience, and efficiency in your home. The primary features include automatic lighting based on ambient light levels, a fire and gas sensing monitoring system, and a rain detection mechanism for automatic window control.

**Features**
1.	Gas Detecting using the gas sensor (MQ-2)
2.	Warning on different gas level
  a.	One led turns on when low gas emit detected
  b.	Two led turns on when moderate gas emit detected
  c.	The buzzer turns on when high gas emission is detected and turns on the exhaust fan automatically. 
  d.	LCD Display gives reading of different gas level.
3.	Rain detection using a rain sensor
  a)	Automatically closing the window using a servo motor
  b)	LCD Display shows the rain status
4.	Light & Dark detecting using LDR Sendor
  a)	Automatically turn off light on night & turn on while dark through LDR sensor
  b)	Alternate controlling through switch


Getting Started


**Hardware Requirements
**

•	Arduino Board (e.g., Arduino Uno)

•	Light Sensor (LDR)

•	Gas Sensor (MQ-2)

•	Rain Sensor

•	Servo Motors (for window control)

•	LED Light

•	Buzzer (for alarm system)

•	Exhaust fan

•	LCD Display

•	Transistor, Resistor

•	Jumper Wires

•	Breadboard

•	Power Supply




**Software Requirements
**



•	Arduino IDE

•	Necessary Libraries (e.g., Servo.h, sensor libraries)



**Setup Instructions
**


**1.	Assemble the Hardware:
**
    
  o	Connect the LDR to the Arduino Digital input.
  
  o	Connect the gas sensors to the Arduino.
  
  o	Attach the rain sensor to detect water and connect it to the Arduino.
  
  o	Connect the servo motors to the Arduino to control window mechanisms.
  
  o	Wire the relay modules to control lights and other electrical appliances.
  
  o	Connect the buzzer and LED to the Arduino for the warning system.
  
  o	Connect the exhaust fan to transistor and resistor for automatic control.
  



**2.	Program the Arduino:
**



  o	Install the Arduino IDE on your computer.
  
  o	Open the Combined_code_Automation.ino sketch in the Arduino IDE.
  
  o	Upload the code to the Arduino board.


  
**3.	Testing:
**



  o	Test each sensor individually to ensure proper functionality.
  
  o	Simulate various conditions (e.g., darkness, smoke, rain) to verify the automated responses.
  
  o	Adjust sensitivity settings in the configuration files as needed for optimal performance.


  
**Contribution
**

Feel free to contribute to this project by opening issues, suggesting features, or submitting pull requests. Together, we can make this home automation system more robust and feature-rich.

**Acknowledgements
**

Thanks to the open-source community for providing valuable resources and libraries that made this project possible. Special thanks to the developers of the sensor libraries used in this project.
Happy automating!
 
