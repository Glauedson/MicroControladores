
void setup()
{
  pinMode(12, INPUT_PULLUP);
  pinMode(8, OUTPUT);
  
  Serial.begin(9600);
}

int status = 0;

void loop()
{
  int sinal = digitalRead(12);
 
  if ( sinal == 0 ) {
  	status = !status;
    Serial.println(status);
    delay(300);
  } 

  digitalWrite(8, status);
}