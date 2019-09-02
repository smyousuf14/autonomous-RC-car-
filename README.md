# autonomous-RC-car-

![test1](https://user-images.githubusercontent.com/44485548/64124165-450ea980-cd74-11e9-9a04-7ed567915ea6.jpg)

# Goal:
The purpose of this project was to create an autonomous RC car that goes forward until it reaches a STOP sign where it pauses for a few seconds before moving again.

# Equipment used
A Raspberry pi 3 model b+ was used in order to recived video input from the pi camera and pass it over through a machine learning model for detecting STOP signs. The Machine learning model that was used was opencv's haar cascade. If the python program on the Raspberry Pi determined that it detects a STOP sign only a few centemeters away from the RC car, it sends a message via USB cable to the Arduino which is controlling the motors. The arduino would then stop for a few seconds before moving again.

![test2](https://user-images.githubusercontent.com/44485548/64124484-1fce6b00-cd75-11e9-86eb-e55104bbdc57.jpg)









