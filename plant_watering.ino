int moistureSensor = A0;
int relay = 7;

int moistureValue;
int threshold = 500;

void setup()
{
  pinMode(relay, OUTPUT);
  digitalWrite(relay, HIGH);

  Serial.begin(9600);
}

void loop()
{
  moistureValue = analogRead(moistureSensor);

  Serial.print("Soil Moisture: ");
  Serial.println(moistureValue);

  if (moistureValue > threshold)
  {
    // Soil is dry
    digitalWrite(relay, LOW);
    Serial.println("Soil is Dry - Pump ON");
  }
  else
  {
    // Soil is wet
    digitalWrite(relay, HIGH);
    Serial.println("Soil is Wet - Pump OFF");
  }

  delay(1000);
}