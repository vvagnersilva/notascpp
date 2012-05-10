#include "CurrentConditionsDisplay.h"
#include <iostream>

namespace observer
{
   CurrentConditionsDisplay::CurrentConditionsDisplay(subject::WeatherData* weatherData)
   {
      m_weatherData = weatherData;
      m_weatherData->registerObserver(this);
   }
   //
   CurrentConditionsDisplay::~CurrentConditionsDisplay()
   {
   }
   //
   void CurrentConditionsDisplay::update(float temperature, float humidity, float pressure)
   {
      m_temperature = temperature;
      m_humidity = humidity;
      m_pressure = pressure;
      display();
   }
   //
   void CurrentConditionsDisplay::display()
   {
      std::cout << "CurrentConditionsDisplay -> "
                << "Temperatura: " << m_temperature
                << "\tHumidade: " << m_humidity
                << "\tPressao: " << m_pressure << std::endl;
   }
}
