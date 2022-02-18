#define a 13
#define b 12
#define c 11
#define d 10
#define e 9
#define f 8
#define g 7

int pin[7]={a,b,c,d,e,f,g};
int angka[10][7]={
  {1,1,1,1,1,1,0},
  {0,1,1,0,0,0,0},
  {1,1,0,1,1,0,1},
  {1,1,1,1,0,0,1},
  {0,1,1,0,0,1,1},
  {1,0,1,1,0,1,1},
  {1,0,1,1,1,1,1},
  {1,1,1,0,0,0,0},
  {1,1,1,1,1,1,1},
  {1,1,1,1,0,1,1}
  };

void setup() {
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
}

void loop() {
for(int y=9;y>=0;y-=2){
  for(int x=0;x<7;x++){
    digitalWrite(pin[x],angka[y][x]);
  }
  delay(500);
}

}
