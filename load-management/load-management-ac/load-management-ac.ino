double voltageADCVal = 0.0; // read the Vout from voltage divider

void setup()
{
  Serial.begin(9600);
}

void loop()
{

  //get real time battery voltage value...
  voltageADCVal = analogRead(1);
  Serial.println(voltageADCVal);  
  
    
  delay(1000);
}
