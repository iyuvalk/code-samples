int servo = 1;
int data = 48;

void setup() {
  // put your setup code here, to run once:
  pinMode(servo, OUTPUT);
  Serial.begin(9600);
  while(!Serial);
}

void loop() {
  if(Serial.available() > 0){
    data = Serial.read();
  }

  if (data != 48) {
    Serial.println(data);
    analogWrite(servo, 255);
    delay(1000);
  }
  else {
    analogWrite(servo, 0);
  }
}
