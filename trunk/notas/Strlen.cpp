#include <stdio.h>
#include <string.h>

void main(void)
{
   char titulo_livro[] = 
            "B¡blia do Programador C/C++, do Jamsa!";

   printf("%s cont‚m %d caracteres\n", titulo_livro,
      strlen(titulo_livro));
}

