#include "WeatherData.h"
#include <algorithm>

namespace subject
{
   WeatherData::WeatherData()
   {
   }
   //
   WeatherData::~WeatherData()
   {
   }
   // Cadastro dos observadores
   void WeatherData::registerObserver(observer::Observer* o)
   {
      m_observers.push_back(o);
   }
   //
   void WeatherData::removeObserver(observer::Observer* o)
   {
      std::list< observer::Observer* >::const_iterator itr;

      itr = std::find(m_observers.begin(), m_observers.end(), o);

      if(itr!= m_observers.end() )
      {
         m_observers.remove(*itr);
      }
   }
   //
   void WeatherData::notifyObservers()
   {
      std::list< observer::Observer* >::const_iterator itr;

      for( itr = m_observers.begin(); itr!= m_observers.end(); ++itr)
      {
         (*itr)->update(m_temperature, m_humidity, m_pressure);
      }
   }
   //
   void WeatherData::measurementsChanged()
   {
      notifyObservers();
   }
   //
   void WeatherData::setMeasurements(float temperature, float humidity, float pressure)
   {
      m_temperature = temperature;
      m_humidity = humidity;
      m_pressure = pressure;
      // Notificamos os observadores quando
      // obtemos medicoes atualizadas
      measurementsChanged();
    }
   //
    float WeatherData::getTemperature()
    {
       return m_temperature;
    }
    float WeatherData::getHumidity()
    {
       return m_humidity;
    }
    float WeatherData::getPressure()
    {
       return m_pressure;
    }
}
