#include <iostream>

using namespace std;

class converte 
{
 protected:
   double val1;
   double val2;
 public:
   converte(double i)
    {
      val1 = i;
    }
    double obtem_conv() {return val2;}
    double obtem_init() {return val1;}
    virtual void compute() = 0;
 };

// litros para galoes 
class l_para_g : public converte {
 public:
   l_para_g(double i) : converte(i) { }
   void compute()
    {
      val2 = val1 / 3.7854;
    }
};

// Fahrenheit para Centigrados
class f_para_c : public converte {
 public:
   f_para_c(double i) : converte(i) { }
   void compute()
    {
      val2 = (val1 - 32) / 1.8;
    }
 };

int main()
{
   converte *p;    // ponteiro para a classe-base

   l_para_g lgob(4);
   f_para_c fcob(70);

   p = &lgob;     // converte litros para galoes
   cout << p->obtem_init() << " litros sao ";
   p->compute();
   cout << p->obtem_conv() << " galoes." << endl;

   p = &fcob;    // converte fahrenheit para centigrados
   cout << p->obtem_init() << " em Fahrenheit sao ";
   p->compute();
   cout << p->obtem_conv() << " Centigrados." << endl;
   
   return 0;
}
