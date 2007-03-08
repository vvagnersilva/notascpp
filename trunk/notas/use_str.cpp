#include "strings.h"

int main()
  {
   Strings s1(
        "Exemplo de programa que usa objetos-string.\n");
   Strings s2(s1);
   Strings s3;

   char s[80];

   cout << s1 << s2;
   s3 = s1;
   cout << s3;
   s3.makestr(s);
   cout << "Convertido para uma string: " << s;

   s2 = "Esta e' uma nova string.";
   cout << s2 << endl;

   Strings s4("Esta tambem e uma nova string.");
   s1 = s2 + s4;
   cout << s1 << endl;

   if(s2==s3)
      cout << "As strings sao iguais." << endl;
   if(s2!=s3)
      cout << "Strings nao sao iguais." << endl;
   if(s1<s4)
      cout << "s1 e' menor que s4." << endl;
   if(s1>s4)
      cout << "s1 e' maior que s4." << endl;
   if(s1<=s4)
      cout << "s1 e' menor ou igual a s4." << endl;
   if(s1>s4)
      cout << "s1 e' maior ou igua a s4." << endl;

   //if(s2 > "ABC")
     // cout << "s2 e' maior que 'ABC'" << endl << endl;

   s1 = "um dois trˆs um dois trˆs\n";
   s2 = "dois";
   cout << "String inicial: " << s1;
   cout << "String ap¢s subtrair dois: ";
   s3 = s1 - s2;
   cout << s3;

   cout << endl;
   s4 = "B¡blia do Programador ";
   s3 = s4 + "C/C, do Jamsa\n";
   cout << s3;
   //s3 = s3 - "C/C++";
   //s3 = "Este e' " + s3;
   //cout << s3;

   cout << "Digite uma string: ";
   cin >> s1;
   cout << s1 << endl;
   cout << "s1 e' " << s1.strsize() 
        << " caracteres de tamanho." << endl;
   puts(s1);

   s1 = s2 = s3;
   cout << s1 << s2 << s3;
   s1 = s2 = s3 = "Programa concluido.\n";
   cout << s1 << s2 << s3;

   return 0;
 }

