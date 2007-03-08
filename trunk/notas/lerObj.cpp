/*
 * Para ler objetos gravados pelo programa anterior, usaremos a função read()
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

    void imprimir();
};

void Livro::imprimir()
{
     cout << "\n\tTitulo:  " << titulo << endl;
     cout << "\n\tAutor:  " << autor << endl;
     cout << "\n\tNo.Reg: " << numreg << endl;
     cout << "\n\tPreco: "<< preco << endl;
}

int main()
{
     ifstream fin("arqobj.dat") ;
     Livro li;

     while(fin.read((char*)&li,sizeof(Livro)))   //Lê o obj. do arquivo
     {
         li.imprimir();
     }

    return 0;
}
