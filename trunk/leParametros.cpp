#include <stdio.h>
#include <stdarg.h>
#include <string.h>

void leParametros(const char * pszMensagem, ...)
{
    printf("string %s\n", pszMensagem);
  
    va_list argumento_ptr;
    char* s;
 
    va_start(argumento_ptr, pszMensagem);
   
    //Le a partir do segundo argumento
    while(*pszMensagem)
    {
        s = va_arg(argumento_ptr, char *);
        
        //Condicao p/ evitar lixo
        if(strcmp(s, "") == 0)
        {
          break;
        }
        printf("string %s\n", s);
    }
    va_end(argumento_ptr);
}

int main(void)
{
    leParametros("33", "35", "38" , "39", "40");

    return 0;
}

