## Pomodoro-Genuino is a Genuino based Pomodoro timer

Pomodoro-Genuino is implementation of famous Pomodoro timer based on Genuino hardware.<br>
Root folder will contain the most recent version of Pomodoro timer with the description of both hardware and software parts.<br>
As it always comes with both hard+soft parts, a previous version of the timer will go into a respective subfolder,
once a newer version of hardware part is released.<br>

Current version of the Pomodoro-Genuino timer device uses LCD display that shows a recent message related to the moment.
Device also has traffic LEDs (bulbs) that refer to device modes.<br>

![img_1676](https://user-images.githubusercontent.com/3159236/30887439-bdbb3f36-a31b-11e7-99fb-d6045a6b4000.JPG)


Red bulb refers to Task mode, task lasts 25 minutes and red bulb will start blinking with high frequency after this time is up.<br>
Yellow bulb refers to Break mode that lasts 5 minutes and it will start blinking after break time is up.<br>
Switch is used for next mode set. Device starts in Idle mode which is indicated by the lightened green bulb.  

Display shows the message accordingly to the current situation.<br>
For instance in Task mode it will display a message "Performing task" and then "Have a break!" after time for a break is up.

Please refer to HARD.MD for hardware assembly related details.

### Up and running
Assemble hardware part and put the software sketch into Arduino IDE.<br>
Upload it to your Pomodoro-Genuino. Green bulb will be lightened. Press switch in order to set Task mode.

### Acknowledgements:
Setup of the leds is taken from here [Spaceship Interface project from ArduinoStarterKit](https://www.arduino.cc/en/ArduinoStarterKit/Prj02)
