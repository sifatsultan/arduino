double voltageADCVal = 0.0; // read the Vout from voltage divider
double averageVoltageADCVal = 0.0;
double currentSensorADCVal = 0.0;   
double averageCurrentSensorADCVal = 0.0;
int i = 0;
int values[500];


void setup()
{
  Serial.begin(9600);
}


void loop()
{
 values[i] = analogRead(1);
// Serial.println(analogRead(1));
 
i++;
  if( i == 500){
    Serial.println("I just enterd the loop");
    for(int j=0; j<500; j++){
      int x = values[j];
      Serial.println(x);      
    }
  }
  
}
