int ledPi[] = {13,12,11}; // verde, amarelo, vermelho
int times[] = {6000,500,6500}; // verde, amarelo, vermelho

// Visor
int PinVisor[] = {3,2,6,7,8,4,5}; // pino a,b,c,d,e,f,g

// Tabela para cada número: 0 a 9
// Cada linha representa os segmentos [a, b, c, d, e, f, g]
const bool numbers[10][7] = {
  {1, 1, 1, 1, 1, 1, 0}, // 0
  {0, 1, 1, 0, 0, 0, 0}, // 1
  {1, 1, 0, 1, 1, 0, 1}, // 2
  {1, 1, 1, 1, 0, 0, 1}, // 3
  {0, 1, 1, 0, 0, 1, 1}, // 4
  {1, 0, 1, 1, 0, 1, 1}, // 5
  {1, 0, 1, 1, 1, 1, 1}, // 6
  {1, 1, 1, 0, 0, 0, 0}, // 7
  {1, 1, 1, 1, 1, 1, 1}, // 8
  {1, 1, 1, 1, 0, 1, 1}  // 9
};

void setup()
{
  for ( int i = 0 ; i < 3 ; i++ ){
	pinMode(ledPi[i], OUTPUT);
  }
  
  // visor
  for ( int i = 0 ; i < 7 ; i++ ){
	pinMode(PinVisor[i], OUTPUT);
  }
}

// Função para mostrar um número no display
void showNumbers(int num) {
  for (int i = 0; i < 7; i++) {
    digitalWrite(PinVisor[i], numbers[num][i]);
  }
}

void loop()
{ 
  for (int i = 0; i <= 2; i++) {
    digitalWrite(ledPi[i], HIGH);

    int seconds = times[i] / 1000;

    for (int s = seconds; s >= 0; s--) {
      showNumbers(s);
      delay(1000); 
    }

    digitalWrite(ledPi[i], LOW);
  }
  
}