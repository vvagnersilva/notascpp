#include <iostream>

using namespace std;

int main(void)
{
   char string[256];

   cout << "Digite seu nome completo e pressione Enter: ";
   cin.getline(string, sizeof(string), '\n');
   cout << string << endl;

   return 0;
}

