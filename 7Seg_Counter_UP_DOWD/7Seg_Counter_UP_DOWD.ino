#define a 13
#define b 12
#define c 11
#define d 10
#define e 9
#define f 8
#define g 7

int yy;

void setup() {
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
  yy=9;
}

void loop() {
  angka(yy);
  delay(200);
  yy--;
  if(yy<0){yy=9;} 
  
}
