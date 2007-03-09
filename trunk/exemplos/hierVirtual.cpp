#include <iostream>

using namespace std;

class base
{
  public:
    virtual void func_v(void)
     {
       cout << "Esta ‚ func_v() de base." << endl;
     }
 };

class derivada1 : public base
{
  public:
    void func_v(void)
     {
       cout << "Esta ‚ func_v() de derivada." << endl;
     }
 };

class derivada2 : public derivada1 { };

int main()
{
   base *p, b;
   derivada1 d1;
   derivada2 d2;

   p = &b;        // Aponta para a classe-base
   p->func_v();
   p = &d1;       // Aponta para a primeira classe derivada
   p->func_v();
   p = &d2;       // Aponta para a segunda classe derivada
   p->func_v();   // No entanto, usa a fun‡Æo func_v de
                  // derivada1 
   return 0;
}
