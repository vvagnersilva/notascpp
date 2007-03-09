#include <stdio.h>

void troca_valores(int *a, int *b)
{ 
   int temp;

   temp = *a;  // Armazena temporariamente o valor 
               // apontado por a 
   *a = *b;    // Atribui o valor de b a a 
   *b = temp;  // Atribui o valor de a a b
}

int main()
{
   int um = 1, dois = 2;

   troca_valores(&um, &dois);

   printf("um cont‚m %d dois cont‚m %d\n", um, dois);

   return 0;
}

