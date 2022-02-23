void setup() {
  pinMode(13,INPUT_PULLUP);
  pinMode(7,OUTPUT);
}

void loop() {
 kon1:
 if(digitalRead(13)==LOW){delay(200);goto kon2;}
 digitalWrite(7,LOW); 
 goto kon1;

 kon2:
 if(digitalRead(13)==LOW){delay(200);goto kon1;}
 digitalWrite(7,HIGH);
 goto kon2;

}
