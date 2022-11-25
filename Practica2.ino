int ledr=8;
int leda=10;
int ledv=12;
void setup() { //Configuracion
  // put your setup code here, to run once:
  pinMode(ledr, OUTPUT);
  pinMode(leda, OUTPUT);
  pinMode(ledv, OUTPUT);
}
void loop() { //Ejecucion 
  // put your main code here, to run repeatedly:
  digitalWrite(ledv,HIGH);
  delay(1000);
  digitalWrite(ledv,LOW);
  delay(200);
  digitalWrite(ledv,HIGH);
  delay(200);
  digitalWrite(ledv,LOW);
  delay(200);
  digitalWrite(ledv,HIGH);
  delay(200);

  digitalWrite(leda,LOW);
  digitalWrite(ledr,LOW);
  delay(1000);

  digitalWrite(ledv,LOW);
  digitalWrite(leda,HIGH);
  delay(1000);

  digitalWrite(ledr,HIGH);
  digitalWrite(leda,LOW);
  delay(3000);




}
