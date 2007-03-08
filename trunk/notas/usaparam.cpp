#include <iostream>

using namespace std;

void permuta(int *a, int *b)
{
   int temp = *a;
   *a = *b;
   *b = temp;
}

void permuta(int *a, int *b, int *c, int *d)
{
   int temp = *a;
   *a = *b;
   *b = temp;
   temp = *c;
   *c = *d;
   *d = temp;
}

int main()
{
   int a = 1, b = 2 , c = 3, d = 4;

   permuta(&a, &b);
   cout << "Permutei a e b " << a << b << '\n';
   permuta(&a, &b, &c, &d);
   cout << "Permutei quatro " << a << b << c << d << '\n';

   return 0;
}

