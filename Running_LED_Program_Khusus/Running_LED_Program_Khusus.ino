int waktu=100;

void setup() {
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(13,OUTPUT);  
}

void loop() {  
  RunLED(1,0,0,0,0); delay(waktu);
  RunLED(1,1,0,0,0); delay(waktu);
  RunLED(1,1,1,0,0); delay(waktu);
  RunLED(1,1,1,1,0); delay(waktu);
  RunLED(1,1,1,1,1); delay(waktu);
  RunLED(1,1,1,1,0); delay(waktu);
  RunLED(1,1,1,0,0); delay(waktu);
  RunLED(1,1,0,0,0); delay(waktu);
  RunLED(1,0,0,0,0); delay(waktu);
  RunLED(0,0,0,0,0); delay(waktu);
}


void RunLED(bool a,bool b,bool c, bool d,bool e){
  if(a==1){digitalWrite(2,HIGH);}else{digitalWrite(2,LOW);}
  if(b==1){digitalWrite(3,HIGH);}else{digitalWrite(3,LOW);}
  if(c==1){digitalWrite(8,HIGH);}else{digitalWrite(8,LOW);}
  if(d==1){digitalWrite(10,HIGH);}else{digitalWrite(10,LOW);}
  if(e==1){digitalWrite(13,HIGH);}else{digitalWrite(13,LOW);}

}
