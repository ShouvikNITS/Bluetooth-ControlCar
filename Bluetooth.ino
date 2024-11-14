#define enA 5
#define in1 8
#define in2 9
#define enB 6
#define in3 10
#define in4 11

char I;

int base_speed = 255;


void setup() {
  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);

  Serial.begin(9600);  // Default communication rate of the Bluetooth module
}

void loop() {
  // put your main code here, to run repeatedly:

  
  if (Serial.available() > 0) {
    I = Serial.read();
  }

  if (I == 'F') {
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);
    analogWrite(enA, base_speed);
    analogWrite(enB, base_speed);
  } else if (I == 'B') {
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
    analogWrite(enA, base_speed);
    analogWrite(enB, base_speed);
  } else if (I == 'L') {
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
    analogWrite(enA, base_speed);
    analogWrite(enB, base_speed);

  } else if (I == 'R') {
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);
    analogWrite(enA, base_speed);
    analogWrite(enB, base_speed);
  } else if (I == 'S') {
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
    digitalWrite(in3, LOW);
    digitalWrite(in4, LOW);
    analogWrite(enA, 0);
    analogWrite(enB, 0);
  }
  delay(10);
}
