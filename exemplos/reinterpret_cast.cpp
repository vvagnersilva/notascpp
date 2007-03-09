/*
 * Permite a conversoes fora do padrao, mas pode ser utilizado
 * para conversoes padrao. É preciso observar q/ esse tipo de
 * conversao pode exibir diferentes comportamentos em computadores
 * distintos.
 */
 #include <iostream>

int main()
{
   int i = 100;

   int* iPtr;

   void* vPtr = &i; // atribui o end. de um int ao ponteiro void

   iPtr = reinterpret_cast<int *> (vPtr); // conversao 

   std::cout << "*iPtr = "<< *iPtr << std::endl;

   return 0;
}
