int led =8;
int led2 = 9;
int led3 = 10;
int led4 = 11;
int led5 = 12;
int led6 = 13;
int boton = 7;
int boton2 = 6;
int boton3 = 5;
int boton4 = 4;
int boton5 = 3;
int boton6 = 2;
int estado = 1;
int estado2 = 0;
int estado3 = 0;
int estado4 = 0;
int estado5 = 0;
int estado6 = 0;

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(boton, INPUT);
  
  pinMode(led2, OUTPUT);
  pinMode(boton2, INPUT);
  
  pinMode(led3, OUTPUT);
  pinMode(boton3, INPUT);
  
  pinMode(led4, OUTPUT);
  pinMode(boton4, INPUT);
  
  pinMode(led5, OUTPUT);
  pinMode(boton5, INPUT);
  
  pinMode(led6, OUTPUT);
  pinMode(boton6, INPUT);
}


void loop()
{
 estado = digitalRead(boton);
 estado2 = digitalRead(boton2);
 estado3 = digitalRead(boton3);
 estado4 = digitalRead(boton4);
 estado5 = digitalRead(boton5);
 estado6 = digitalRead(boton6);
  //si
  if (estado == HIGH){
    digitalWrite(led,HIGH);
    
  }
  else if(estado2 == HIGH){
     digitalWrite(led2,HIGH);
  }
  else if(estado3 == HIGH){
    digitalWrite(led3,HIGH);
  }
  else if(estado4 == HIGH){
    digitalWrite(led4,HIGH);
  }
  else if(estado5 == HIGH){
    digitalWrite(led5,HIGH);
  }
  else if(estado6 == HIGH){
    digitalWrite(led6,HIGH);
  }
  //de lo contrario
  else{
  digitalWrite(led,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led6,LOW);
  }
   
}