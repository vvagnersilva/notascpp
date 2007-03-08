#include <iostream>
#include <sstream>
#include <string>

class cTrataDivZero
{
    public:

        cTrataDivZero() { m_fValor = 0; }
		
        cTrataDivZero(const std::string& oCausa, float fValor) { m_oCausa = oCausa;	m_fValor = fValor; }      
        
		std::ostringstream& getCausa()
		{		  
			stream = new   std::ostringstream(std::ios::out);
						
            *stream << m_oCausa.c_str();
            *stream << "     ";
            *(stream) << m_fValor;
            			
			return (*stream);
		}

	private:

	    std::ostringstream* stream; 
        std::string m_oCausa;
	    float m_fValor;
};

int main() 
{
    float fNum = 0; 
	float fDen = 0;

    std::cout << "Numerador: ";
    std::cin >> fNum;
    std::cout << "Denominador: ";
    std::cin >> fDen;
    
    try
    {
        if (fDen == 0)
		{
            throw new cTrataDivZero("Divisao por zero", fDen);   
		}
		std::cout <<  "Resultado: " << (fNum/fDen) << std::endl;
     }
     catch (cTrataDivZero* e) // pode ter ou não o objeto
     {                      // apenas o tipo é obrigatório
         std::cout << "Error: "  <<    e->getCausa() << std::endl;
     } 
     system("pause");

	 return 0;
}
