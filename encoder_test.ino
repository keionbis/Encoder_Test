void setup() {
  attachInterrupt(0,Incriment,RISING);
  attachInterrupt(1,Incriment,RISING);
  pinMode(6,OUTPUT);
  Serial.begin(9600);
}
int val = 0;
void loop() {
  analogWrite(6,150);
  delay(9026);
  Serial.println(val);
  val = 0;
}

void Incriment()
{
  val++;
}

