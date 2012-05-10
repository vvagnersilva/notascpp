#ifndef _weatherdata_
#define _weatherdata_

#include "Observer.h"
#include "Subject.h"

#include <list>

/*
 * Implementa a interface Subject
 */
namespace subject
{
   class WeatherData : public Subject
   {
      public:
         WeatherData();
         virtual ~WeatherData();

         void registerObserver( observer::Observer* o );
         void removeObserver( observer::Observer* o );
         void notifyObservers();
         void measurementsChanged();
         void setMeasurements(float temperature, float humidity, float pressure);
         float getTemperature();
         float getHumidity();
         float getPressure();

      protected:
      private:
         std::list< observer::Observer* > m_observers;
         float m_temperature;
         float m_humidity;
         float m_pressure;
   };
}
#endif //_weatherdata_
