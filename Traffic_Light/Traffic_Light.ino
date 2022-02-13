#define P1M 13
#define P1K 12
#define P1H 11
#define P2M 10
#define P2K 9
#define P2H 8
#define P3M 7
#define P3K 6
#define P3H 5
#define P4M 4
#define P4K 3
#define P4H 2

int WHijau=2000;
int WKuning=500;


void setup() {
  pinMode(P4H,OUTPUT);
  pinMode(P4K,OUTPUT);
  pinMode(P4M,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
}

void loop() {
  Jalur1(0,0,1);Jalur2(1,0,0);Jalur3(1,0,0);Jalur4(1,0,0);
  delay(WHijau); 
  Jalur1(0,1,0);Jalur2(1,0,0);Jalur3(1,0,0);Jalur4(1,0,0);
  delay(WKuning); 

  Jalur1(1,0,0);Jalur2(0,0,1);Jalur3(1,0,0);Jalur4(1,0,0);
  delay(WHijau); 
  Jalur1(1,0,0);Jalur2(0,1,0);Jalur3(1,0,0);Jalur4(1,0,0);
  delay(WKuning);

  Jalur1(1,0,0);Jalur2(1,0,0);Jalur3(0,0,1);Jalur4(1,0,0);
  delay(WHijau); 
  Jalur1(1,0,0);Jalur2(1,0,0);Jalur3(0,1,0);Jalur4(1,0,0);
  delay(WKuning);

  Jalur1(1,0,0);Jalur2(1,0,0);Jalur3(1,0,0);Jalur4(0,0,1);
  delay(WHijau); 
  Jalur1(1,0,0);Jalur2(1,0,0);Jalur3(1,0,0);Jalur4(0,1,0);
  delay(WKuning);
}



void Jalur1(bool L1M,bool L1K,bool L1H){
  if(L1M==1){digitalWrite(P1M,HIGH);}else{digitalWrite(P1M,LOW);}
  if(L1K==1){digitalWrite(P1K,HIGH);}else{digitalWrite(P1K,LOW);}
  if(L1H==1){digitalWrite(P1H,HIGH);}else{digitalWrite(P1H,LOW);}
}

void Jalur2(bool L2M,bool L2K,bool L2H){
  if(L2M==1){digitalWrite(P2M,HIGH);}else{digitalWrite(P2M,LOW);}
  if(L2K==1){digitalWrite(P2K,HIGH);}else{digitalWrite(P2K,LOW);}
  if(L2H==1){digitalWrite(P2H,HIGH);}else{digitalWrite(P2H,LOW);}
}

void Jalur3(bool L3M,bool L3K,bool L3H){
  if(L3M==1){digitalWrite(P3M,HIGH);}else{digitalWrite(P3M,LOW);}
  if(L3K==1){digitalWrite(P3K,HIGH);}else{digitalWrite(P3K,LOW);}
  if(L3H==1){digitalWrite(P3H,HIGH);}else{digitalWrite(P3H,LOW);}
}

void Jalur4(bool L4M,bool L4K,bool L4H){
  if(L4M==1){digitalWrite(P4M,HIGH);}else{digitalWrite(P4M,LOW);}
  if(L4K==1){digitalWrite(P4K,HIGH);}else{digitalWrite(P4K,LOW);}
  if(L4H==1){digitalWrite(P4H,HIGH);}else{digitalWrite(P4H,LOW);}
}
