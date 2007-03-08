/*
 * A conversao dinamica dynamic_cast<>() permite converter um apontador
 * de uma classe base para uma classe derivada, em tempo real.
 * O pre-requisito é que tem de existir pelo menos um metodo
 * virtual na classe base.
 */

#include <iostream>
#include <string>

class cBase
{
    public:

    virtual ~cBase(){}
};

class cDerivadaX : public cBase
{
    public:

    std::string toString(){ return ("Objeto cDerivadaX"); }
};

class cDerivadaY : public cBase
{
    public:

    std::string toString(){ return ("Objeto cDerivadaY"); }
};

int main()
{
    cBase * poBase;

    cDerivadaX * poX;

    cDerivadaY * poY;

    cDerivadaX poTmp;

    poBase = &poTmp; // importante...

    poX = dynamic_cast< cDerivadaX* > (poBase);

    if (poX != 0)
    {
        std::cout << poX->toString() << std::endl;
    }
    else
    {
        std::cout << "dynamic_cast falhou... " << std::endl;
    }

    //Tentando converter p/ cDerivadaY

    poY = dynamic_cast< cDerivadaY* > (poBase);

    if (poY != 0)
    {
        std::cout << poY->toString() << std::endl;
    }
    else
    {
        std::cout << "dynamic_cast falhou... " << std::endl;
    }

    return 0;
};
