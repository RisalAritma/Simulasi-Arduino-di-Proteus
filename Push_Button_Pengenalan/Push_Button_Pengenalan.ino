void setup() {
  pinMode(13,INPUT_PULLUP);
  pinMode(10,INPUT_PULLUP);
  pinMode(7,OUTPUT);

}

void loop() {
  if(digitalRead(13)==LOW){digitalWrite(7,HIGH);}

  if(digitalRead(10)==LOW){digitalWrite(7,LOW);}


}
