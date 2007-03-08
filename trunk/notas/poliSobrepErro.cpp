#include <iostream>

using namespace std;

class Base 
{
  public:
    // virtual void exibe_mensa() // virtual se desejar redefinicao!!!
    void exibe_mensa() 
          { cout << "Esta na classe-base\n"; };
};

class Derivada: public Base 
{
  public:
    void exibe_mensa() 
         { cout << "Esta na classe derivada\n" ; };
};

int main()
{
   Base *ponteiro_base = new Base;
   ponteiro_base->exibe_mensa();

   ponteiro_base = new Derivada;
   ponteiro_base->exibe_mensa();
   
   return 0;
}

