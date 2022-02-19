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

int puluhan,satuan;
int yy;

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
  yy=0;
}

void loop() {
  for(yy=90;yy>50;yy--){
    for(int tunda=0;tunda<5;tunda++){
      setAngka(yy);
    }
    
  }

}
