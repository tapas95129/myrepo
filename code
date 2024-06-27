int redpin = 8;
int greenpin = 10;
int bluepin = 9;
String mycolour;
String msg = "what colour do you want?";
void setup()
{
 Serial.begin(9600);
  pinMode(redpin,OUTPUT);
  pinMode(greenpin,OUTPUT);
  pinMode(bluepin,OUTPUT);
  
}

void loop()
{
  Serial.println(msg);
  while(Serial.available()==0){
    
  }
  mycolour= Serial.readString();
  if(mycolour == "red"){
    digitalWrite(redpin,HIGH);
    digitalWrite(greenpin,LOW);
    digitalWrite(bluepin,LOW);
  }
  if(mycolour == "green"){
    digitalWrite(redpin,LOW);
    digitalWrite(greenpin,HIGH);
    digitalWrite(bluepin,LOW);
  }
  if(mycolour == "blue"){
    digitalWrite(redpin,LOW);
    digitalWrite(greenpin,LOW);
    digitalWrite(bluepin,HIGH);
  }
  if(mycolour == "off"){
    digitalWrite(redpin,LOW);
    digitalWrite(greenpin,LOW);
    digitalWrite(bluepin,LOW);
  }
  if(mycolour == "aqua"){
    analogWrite(redpin,0);
    analogWrite(greenpin,255);
   analogWrite(bluepin,150);
  }
   if(mycolour == "yellow"){
    analogWrite(redpin,255);
    analogWrite(greenpin,255);
   analogWrite(bluepin,0);
  }
  if(mycolour == "pink"){
    digitalWrite(redpin,255);
    analogWrite(greenpin,0);
   analogWrite(bluepin,100);
  }
    
}
