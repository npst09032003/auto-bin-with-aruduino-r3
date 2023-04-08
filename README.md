# You have to install a lib that can help to calculate the distance from the sensor to an obstacle.You can also build your own funtion but I recommend using that lib. I've attached that lib. This lib is developed by https://github.com/jeroendoggen, you can follow him for more information. I'll put the full link below.
# https://github.com/jeroendoggen/Arduino-distance-sensor-library.git
# I'll show how to make an automatic-bin, it's very easy
# You'll need some material. I'll list below.
# Arduino Uno R3:
![image](https://user-images.githubusercontent.com/103082614/201532264-b0377d92-ddd0-4488-a9b7-a8eb1b31e89a.png)
# Ultrasonic Sensor SRF05:
![image](https://user-images.githubusercontent.com/103082614/201532421-6e39f658-9f71-4041-b722-ffff1af52c6c.png)
# Mini servo motor SG90:
![image](https://user-images.githubusercontent.com/103082614/201532496-a1c9ad98-bc59-4141-9fe6-ea93f68bb2ce.png)
# Bus test board:
![image](https://user-images.githubusercontent.com/103082614/201533266-1de59e8c-2e61-45c2-9a41-592f4f196c82.png)
# Test board:
![image](https://user-images.githubusercontent.com/103082614/201536675-f2bcea23-2afb-4010-bae2-014913a06d1a.png)
# Trash bin:
![image](https://user-images.githubusercontent.com/103082614/201535109-01b7830f-bcb2-490a-afa5-14a8bb495f98.png)
# Step by step:
- Connect ultrasonic sensor to arduino: there are 5 ports but we only use 4 ports: VCC, Trig, Echo and GND. Connect those ports to arduino: VCC-5V, Trig-D13,Echo-D12, GND-GND.
- Connect servo to arduino: arduino R3 only have 1 port 5V, so I will use test board, so that we can use port 5V between servo and sensor. Connect those ports to arduino: VCC-5V, GND-GND, Signal-D11.
- Connect arduino to Arduino IDE and upload file controller.ino to arduino.
- Test the funtion before we move to next part.
- Design the bin as you want.
