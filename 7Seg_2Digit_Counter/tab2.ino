void setAngka(int xxx){  //angka 57
  
  if(xxx<10){puluhan=0;satuan=xxx;}
  else if(xxx<20){puluhan=1;satuan=xxx-10;}
  else if(xxx<30){puluhan=2;satuan=xxx-20;}
  else if(xxx<40){puluhan=3;satuan=xxx-30;}
  else if(xxx<50){puluhan=4;satuan=xxx-40;}
  else if(xxx<60){puluhan=5;satuan=xxx-50;}
  else if(xxx<70){puluhan=6;satuan=xxx-60;}
  else if(xxx<80){puluhan=7;satuan=xxx-70;}
  else if(xxx<90){puluhan=8;satuan=xxx-80;}
  else if(xxx<100){puluhan=9;satuan=xxx-90;}
  
  digitalWrite(com1,LOW);
  digitalWrite(com2,HIGH);
  angka(puluhan);
  delay(50);

  digitalWrite(com1,HIGH);
  digitalWrite(com2,LOW);
  angka(satuan);
  delay(50);
}
