#include <stdio.h>

void exibe_string(char *string)
{
   while (*string)
     putchar(*string++);
}

int main(void)
{
   exibe_string("B¡blia do Programador C/C++");
   return 0;
}

