#define LEDPORT 2

void LED_1_BLUE()
{
}

void LED_1_RED()
{
}

void LED_1_GREEN()
{
	delay(1000);
	digitalWrite(LEDPORT, HIGH);
	digitalWrite(LEDPORT, LOW);
	digitalWrite(LEDPORT, HIGH);
	digitalWrite(LEDPORT, LOW);
	digitalWrite(LEDPORT, HIGH);
	digitalWrite(LEDPORT, LOW);
	digitalWrite(LEDPORT, HIGH);
	digitalWrite(LEDPORT, LOW);
	digitalWrite(LEDPORT, HIGH);
	digitalWrite(LEDPORT, LOW);
	digitalWrite(LEDPORT, HIGH);
	digitalWrite(LEDPORT, LOW);
	digitalWrite(LEDPORT, HIGH);
	digitalWrite(LEDPORT, LOW);
	digitalWrite(LEDPORT, HIGH);
	digitalWrite(LEDPORT, LOW);
}

void LED_1_WHITE()
{
	delay(1000);
	digitalWrite(LEDPORT, HIGH);
	digitalWrite(LEDPORT, LOW);
	digitalWrite(LEDPORT, HIGH);
	digitalWrite(LEDPORT, LOW);
	digitalWrite(LEDPORT, HIGH);
	digitalWrite(LEDPORT, LOW);
	digitalWrite(LEDPORT, HIGH);
	digitalWrite(LEDPORT, LOW);
	digitalWrite(LEDPORT, HIGH);
	digitalWrite(LEDPORT, LOW);
	digitalWrite(LEDPORT, HIGH);
	digitalWrite(LEDPORT, LOW);
	digitalWrite(LEDPORT, HIGH);
	digitalWrite(LEDPORT, LOW);
	digitalWrite(LEDPORT, HIGH);
	digitalWrite(LEDPORT, LOW);

	digitalWrite(LEDPORT, HIGH);
	digitalWrite(LEDPORT, LOW);
	digitalWrite(LEDPORT, HIGH);
	digitalWrite(LEDPORT, LOW);
	digitalWrite(LEDPORT, HIGH);
	digitalWrite(LEDPORT, LOW);
	digitalWrite(LEDPORT, HIGH);
	digitalWrite(LEDPORT, LOW);
	digitalWrite(LEDPORT, HIGH);
	digitalWrite(LEDPORT, LOW);
	digitalWrite(LEDPORT, HIGH);
	digitalWrite(LEDPORT, LOW);
	digitalWrite(LEDPORT, HIGH);
	digitalWrite(LEDPORT, LOW);
	digitalWrite(LEDPORT, HIGH);
	digitalWrite(LEDPORT, LOW);
	
	digitalWrite(LEDPORT, HIGH);
	digitalWrite(LEDPORT, LOW);
	digitalWrite(LEDPORT, HIGH);
	digitalWrite(LEDPORT, LOW);
	digitalWrite(LEDPORT, HIGH);
	digitalWrite(LEDPORT, LOW);
	digitalWrite(LEDPORT, HIGH);
	digitalWrite(LEDPORT, LOW);
	digitalWrite(LEDPORT, HIGH);
	digitalWrite(LEDPORT, LOW);
	digitalWrite(LEDPORT, HIGH);
	digitalWrite(LEDPORT, LOW);
	digitalWrite(LEDPORT, HIGH);
	digitalWrite(LEDPORT, LOW);
	digitalWrite(LEDPORT, HIGH);
	digitalWrite(LEDPORT, LOW);
}

void setup()
{
	pinMode(LED_BUILTIN, OUTPUT);
	pinMode(LEDPORT, OUTPUT);
	digitalWrite(LEDPORT, LOW);
	
	LED_1_GREEN();
}

void loop()
{
	delay(1000);
	digitalWrite(LED_BUILTIN, HIGH);
	delay(1000);
	digitalWrite(LED_BUILTIN, LOW);
}
