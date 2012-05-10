#include <stdio.h>

int qual_e_o_valor(int ***ptr)
{
   return(***ptr);
}

int main(void)
{
   int *nivel_1, **nivel_2, ***nivel_3, valor = 1001;

   nivel_1 = &valor;
   nivel_2 = &nivel_1;
   nivel_3 = &nivel_2;

   printf("O valor ‚ %d\n", qual_e_o_valor(nivel_3));

   return 0;
}

