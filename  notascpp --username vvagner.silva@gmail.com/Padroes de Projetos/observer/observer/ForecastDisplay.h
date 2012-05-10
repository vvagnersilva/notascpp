#ifndef _forecastdisplay_
#define _forecastdisplay_

#include "Observer.h"
#include "WeatherData.h"
#include "DisplayElement.h"

namespace observer
{
   class ForecastDisplay : public Observer, public DisplayElement 
   {
      public:
         ForecastDisplay();
         ForecastDisplay(subject::WeatherData* weatherData);
         virtual ~ForecastDisplay();

         void update(float temp, float humidity, float pressure);
	 void display();

      protected:

      private:
         float currentPressure;
         float lastPressure;
	 subject::WeatherData* m_weatherData;
   };
}
#endif //_forecastdisplay_
