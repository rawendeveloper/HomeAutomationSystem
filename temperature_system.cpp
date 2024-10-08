#include "temperature_system.h"
#include "Arduino.h"
#include "main.h"


void init_temperature_system(void)
{
  pinMode(COOLER, OUTPUT);
  pinMode(HEATER, OUTPUT);
  
  digitalWrite(COOLER, LOW);
  digitalWrite(HEATER, LOW);    
}

float read_temperature(void)
{
  float temp;
  temp = ((analogRead(A0) * (float)5/1024)) / (float)0.01;

  return temp;
}

void cooler_control(bool control)
{
  digitalWrite(COOLER, control); 
}

void heater_control(bool control)
{
  digitalWrite(HEATER, control); 
}
