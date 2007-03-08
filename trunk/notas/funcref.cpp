#include <iostream>

using namespace std;

void muda_valor(int& valor_referencia)
{
   valor_referencia = 1500;
}

int main()
{
   int valor = 10;
   int& apelido = valor;

   cout << "Valor antes da fun‡Æo: " << valor << '\n';
   muda_valor(apelido);
   cout << "Valor ap¢s a fun‡Æo: " << valor << '\n';

   return 0;
}
