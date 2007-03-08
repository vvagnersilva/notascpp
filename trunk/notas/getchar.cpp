#include <stdio.h>
#include <ctype.h>

int main(void)
{
   int letra;

   printf("Digite S ou N para continuar e pressione Enter\n");

   do
   {
     letra = toupper(getchar());
   }
   while ((letra != 'S') && (letra != 'N'));
   printf("Voce digitou %c\n", ((letra == 'S') ? 'S': 'N'));
   
   return 0;
}

