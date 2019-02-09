#define a 2//left ir
#define b 3//centre ir
#define c 4//right ir
#define lm1 5//left motor 1
#define lm2 6//left motor 2
#define rm1 7//right motor 1
#define rm2 8//right motor 2
#define v1 9//+5V Vcc output
#define v2 10//+5V Vcc output
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(a,INPUT);
pinMode(b,INPUT);
pinMode(c,INPUT);
pinMode(lm1,OUTPUT);
pinMode(lm2,OUTPUT);
pinMode(rm1,OUTPUT);
pinMode(rm2,OUTPUT);
digitalWrite(v1,HIGH);
digitalWrite(v2,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
int le,ce,ri;
le=digitalRead(a);
ce=digitalRead(b);
ri=digitalRead(c);
if(ce==1 && ri==0)
{fwd();Serial.print("FORWARD");}
else if(ce==0 && le==1 && ri==0)
{lft();Serial.print("LEFT");}
else if(ri==1)
{rit();Serial.print("RIGHT");}
else if(ce==0 && le==0 && ri==0)
{rit();Serial.print("TURNING AROUND");}//all right algorithm change to lft() if all left algorithm is required
delay(5);
}
void fwd()
{
  analogWrite(lm1,255);//to maintain synchronization
  analogWrite(lm2,0);
  analogWrite(rm1,140);
  analogWrite(rm2,0);
}
void lft()
{
  digitalWrite(lm1,LOW);
  digitalWrite(lm2,HIGH);
  digitalWrite(rm1,HIGH);
  digitalWrite(rm2,LOW);
}
void rit()
{
  digitalWrite(lm1,HIGH);
  digitalWrite(lm2,LOW);
  digitalWrite(rm1,LOW);
  digitalWrite(rm2,HIGH);
}
void stp()
{
  digitalWrite(lm1,LOW);
  digitalWrite(lm2,LOW);
  digitalWrite(rm1,LOW);
  digitalWrite(rm2,LOW);
}
