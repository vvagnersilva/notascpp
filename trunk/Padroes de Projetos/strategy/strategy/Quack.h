#ifndef _quack_
#define _quack_

#include "Quack.h"
#include "QuackBehavior.h"

namespace strategy
{
   class Quack : public QuackBehavior
   {
      public:
         void quack();
	 
      protected:
      private:
    };
}
#endif //_quack_
