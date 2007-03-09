#include "ForecastDisplay.h"
#include <iostream>

namespace observer
{
   ForecastDisplay::ForecastDisplay()
   {
      currentPressure = 29.92;
   }
   //
   ForecastDisplay::ForecastDisplay(subject::WeatherData* weatherData)
   {
      m_weatherData = weatherData;
      m_weatherData->registerObserver(this);
   }
   //
   ForecastDisplay::~ForecastDisplay()
   {
   }
   //
   void ForecastDisplay::update(float temp, float humidity, float pressure)
   {
      lastPressure = currentPressure;
      currentPressure = pressure;
      display();
   }
   //
   void ForecastDisplay::display()
   {
      std::cout << "Forecast -> ";
      if (currentPressure > lastPressure)
      {
         std::cout << "Improving weather on the way!" << std::endl;
      }
      else if (currentPressure == lastPressure)
      {
         std::cout << "More of the same" << std::endl;
      }
      else if (currentPressure < lastPressure)
      {
         std::cout << "Watch out for cooler, rainy weather" << std::endl;
      }
   }
}
