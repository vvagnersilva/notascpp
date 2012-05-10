#include "WeatherData.h"
#include "CurrentConditionsDisplay.h"
#include "StatisticsDisplay.h"
#include "ForecastDisplay.h"

int main( int argc, char *argv[] )
{
    subject::WeatherData* weatherData = new subject::WeatherData();

    // o Observador conhece o sujeito
    observer::CurrentConditionsDisplay* currentDisplay = new observer::CurrentConditionsDisplay( weatherData );
    observer::StatisticsDisplay* statisticsDisplay = new observer::StatisticsDisplay( weatherData );
    observer::ForecastDisplay* forecastDisplay = new observer::ForecastDisplay( weatherData );

    // Mudando o Sujeito. As alteracoes sao refletidas p/ todos os observadores registrados
    weatherData->setMeasurements(80, 65, 30.4);
    weatherData->setMeasurements(100, 200, 355);
    weatherData->setMeasurements(78, 90, 29.2);
    return 0;
}
