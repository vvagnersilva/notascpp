// LENDO UM CARACTER POR VEZ NO ARQUIVO

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
      char ch;
      string str; 

      ifstream fin("Strlen.cpp");

      while(fin.get(ch))    // Le um caracter do arquivo
      {
          str += ch;
      }

      cout << str;     // Imprime no video

      return 0;
}
 
