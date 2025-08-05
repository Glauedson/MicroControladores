// Prática 02 - Semáforo simples

int ledPi[] = {13,12,11}; // verde, amarelo, vermelho
int times[] = {3000,500,3500}; // verde, amarelo, vermelho

void setup()
{
  for ( int i = 0 ; i < 3 ; i++ ){
	pinMode(ledPi[i], OUTPUT);
  }
}

void loop()
{ 
  for ( int i = 0 ; i <= 2 ; i++ ) {
  	digitalWrite(ledPi[i], HIGH);
  	delay(times[i]);
  	digitalWrite(ledPi[i], LOW);
  }
}