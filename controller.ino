#include <DistanceSRF04.h>

#include <Servo.h>

DistanceSRF04 Dist;

Servo myservo;

#define GOC_DONG 0 //Đây là góc đóng của servo

#define GOC_MO 110 //Đây là góc mở của servo

int distance;

unsigned long previousMillis = 0;

unsigned char autoTrigger = 0;

unsigned long autoMillis = 0;

void setup()

{

  Serial.begin(9600);

  //echo, trigger

  Dist.begin(12, 13);

  //servo

  myservo.attach(11);

  myservo.write(GOC_DONG);

}

void loop()

{ // Phần previousMillis >= 100 đây chính là thời gian lấy mẫu của cảm biến siêu âm 100ms

  if (millis() - previousMillis >= 100) {

    previousMillis = millis();

    distance = Dist.getDistanceCentimeter();

    Serial.print("\nDistance in centimers: ");

    Serial.print(distance);

// Phần distance < 10 đây là phần cài đặt khoảng cách cảm biến nhận được kích hoạt mở thùng rác

    if (distance < 10) {

      autoTrigger = 1;

      autoMillis = millis();

      myservo.write(GOC_MO);

    }

  }

// Phần autoMillis >= 2000 đây sẽ là thời gian tự động đóng thùng rác sau 2s

  if (millis() - autoMillis >= 2000 && autoTrigger == 1) {

     autoTrigger = 0;

     myservo.write(GOC_DONG);

  }

}
