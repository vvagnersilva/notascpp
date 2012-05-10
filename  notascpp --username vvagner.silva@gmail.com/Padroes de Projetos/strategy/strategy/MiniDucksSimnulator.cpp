#include "Duck.h"
#include "MallardDuck.h"

int main( int argc, char *argv[] )
{
   strategy::Duck* mallard =  new strategy::MallardDuck();

   mallard->performQuack();
   mallard->performFly();
     
   return 0;
}
