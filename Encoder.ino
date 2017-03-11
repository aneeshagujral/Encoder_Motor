unsigned long encA=2;
float n=0;
float r=1/768;  //RPR(Rev/pulse)
int a=1;
unsigned long t;
void setup()
{
  Serial.begin(9600);
  pinMode(13,OUTPUT);
 
  attachInterrupt(digitalPinToInterrupt(encA),encoder,RISING);
}
void loop()
{
  digitalWrite(13,HIGH);
  t=millis();   // counting milliseconds since the time arduino starts
  Serial.println(t);  // displays time in milliseconds
  if(t==60000*a)
  {
    Serial.println(n);    //displays number of pulses after every 60 seconds
    a++;
  }
 }

void encoder()
{
  n++;  //number of pulses
  
}

