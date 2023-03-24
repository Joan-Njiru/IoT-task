int echopin=2;
int trigpin=3;

long durations;
int distance;

void setup()
{
  pinMode(echopin, INPUT);
  pinMode(trigpin,OUTPUT);
  Serial.begin (9600);
}

void loop()
{
 
  long duration, distance_cm;
  digitalWrite(trigpin, LOW);
  delay(2000);
  digitalWrite(trigpin, HIGH);
  delay(10000);
  digitalWrite(trigpin, LOW);
  duration = pulseIn(echopin, HIGH);
  distance_cm = duration * 0.034 / 2;
 
  delay(1000);
}