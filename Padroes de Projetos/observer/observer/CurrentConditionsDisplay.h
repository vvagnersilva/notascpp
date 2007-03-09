#ifndef _currentconditionsdisplay_
#define _currentconditionsdisplay_

#include "Observer.h"
#include "DisplayElement.h"
#include "WeatherData.h"

namespace observer
{
   class CurrentConditionsDisplay : public Observer, public DisplayElement
   {
      public:
         
         CurrentConditionsDisplay(subject::WeatherData* weatherData);
         virtual ~CurrentConditionsDisplay();
  
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
#endif //_currentconditionsdisplay_
