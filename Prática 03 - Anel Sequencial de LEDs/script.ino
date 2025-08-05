int leds[] = { 13,12,11,10,9,8,7,6,5,4,3,2};
int time = 100;

void setup()
{
  for ( int i = 0 ; i < 12 ; i++ ) {
  	pinMode(leds[i], OUTPUT);
  }
}

void loop()
{
  for ( int i = 0 ; i < 12 ; i++ ) {
    digitalWrite(leds[i], HIGH);
    delay(time);
    digitalWrite(leds[i], LOW);
  }
}