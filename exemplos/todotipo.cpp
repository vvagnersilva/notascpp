#include <stdio.h>
#include <stdarg.h>

double soma_valores(char *str, ...)
{
    va_list marcador;

    double result = 0.0;

    va_start(marcador, str);  
       // marca o primeiro argumento adicional

    while (*str)     // examina cada caractere na string
    {
      if (*str == '%') 
         // se n∆o for um especificador de formato %-, pula
        {
          switch (*(++str)) {
            case 'd': result += va_arg(marcador, int);
                  break;
            case 'f': result += va_arg(marcador, double);
                  break;
          }
        }
      str++;
    }

   va_end(marcador);
   return(result);
}

int main(void)
{
   double result;

   printf("Result %f\n", soma_valores("%f", 3.3));
   printf("Result %f\n", soma_valores("%f %f",1.1,2.2));
   printf("Result %f\n", soma_valores("%f %d %f",1.1,
           1, 2.2));
   printf("Result %f\n", soma_valores("%f %d %f %d", 1.1,
           1, 2.2, 3));
   return 0;
}
