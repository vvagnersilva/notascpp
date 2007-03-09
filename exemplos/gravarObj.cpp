/*
 * GRAVANDO OBJETOS
 * Para gravar ou ler objetos em disco, não faz sentido gravar ou ler caractere ou    
 * uma linha por vez. Se o arquivo conterá objetos, gostaríamos de gravar ou ler um 
 * objeto por vez. As funções apropriadas para o processo de gravação e leitura de
 * objetos são as funções write() e read().
 * Para mostrar o seu uso primeiramente criaremos um programa para gravar 
 * registros de livros de uma biblioteca.
*/

#include<iostream>
#include<fstream>

using namespace std;

class Livro
{
        private:
   
        char titulo[50];
        char autor[50];
        int numreg;
        double preco;
        
       public:
       void novonome();
};

void Livro::novonome()
{
     cout << "\n\tDigite titulo: ";
     cin >> titulo; // use gets() ->conio.h
     cout << "\n\tDigite autor: ";
     cin >> autor;
     cout << "\n\tDigite o numero do registro: ";
     cin >> numreg;
     cout << "\n\tDigite o preco";
     cin >> preco;
}

int main()
{
     char opcao;
     Livro li;

     ofstream fout("arqobj.dat");  //Cria objeto de gravação

     do
     {
       li.novonome();
       fout.write((char*)&li,sizeof(Livro)); // escreve o obj. no arquivo
       cout << "\nMais um livro(s/n): ";
       cin >> opcao;
     }while(opcao=='s'||opcao=='S');

     return 0;
}
