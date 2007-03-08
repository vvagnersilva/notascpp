#include <iostream.h>

class base 
{
  public:
    int i;
};

class derivada1 : virtual public base 
{
  public:
    int j;
};

class derivada2 : virtual public base 
{
  public:
    int k;
};

class derivada3 : public derivada1, public derivada2 
{
  public:
    int soma;
};

void main(void)
{
   derivada3 objeto;

   objeto.i = 10;             // agora i n∆o Ç amb°gua
   objeto.j = 20;
   objeto.k = 30;
   objeto.soma = objeto.i + objeto.j + objeto.k;
   cout << objeto.i << " ";
   cout << objeto.j << " " << objeto.k << " ";
   cout << objeto.soma << endl;
}

