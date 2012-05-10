#ifndef _observer_
#define _observer_

namespace observer
{
   class Observer
   {
      public:
         
         virtual void update(float temperature, float humidity, float pressure);
       
      protected:
      private:
    };
}
#endif //_observer_
