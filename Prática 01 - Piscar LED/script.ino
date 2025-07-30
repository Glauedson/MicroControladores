// Primeira Aula de microcontroladores

int ledPi[4] = {13,12,11,10};
int wait = 200;
int contLed = sizeof(ledPi)/ sizeof(ledPi[0]);

void setup() // bloco de configuração ( R: 1x )
{
  for ( int i = 0 ; i < contLed ; i++ ){
	  pinMode(ledPi[i], OUTPUT);
  }
}

void loop() // bloco de repetição ( R: Infinito )
{
  for ( int i = 0 ; i < contLed ; i++ ) {
    digitalWrite(ledPi[i], HIGH);
    delay(wait);
    digitalWrite(ledPi[i], LOW);
  }
}