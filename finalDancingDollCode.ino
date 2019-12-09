#include <IRremote.h>
#include <Servo.h>

Servo leftArmServo;
Servo rightArmServo;
Servo neckServo;
Servo leftElbowServo;
Servo rightElbowServo;
Servo headSpinServo;

int RECV_PIN = 11;              //gray=5V, white=GND, black=OUTPUT
IRrecv irrecv(RECV_PIN);
decode_results results;

void stop() 
{

  leftArmServo.write(177);
  rightArmServo.write(0);
  neckServo.write(3);
  leftElbowServo.write(0);
  rightElbowServo.write(179);
  headSpinServo.write(93);

}

void setup() 
{
  
  leftArmServo.attach(10);
  rightArmServo.attach(9);
  neckServo.attach(6);
  leftElbowServo.attach(5);
  rightElbowServo.attach(3);
  headSpinServo.attach(4);

  //IR remote
  Serial.begin(9600);
  Serial.println("Startup");
  irrecv.enableIRIn();
  //irrecv.blink13(true);

  Serial.begin(9600);
  stop();

}

void loop() {
  if (irrecv.decode(&results)) {
    Serial.println(results.value);

    // results.value = key_value;
    if (results.value == 2724036735) {    //key 1 left arm raise
      
      leftArmServo.write(40);
      
    }

    

    if (results.value == 2724020415) {    //key 2 left elbow wave
      
      leftElbowServo.write(55);
      delay(250);
      leftElbowServo.write(0);
      delay(250);

      leftElbowServo.write(55);
      delay(250);
      leftElbowServo.write(0);
      delay(250);

      leftElbowServo.write(55);
      delay(250);
      leftElbowServo.write(0);
      delay(250);

      leftElbowServo.write(55);
      delay(250);
      leftElbowServo.write(0);
      delay(250);
      
    }

    if (results.value == 2724053055) {    //key 3 right arm raise
      
      rightArmServo.write(137);
      
    }

    if (results.value == 2724012255) {    //key 4 right elbow wave
      
      rightElbowServo.write(125);
      delay(250);
      rightElbowServo.write(179);
      delay(250);

      rightElbowServo.write(125);
      delay(250);
      rightElbowServo.write(179);
      delay(250);

      rightElbowServo.write(125);
      delay(250);
      rightElbowServo.write(179);
      delay(250);

      rightElbowServo.write(125);
      delay(250);
      rightElbowServo.write(179);
      delay(250);

    }

    if (results.value == 2724044895) {    //key 5 neck nod
      
      neckServo.write(45);
      delay(250);
      neckServo.write(3);
      delay(250);

      neckServo.write(45);
      delay(250);
      neckServo.write(3);
      delay(250);

      neckServo.write(45);
      delay(250);
      neckServo.write(3);
      delay(250);

      neckServo.write(45);
      delay(250);
      neckServo.write(3);
      delay(250);

      neckServo.write(45);
      delay(250);
      neckServo.write(3);
      delay(250);

      neckServo.write(45);
      delay(250);
      neckServo.write(3);
      delay(250);

      neckServo.write(45);
      delay(250);
      neckServo.write(3);
      delay(250);

      neckServo.write(45);
      delay(250);
      neckServo.write(3);
      delay(250);
      
    }

    if (results.value == 2724028575) {    //key 6 head spin left
      
      headSpinServo.write(0);

    }

    if (results.value == 2724045915) {    //key 10+ head spin right
      
      headSpinServo.write(179);
      
    }

    if (results.value == 2724040815) {    //key 9 head spin only stop
      
      headSpinServo.write(93);

    }

    if (results.value == 2724061215) {    //key 7 stop position all servos
      
      stop();

    }

    

    if (results.value == 2724036990) {    //key down arrow head bang dance
      
      rightArmServo.write(150);
      
      neckServo.write(45);
      delay(250);
      neckServo.write(3);
      delay(250);

      neckServo.write(45);
      delay(250);
      neckServo.write(3);
      delay(250);

      neckServo.write(45);
      delay(250);
      neckServo.write(3);
      delay(250);

      neckServo.write(45);
      delay(250);
      neckServo.write(3);
      delay(250);

      neckServo.write(45);
      delay(250);
      neckServo.write(3);
      delay(250);

      neckServo.write(45);
      delay(250);
      neckServo.write(3);
      delay(250);

      neckServo.write(45);
      delay(250);
      neckServo.write(3);
      delay(250);

    }

    if (results.value == 2724067080) {    //key clear jumping jacks arms and head
      
      leftArmServo.write(40);
      rightArmServo.write(117);
      neckServo.write(45);
      delay(400);

      leftElbowServo.write(140);
      rightElbowServo.write(39);
      neckServo.write(3);
      delay(400);

      leftElbowServo.write(0);
      rightElbowServo.write(179);
      neckServo.write(45);
      delay(400);
      
      leftArmServo.write(177);
      rightArmServo.write(0);
      neckServo.write(3);
      delay(400);

      leftArmServo.write(40);
      rightArmServo.write(117);
      neckServo.write(45);
      delay(400);
      
      leftElbowServo.write(140);
      rightElbowServo.write(39);
      neckServo.write(3);
      delay(400);

      leftElbowServo.write(0);
      rightElbowServo.write(179);
      neckServo.write(45);
      delay(400);
      
      leftArmServo.write(177);
      rightArmServo.write(0);
      neckServo.write(3);
      delay(400);

      leftArmServo.write(40);
      rightArmServo.write(117);
      neckServo.write(45);
      delay(400);
      
      leftElbowServo.write(140);
      rightElbowServo.write(39);
      neckServo.write(3);
      delay(400);

      leftElbowServo.write(0);
      rightElbowServo.write(179);
      neckServo.write(45);
      delay(400);
      
      leftArmServo.write(177);
      rightArmServo.write(0);
      neckServo.write(3);
      delay(400);

      leftArmServo.write(40);
      rightArmServo.write(117);
      neckServo.write(45);
      delay(400);
      
      leftElbowServo.write(140);
      rightElbowServo.write(39);
      neckServo.write(3);
      delay(400);

      leftElbowServo.write(0);
      rightElbowServo.write(179);
      neckServo.write(45);
      delay(400);
      
      leftArmServo.write(177);
      rightArmServo.write(0);
      neckServo.write(3);
      delay(400);
      
      stop();
    
    }

    if (results.value == 2724049485) {    //key right arrow shoot the roof
      
      leftArmServo.write(10);
      delay(500);

      leftArmServo.write(120);
      leftElbowServo.write(120);
      rightArmServo.write(170);
      delay(500);

      leftArmServo.write(10);
      leftElbowServo.write(0);
      rightArmServo.write(60);
      rightElbowServo.write(60);
      delay(500);

      leftArmServo.write(120);
      leftElbowServo.write(120);
      rightArmServo.write(170);
      rightElbowServo.write(170);
      delay(500);

      leftArmServo.write(10);
      leftElbowServo.write(0);
      rightArmServo.write(60);
      rightElbowServo.write(60);
      delay(500);

      leftArmServo.write(120);
      leftElbowServo.write(120);
      rightArmServo.write(170);
      rightElbowServo.write(170);
      delay(500);

      leftArmServo.write(10);
      leftElbowServo.write(0);
      rightArmServo.write(60);
      rightElbowServo.write(60);
      delay(500);

      leftArmServo.write(120);
      leftElbowServo.write(120);
      rightArmServo.write(170);
      rightElbowServo.write(170);
      delay(500);

      leftArmServo.write(10);
      leftElbowServo.write(0);
      rightArmServo.write(60);
      rightElbowServo.write(60);
      delay(500);

      leftArmServo.write(120);
      leftElbowServo.write(120);
      rightArmServo.write(170);
      rightElbowServo.write(170);
      delay(500);

      stop();
    
    }

    if (results.value == 2724004350) {    //key up arrow egyptian dance
      
      leftArmServo.write(40);
      rightArmServo.write(137);
      delay(750);

      headSpinServo.write(0);
      
      leftElbowServo.write(55);
      rightElbowServo.write(125);
      delay(250);
      leftElbowServo.write(0);
      rightElbowServo.write(179);
      delay(250);

      leftElbowServo.write(55);
      rightElbowServo.write(125);
      delay(250);
      leftElbowServo.write(0);
      rightElbowServo.write(179);
      delay(250);

      leftElbowServo.write(55);
      rightElbowServo.write(125);
      delay(250);
      leftElbowServo.write(0);
      rightElbowServo.write(179);
      delay(250);

      leftElbowServo.write(55);
      rightElbowServo.write(125);
      delay(250);
      leftElbowServo.write(0);
      rightElbowServo.write(179);
      delay(250);

      headSpinServo.write(179);
      
      leftElbowServo.write(55);
      rightElbowServo.write(125);
      delay(250);
      leftElbowServo.write(0);
      rightElbowServo.write(179);
      delay(250);

      leftElbowServo.write(55);
      rightElbowServo.write(125);
      delay(250);
      leftElbowServo.write(0);
      rightElbowServo.write(179);
      delay(250);

      leftElbowServo.write(55);
      rightElbowServo.write(125);
      delay(250);
      leftElbowServo.write(0);
      rightElbowServo.write(179);
      delay(250);

      leftElbowServo.write(55);
      rightElbowServo.write(125);
      delay(250);
      leftElbowServo.write(0);
      rightElbowServo.write(179);
      delay(250);

      headSpinServo.write(0);
      
      leftElbowServo.write(55);
      rightElbowServo.write(125);
      delay(250);
      leftElbowServo.write(0);
      rightElbowServo.write(179);
      delay(250);

      leftElbowServo.write(55);
      rightElbowServo.write(125);
      delay(250);
      leftElbowServo.write(0);
      rightElbowServo.write(179);
      delay(250);

      leftElbowServo.write(55);
      rightElbowServo.write(125);
      delay(250);
      leftElbowServo.write(0);
      rightElbowServo.write(179);
      delay(250);

      leftElbowServo.write(55);
      rightElbowServo.write(125);
      delay(250);
      leftElbowServo.write(0);
      rightElbowServo.write(179);
      delay(250);

      headSpinServo.write(93);

    }

    if (results.value == 2724037755) {    //key enter arm wave dance
      
      leftArmServo.write(30);
      leftElbowServo.write(45);
      rightArmServo.write(30);
      rightElbowServo.write(135);
      delay(500);
      leftArmServo.write(90);
      leftElbowServo.write(1);
      rightArmServo.write(90);
      rightElbowServo.write(179);
      delay(500);
      leftArmServo.write(125);
      leftElbowServo.write(2);
      rightArmServo.write(125);
      rightElbowServo.write(179);
      delay(500);
      
      leftArmServo.write(90);
      leftElbowServo.write(1);
      rightArmServo.write(90);
      rightElbowServo.write(179);
      delay(500);
      leftArmServo.write(30);
      leftElbowServo.write(45);
      rightArmServo.write(30);
      rightElbowServo.write(135);
      delay(500);
      leftArmServo.write(90);
      leftElbowServo.write(1);
      rightArmServo.write(90);
      rightElbowServo.write(179);
      delay(500);

      leftArmServo.write(125);
      leftElbowServo.write(2);
      rightArmServo.write(125);
      rightElbowServo.write(179);
      delay(500);
      leftArmServo.write(90);
      leftElbowServo.write(1);
      rightArmServo.write(90);
      rightElbowServo.write(179);
      delay(500);
      leftArmServo.write(30);
      leftElbowServo.write(45);
      rightArmServo.write(30);
      rightElbowServo.write(135);
      delay(500);

      leftArmServo.write(90);
      leftElbowServo.write(1);
      rightArmServo.write(90);
      rightElbowServo.write(179);
      delay(500);
      leftArmServo.write(125);
      leftElbowServo.write(2);
      rightArmServo.write(125);
      rightElbowServo.write(179);
      delay(500);
      leftArmServo.write(90);
      leftElbowServo.write(1);
      rightArmServo.write(90);
      rightElbowServo.write(179);
      delay(500);

      leftArmServo.write(30);
      leftElbowServo.write(45);
      rightArmServo.write(30);
      rightElbowServo.write(135);
      delay(500);
      leftArmServo.write(90);
      leftElbowServo.write(1);
      rightArmServo.write(90);
      rightElbowServo.write(179);
      delay(500);
      leftArmServo.write(125);
      leftElbowServo.write(2);
      rightArmServo.write(125);
      rightElbowServo.write(179);
      delay(500);

      leftArmServo.write(90);
      leftElbowServo.write(1);
      rightArmServo.write(90);
      rightElbowServo.write(179);
      delay(500);

    }

    if (results.value == 2724021435) {    //key return YMCA dance
      
      leftArmServo.write(25);             //Y stance
      rightArmServo.write(140);
      delay(750);

      leftElbowServo.write(140);          //M
      rightElbowServo.write(45);
      delay(500);

      rightElbowServo.write(100);         //C
      leftArmServo.write(140);
      leftElbowServo.write(40);
      delay(500);

      rightElbowServo.write(110);         //A
      rightArmServo.write(140);
      leftArmServo.write(25);
      leftElbowServo.write(60);
      delay(500);
      
      stop();
      delay(1500);

      leftArmServo.write(25);
      rightArmServo.write(140);
      delay(750);

      leftElbowServo.write(140);
      rightElbowServo.write(45);
      delay(500);

      rightElbowServo.write(100);
      leftArmServo.write(140);
      leftElbowServo.write(40);
      delay(500);

      rightElbowServo.write(110);
      rightArmServo.write(140);
      leftArmServo.write(25);
      leftElbowServo.write(60);
      delay(1000);

      stop();
      
    }

    if (results.value == 2724039285) {    //key left arrow raise the roof 1 dance
      
      leftArmServo.write(10);
      rightArmServo.write(170);
      delay(500);

      leftArmServo.write(120);
      leftElbowServo.write(120);
      rightArmServo.write(60);
      rightElbowServo.write(60);
      delay(500);

      leftArmServo.write(10);
      leftElbowServo.write(0);
      rightArmServo.write(170);
      rightElbowServo.write(170);
      delay(500);

      leftArmServo.write(120);
      leftElbowServo.write(120);
      rightArmServo.write(60);
      rightElbowServo.write(60);
      delay(500);

      leftArmServo.write(10);
      leftElbowServo.write(0);
      rightArmServo.write(170);
      rightElbowServo.write(170);
      delay(500);

      leftArmServo.write(120);
      leftElbowServo.write(120);
      rightArmServo.write(60);
      rightElbowServo.write(60);
      delay(500);

      leftArmServo.write(10);
      leftElbowServo.write(0);
      rightArmServo.write(170);
      rightElbowServo.write(170);
      delay(500);

      leftArmServo.write(120);
      leftElbowServo.write(120);
      rightArmServo.write(60);
      rightElbowServo.write(60);
      delay(500);

      leftArmServo.write(10);
      leftElbowServo.write(0);
      rightArmServo.write(170);
      rightElbowServo.write(170);
      delay(500);

      leftArmServo.write(120);
      leftElbowServo.write(120);
      rightArmServo.write(60);
      rightElbowServo.write(60);
      delay(500);

      stop();

    }

    /*if (results.value == 2724008175) {    //key 8 TEST left arm and right
      
      leftArmServo.write(10);
      rightArmServo.write(170);
      delay(500);

      leftArmServo.write(120);
      leftElbowServo.write(120);
      rightArmServo.write(60);
      rightElbowServo.write(60);
      delay(500);
      
    }*/

    if (results.value == 2724035460) {    //key top menu stop position all servos
      
      stop();

    }
    
 irrecv.resume();

  }
}
