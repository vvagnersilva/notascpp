#ifndef _statisticsdisplay_
#define _statisticsdisplay_

#include "Observer.h"
#include "DisplayElement.h"
#include "WeatherData.h"

namespace observer
{
   class StatisticsDisplay : public Observer, public DisplayElement
   {
      public:
         
         StatisticsDisplay(subject::WeatherData* weatherData);
         virtual ~StatisticsDisplay();
  
         void update(float temp, float humidity, float pressure); 
	      void display(); 
         
      protected:
      private:
        float m_temperature;
        float m_humidity;
        float m_pressure;
      
        subject::WeatherData* m_weatherData;
   };
}
#endif //_statisticsdisplay_
