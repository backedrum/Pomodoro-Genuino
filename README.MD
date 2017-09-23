## Pomodoro-Genuino is a Genuino based Pomodoro timer

Pomodoro-Genuino is implementation of famous Pomodoro timer based on Genuino hardware.<br>
Root folder will contain the most recent version of Pomodoro timer with the description of both hardware and software parts.<br>
As it always comes with both hard+soft parts, a current version of the timer will go into a respective subfolder,
once a newer version of hardware part is released.<br>

Current version of Pomodoro-Genuino is initial one and is implemented in a form of traffic light.<br>
Red bulb refers to Task mode, task lasts 25 minutes and red bulb will start blinking with high frequency after this time is up.<br>
Yellow bulb refers to Break mode that lasts 5 minutes and it will start blinking after break time is up.<br>
Switch is used for next mode set. Device starts in Idle mode which is indicated by the lightened green bulb.  

Please refer to HARD.MD for hardware assembly related details.

### Up and running
Assemble hardware part and put the software sketch into Arduino IDE.<br>
Upload it to your Pomodoro-Genuino. Green bulb will be lightened. Press switch in order to set Task mode.

### Acknowledgements:
Hardware part of this version utilizes hardware setup from [Spaceship Interface project from ArduinoStarterKit](https://www.arduino.cc/en/ArduinoStarterKit/Prj02)
