
#define  ledpin 2
#define  ledpin2 7
#define  potantiometer A0


void setup() {
pinMode(potantiometer,INPUT); 
pinMode(ledpin,OUTPUT); 
Serial.begin(9600);


}

void loop() {
int potvalue=analogRead(potantiometer)/4;
Serial.println(potvalue);
if(potvalue<=125)
{
  digitalWrite(ledpin,1);
digitalWrite(ledpin2,0);

}


if(potvalue>125)
{
  
  digitalWrite(ledpin,0);
  digitalWrite(ledpin2,1);
}
}
