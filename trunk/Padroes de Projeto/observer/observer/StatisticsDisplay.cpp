#include "StatisticsDisplay.h"
#include <iostream>

namespace observer
{
   StatisticsDisplay::StatisticsDisplay(subject::WeatherData* weatherData)
   {
      m_weatherData = weatherData;
      m_weatherData->registerObserver(this);
   }
   //
   StatisticsDisplay::~StatisticsDisplay()
   {
   }
   //
   void StatisticsDisplay::update(float temperature, float humidity, float pressure)
   {
      m_temperature = temperature;
      m_humidity = humidity;
      m_pressure = pressure;
      display();
   }
   //
   void StatisticsDisplay::display()
   {
      std::cout << "StatisticsDisplay -> "
                << "Temperatura: " << m_temperature
                << "\tHumidade: " << m_humidity
                << "\tPressao: " << m_pressure << std::endl;
   }
}
