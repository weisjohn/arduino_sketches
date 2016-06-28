// pin that the on-board LED is connected to
int LED = 13;

// time (ms) interval for flashing on / off
int INTERVAL = 250;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED,OUTPUT);

  Serial.begin(9600);
}

int loop_count = 0;
void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(loop_count);
  loop_count = loop_count + 1;

  // turn on, wait
  digitalWrite(LED,HIGH);
  delay(INTERVAL);

  // turn off, wait
  digitalWrite(LED,LOW);
  delay(INTERVAL);
}

