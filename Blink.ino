#define customDDRB  *((volatile byte*) 0x24)
#define customPORTB *((volatile byte*) 0x25)



void customDelay(long delayTime)
{
  long tempTime = millis();
  do
  {
  }while (millis()-tempTime<delayTime);
}
void setup() 
{
  customDDRB |= 0b00100000;
}

void loop() 
{
  customPORTB |= 0b00100000;
  customDelay(500);                      
  customPORTB &= 0b00000000;    
  customDelay(500);                       
}