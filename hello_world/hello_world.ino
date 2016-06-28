int LED = 13;
int INTERVAL = 250;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED,HIGH);
  delay(INTERVAL);
  digitalWrite(LED,LOW);
  delay(INTERVAL);
}
