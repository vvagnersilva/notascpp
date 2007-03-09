#include "MallardDuck.h"
#include "Quack.h"
#include "FlyWithWings.h"
#include "MuteQuack.h"
#include "FlyNoWay.h"

namespace strategy
{
   MallardDuck::MallardDuck()
   {
      //Pode-se escolher a familia de algoritmos a ser executada
		//quackBehavior = new Quack();
	   //flyBehavior = new FlyWithWings();
      quackBehavior = new MuteQuack();
		flyBehavior = new FlyNoWay();		
   }
   //
   void MallardDuck::display() 
   {
   }
}
