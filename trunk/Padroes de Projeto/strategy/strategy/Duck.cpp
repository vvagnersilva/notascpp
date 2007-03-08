#include "Duck.h"
#include <iostream>

namespace strategy
{
   void Duck::quack()
   {
   }
   //
   void Duck::display()
   {
   }
   //
   void Duck::performFly()
   {
      flyBehavior->fly();
   }
   void Duck::performQuack()
   {
      quackBehavior->quack();
   }
   //
   void Duck::swim()
   {
      std::cout << "All ducks float, even decoys" << std::endl;
   }
}
