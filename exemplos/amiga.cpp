#include <iostream>

using namespace std;

class exemplo
{
   int a, b;
   public:
      friend int soma(exemplo x);
      void define_ab(int i, int j);
};

void exemplo::define_ab(int i, int j)
{
   a = i;
   b = j;
}

int soma(exemplo object)
{
   // Como soma ‚ uma amiga de exemplo, ela pode acessar a e
   // b diretamente 
   return object.a + object.b;
}

int main()
{
   exemplo integer;

   cout << "Somando 3 e 4:" << endl;
   integer.define_ab(3,4);
   cout << soma(integer);

   return 0;
}

