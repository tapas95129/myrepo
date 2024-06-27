int lightpin = A0;
int lightvalue;
int dv = 250;
int redpin = 9;
int greenpin = 8;
int delayValue = 250;
int led = 9;

void setup()
{
  pinMode(lightpin, INPUT);
  pinMode(redpin,OUTPUT);
  pinMode(greenpin,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  lightvalue = analogRead(lightpin);
  Serial.println(lightvalue);
  if(lightvalue>350){
    digitalWrite(greenpin,HIGH);
    digitalWrite(redpin,LOW);
  }
  else{
    digitalWrite(greenpin,LOW);
    digitalWrite(redpin,HIGH);
  }
  
}
