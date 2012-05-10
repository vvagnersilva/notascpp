#ifndef _duck_
#define _duck_

#include "FlyBehavior.h"
#include "QuackBehavior.h"

namespace strategy
{
   class Duck
   {
      public:
         void quack();
	      void display();
	      void performFly();
	      void performQuack();
	      void swim();
	
      protected:
         QuackBehavior* quackBehavior; 
         FlyBehavior*  flyBehavior;
      private:
      	
	      
    };
}
#endif //_duck_
