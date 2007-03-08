/*
 * Grava��o de dados em um arquivo

 * Para escrever a sa�da em um arquivo, seu programa deve criar um objeto
 * do tipo ofstream, o qual � definido no arquivo de cabe�alho fstream.h.
 * A seguir o programa pode usar a inst�ncia(objeto) criada do tipo 
 * ofstream para associar o objeto ao arquivo em disco. O programa pode 
 * ent�o usar o operador de inser��o para escrever os dados para o
 * arquivo.
 * Ap�s o programa ter escrito sua sa�da, deve fechar o arquivo 
 * utilizando a fun��o-membro close. O programa a seguir ilustra os 
 * passos envolvidos para gravar dados no arquivo:
*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream saida("teste.txt");
    
    saida << "Informacoes a serem armazenadas no arquivo" << endl;
    saida << "Corpo do texto..." << endl;
    saida << "Ultima linha do texto!" << endl;
    saida.close();

    return 0;
}
 
