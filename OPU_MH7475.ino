//================================================================================================
// define output pins
int MH7475_INPT = 3;
int MH7475_CLK = 6;


//================================================================================================
void setup() 
{
  // set the pins to output
  pinMode(MH7475_INPT, OUTPUT);
  pinMode(MH7475_CLK, OUTPUT);
}


//================================================================================================
void loop() 
{
  // input/clock signal
  digitalWrite(MH7475_INPT, LOW);
  digitalWrite(MH7475_CLK, LOW);
  delay(250);
  digitalWrite(MH7475_INPT, HIGH);
  digitalWrite(MH7475_CLK, LOW);
  delay(250);
  digitalWrite(MH7475_INPT, LOW);
  digitalWrite(MH7475_CLK, HIGH);
  delay(250);
  digitalWrite(MH7475_INPT, HIGH);
  digitalWrite(MH7475_CLK, HIGH);
  delay(250);
}