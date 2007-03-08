#include <stdio.h>
#include <string.h>


void main(void)
{
   printf("Comparando 3 letras Abc com Abc %d\n",
      strncmp("Abc", "Abc", 3));
   printf("Comparando 3 letras abc com Abc %d\n",
      strncmp("abc", "Abc", 3));
   printf("Comparando 3 letras abcd com abc %d\n",
      strncmp("abcd", "abc", 3));
   printf("Comparando 5 letras Abc com Abcd %d\n",
      strncmp("Abc", "Abcd", 5));
   printf("Comparando 4 letras abcd com abcd %d\n",
      strncmp("abcd", "abcd", 4));
}

