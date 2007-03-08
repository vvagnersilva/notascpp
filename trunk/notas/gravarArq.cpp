/*
 * Gravação de dados em um arquivo

 * Para escrever a saída em um arquivo, seu programa deve criar um objeto
 * do tipo ofstream, o qual é definido no arquivo de cabeçalho fstream.h.
 * A seguir o programa pode usar a instância(objeto) criada do tipo 
 * ofstream para associar o objeto ao arquivo em disco. O programa pode 
 * então usar o operador de inserção para escrever os dados para o
 * arquivo.
 * Após o programa ter escrito sua saída, deve fechar o arquivo 
 * utilizando a função-membro close. O programa a seguir ilustra os 
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
 
