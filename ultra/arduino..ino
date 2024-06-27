int TRIG_PIN = 4; 
int ECHO_PIN = 3; 
int red_led  = 9;
int blue_led = 8;
float d1 = 300;
float d2 = 500;



float duration_us, distance_cm;

void setup() {
  Serial.begin (9600);       
  pinMode(TRIG_PIN, OUTPUT); 
  pinMode(ECHO_PIN, INPUT);  
  pinMode(red_led, OUTPUT);
  pinMode(blue_led, OUTPUT);
}

void loop() {
  
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  
  duration_us = pulseIn(ECHO_PIN, HIGH);
  
  distance_cm = 0.017 * duration_us;

  if(distance_cm > d1 && distance_cm < d2 )
    digitalWrite(red_led, HIGH); 
  else if(distance_cm > d2)
    digitalWrite(blue_led, HIGH);
  

  // print the value to Serial Monitor
    Serial.print(duration_us);
  Serial.print(" ");
  Serial.print("distance: ");
  Serial.print(distance_cm);
  Serial.println(" cm");

  delay(500);
}
