#include <stdio.h>

int strlen(char str[])
{
   int i=0;

   while (str[i] != NULL)
      i++;

   return(i);
}

int main()
{
   printf("O tamanho de ABC ‚ %d\n", strlen("ABC"));
   printf("O tamanho de B¡blia do Programador C/C++ ‚ %d\n",
     strlen("B¡blia do Programador C/C++"));
   printf("Tamanho de uma string NULL ‚ %d\n", strlen(""));

   return 0;
}

