#include <stdio.h>
#include <string.h>

int main(void)
{
   char titulo[]="B¡blia do Programador C/C++, do Jamsa!";
   char livro[128];

   strcpy(livro, titulo);
   printf("Nome do livro: %s\n", livro);

   return 0;
}

