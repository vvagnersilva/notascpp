#include <iostream>

using namespace std;

class pos
{
  private:
  
    int longitude, latitude;
 
  public:
    pos(void) {}    // Usada para construir tempor rios
    pos (int lg, int lt)
      {
         longitude = lg;
         latitude = lt;
      }
    void exibe(void)
      {
         cout << longitude << " ";
         cout << latitude << endl;
      }
    pos operator=(pos op2);
    friend pos operator++(pos &op1); // Amiga sobrecarregada
    friend pos operator--(pos &op1); // Amiga sobrecarregada
};

pos pos::operator=(pos op2)
{
   longitude = op2.longitude;
   latitude = op2.latitude;

   return *this;
}

pos operator++(pos &op)
{
   op.longitude++;
   op.latitude++;

   return op;
}

pos operator--(pos &op)
{
  op.longitude--;
  op.latitude--;

  return op;
}

int main()
{
   pos ob1(10,20), ob2;

   ob1.exibe();
   ++ob1;
   ob1.exibe();         // Exibe 11 e 21
   ob2 = ++ob1;
   ob2.exibe();         // Exibe 12 e 22
   --ob2;
   ob2.exibe();         // Exibe 11 e 21 novamente 
   
   return 0;
}
