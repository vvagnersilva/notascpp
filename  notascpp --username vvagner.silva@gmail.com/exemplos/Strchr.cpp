#include <stdio.h>
#include <string.h>

int main(void)
{
  char titulo[64] = 
       "B¡blia do Programador C/C++, do Jamsa!";
  char *ptr;

  ptr = strchr(titulo, 'x');
  
  if(ptr != NULL)
  {
      if (*ptr)
      {
          printf("A primeira ocorrencia de C esta no deslocamento %d\n", ptr - titulo);
      }
      else
      {
          printf("Caractere nao encontrado\n");
      }
   }
   else
   {
       printf("Caractere nao encontrado - NULL pointer\n");
   }

   return 0;
}
