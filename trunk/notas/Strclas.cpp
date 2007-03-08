#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void bolha(char *matriz[], int tamanho)
{
   char *temp; 
   int i, j;

   for (i = 0; i < tamanho; i++) 
    for (j = 0; j < tamanho; j++)
      if (strcmp(matriz[i], matriz[j]) < 0)
        {
          temp = matriz[i];
          matriz[i] = matriz[j];
          matriz[j] = temp;
        }
}

void main(void)
{
   char *valores[] = {"AAA", "CCC", "BBB", "EEE", "DDD"};
   int i;

   bolha(valores, 5);

   for (i = 0; i < 5; i++)
     printf("%s ", valores[i]);
}

