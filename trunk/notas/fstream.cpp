#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int main()
{
    std::fstream oss;
    std::string str("");
    std::string strtmp("");

    oss.open("funcref.cpp");

    if(!oss.is_open())
    {
        return 0;
    }
    
 //  while (oss.)
   // {
        getline(oss, str);
        std::cout << "oi..." << str;


      //  strtmp = strtmp + str;
    //}

    std::cout << strtmp << std::endl;

    oss.close();
   
    return 0;
}
