#include <stdio.h>
#include <string.h>

void main(void)
{
   char nome[64] = "Fernando";

   strncat(nome, " e Rute", 8);
   printf("Voc� votou em %s?\n", nome);
}
