//Program by Phoenix Palaray
//license comply with MIT License

bool traff = false;
int light =120;
void setup(){
  int i;
  for(i=2;i<14;i++)
    pinMode(i,OUTPUT);
  Serial.begin(9600);
}

void loop(){
  int i=0;
  i=analogRead(A0);
  if (i>light){
  Serial.println(i);
  traff1(traff);
  }
  else
  {
   digitalWrite(11,LOW);
   digitalWrite(13,LOW);
    yellow(500);
    delay(500);
    Serial.print(i);
    Serial.println("y");
  }
}

void yellow(int d){
  digitalWrite(12,HIGH);
    delay(d);
    digitalWrite(12,LOW);
   
}

void traff1(bool traff1){
  if (traff==false){
       digitalWrite(11,LOW);
       
    digitalWrite(13,HIGH);
     delay(1000);
     
    traff = not traff;
  }
  else
    {
    
     digitalWrite(13,LOW);
     yellow(500);
    digitalWrite(11,HIGH);
    delay(1000);
  
    traff = not traff;
    }
}
