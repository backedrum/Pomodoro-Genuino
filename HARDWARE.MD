
1. Start with the LED part:
This version of hardware utilizes Spaceship Interface project hardware setup from https://www.arduino.cc/en/ArduinoStarterKit/Prj02<br>
Please follow the instructions from this kit. The only change you need to do is to replace second red LED with a yellow one 
in order to form a traffic light like LEDs structure.<br>

2. Connect the LCD display.
I'm using 16x2 display model JHD162A and this setup should work for all 16x2 display models similar to this one.
Here is a secuence of steps to connect the display:
2.1 Put a display into the breadboard;<br>
2.2 display's pin1-> "-";<br>
2.2 display's pin2-> "+";<br>
2.3 display's pin3-> "-". Note: this display pin is normally used to change the contrast by potentiometer.<br>
But we will not connect a potentiometer for now in order to keep it simple.<br>
2.4 display's pin4-> Genuino's output 13;<br>
2.5 display's pin5-> "-";<br>
2.6 display's pin6-> Genuino's output 12;<br>
2.7 display's pin16-> "-";<br>
2.8 display's pin15-> connect 10k resistor. Other end of resistor should end up at "+";<br>
2.9 display's pin14-> Genuino's output 9;<br>
2.10 display's pin13-> Genuino's output 8;<br>
2.11 display's pin12-> Genuino's output 7;<br>
2.12 display's pin11-> Genuino's output 6.<br>

You are all set! Upload a software part.<br>
