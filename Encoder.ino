unsigned long encA=2;
float n=0;
float r=768;  //RPR(Rev/pulse)
int a=1;
unsigned long t,PPM;
float rpm;
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
  
  if(t==60000*a)
  {
      PPM=(n/a);  //PPM (pulses/min)
      rpm=PPM/r;
      Serial.println("RPM=");
      Serial.println(rpm);  //print RPM
       a++;
  }
 }

void encoder()
{
  n++;  //number of pulses
  
}

