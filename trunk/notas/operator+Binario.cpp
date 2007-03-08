/*
*
* Compilacao para Flag condicional: 
*
* g++ operator+_binario.cpp -Dlinux
*/

#include <iostream>

class cTeste
{
    public:

    cTeste(){ x = 0; }

    cTeste(int _x){ x = _x; }

    int GetX() const { return x; } 

    friend cTeste operator+(const cTeste& a, const cTeste& b);

    ~cTeste(){ std::cout << "Deletando variavel automatica ..." << std::endl; }

    private:

    int x;
};

//Funcao amiga pode acessar variaveis privadas da classe
cTeste operator+(const cTeste& a, const cTeste& b)
{
    cTeste tmp; // variavel automatica

    tmp.x = a.x + b.x;

    return (tmp);
}

int main()
{
    cTeste t1(10);  // variavel automatica
    cTeste t2(200); // variavel automatica

    std::cout << (t1+t2).GetX() << std::endl;

    #ifdef teste
        std::cout << "Entrou no #ifdef !!!" << std::endl;
    #else
        std::cout << "Entrou no #else!!!" << std::endl;
    #endif

    return 0;
}

