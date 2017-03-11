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
  
  if(t==60000*a)
  {
      unsigned long f=(n/a);  //PPM (pulses/min)
      Serial.println(f);  //print PPM
       a++;
  }
 }

void encoder()
{
  n++;  //number of pulses
  
}

