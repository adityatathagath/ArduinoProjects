void setup() {
  // put your setup code here, to run once:
#define ldr A5                       //Analog pin 5 wil read values from LDR sensor.
#define red 10                      //Digital pin 13 is connected to red pin of RGB LED.
#define green 9                    //Digital pin 12 is connected to green pin of RGB LED.
#define blue 8                     //Digital pin 11 is connected to blue pin of RGB LED.
pinMode(red,OUTPUT);
pinMode(green,OUTPUT);
pinMode(blue,OUTPUT);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
int val = analogRead(ldr);          //Value from LDR sensor will be stored here.
if(val>100 and val<175)
{
  digitalWrite(red,HIGH);
  digitalWrite(green,LOW);         //RED light will glow.
  digitalWrite(blue,LOW);
  Serial.println(val);
}
else
{
  if(val>=178 and val<=260)
{
   digitalWrite(red,LOW);
   digitalWrite(green,HIGH);        //GREEN light will glow.  
   digitalWrite(blue,LOW);
   Serial.println(val);
}
else
{ 
    if(val>290 and val<=350)
{
      digitalWrite(red,LOW);
      digitalWrite(green,LOW);     //BLUE light will glow.
      digitalWrite(blue,HIGH);
      Serial.println(val);
}
else
{
     digitalWrite(red,LOW);
     digitalWrite(green,LOW);      //Default LED will be off.
     digitalWrite(blue,LOW);
     Serial.println(val); 
     
    }}}
delay(2000);
}
