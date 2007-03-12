#include <stdio.h>

int pega_result(int a, int b, int (*ptr)(int, int))
{
   return(ptr(a, b));  // Chama a funcao passada
}

int max(int a, int b)
{
   printf("Em max\n");
   return((a > b) ? a: b);
}

int min(int a, int b)
{
   printf("Em min\n");
   return((a < b) ? a: b);
}

int main()
{
   int result;

   result = pega_result(1, 2, &max);
   printf("O maximo entre 1 e 2: %d\n", result);

   result = pega_result(1, 2, &min);
   printf("O minimo de 1 e 2: %d\n ", result);
   
   return 0;
}

