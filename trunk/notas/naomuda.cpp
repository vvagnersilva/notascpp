#include <stdio.h>

// Demonstra a passagem por valor
void exibe_e_altera(int primeiro, int segundo, 
    int terceiro)
{
   printf("Valores originais da funcao %d %d %d\n",
       primeiro, segundo, terceiro);

   primeiro += 100; 
   segundo += 100;
   terceiro += 100;

   printf("Valores finais da funcao %d %d %d\n", 
      primeiro, segundo, terceiro);
}

int main()
{
   int a = 1, b = 2, c = 3;

   exibe_e_altera(a, b, c);

   printf("Valores finais em main %d %d %d\n", a,b,c);
 
   return 0;
}
