#define a 13
#define b 12
#define c 11
#define d 10
#define e 9
#define f 8
#define g 7
#define dot 6
#define com1 3 
#define com2 2 

void setup() {
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
  pinMode(dot,OUTPUT);
  pinMode(com1,OUTPUT);
  pinMode(com2,OUTPUT);

}

void loop() {
  digitalWrite(com1,LOW);
  digitalWrite(com2,HIGH);
  angka(1);
  delay(50);

  digitalWrite(com1,HIGH);
  digitalWrite(com2,LOW);
  angka(2);
  delay(50);

  

}
