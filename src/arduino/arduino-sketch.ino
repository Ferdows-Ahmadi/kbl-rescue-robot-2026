/*
  KBL Rescue - TS-900 Robot
*/

const int LEFT_PWM = 5;
const int LEFT_DIR = 4;
const int RIGHT_PWM = 6;
const int RIGHT_DIR = 7;

void setup() {
  Serial.begin(115200);
  pinMode(LEFT_PWM, OUTPUT);
  pinMode(LEFT_DIR, OUTPUT);
  pinMode(RIGHT_PWM, OUTPUT);
  pinMode(RIGHT_DIR, OUTPUT);
}

void loop() {

  analogWrite(LEFT_PWM, 0);
  analogWrite(RIGHT_PWM, 0);
  delay(100);
}
