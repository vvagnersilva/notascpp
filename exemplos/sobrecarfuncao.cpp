#include <iostream>

using namespace std;

int soma(int *matriz, int elemento_conta)
{
   int result = 0;
   int conta;

   for (conta = 0; conta < elemento_conta; conta++)
      result += matriz[conta];
   return(result);
}

float soma(float *matriz, int elemento_conta)
{
   float result = 0;
   int conta;

   for (conta = 0; conta < elemento_conta; conta++)
      result += matriz[conta];
   return(result);
}

int main() 
{
   int a[5] = { 1, 2, 3, 4, 5 };
   float b[4] = { 1.11, 2.22, 3.33, 4.44 };

   cout <<"Soma dos valores int: "  << soma(a, 5) << '\n';
   cout <<"Soma dos valores float: "<< soma(b, 4) << '\n';

   return 0;
}

