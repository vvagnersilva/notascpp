#include <iostream>

using namespace std;

int algumaf(int a);
int algumaf(int a, int b);

int main(void)
{
   int (*fp)(int a);   // ponteiro para int xxx(int)

   fp = algumaf;         // aponta para algumaf(int)
   cout << fp(5);

   return 0;
}

int algumaf(int a)
{
   return a;
}

int algumaf(int a, int b)
{
   return a*b;
}

