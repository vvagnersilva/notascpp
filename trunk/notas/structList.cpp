#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   int i;
   struct ListaEnt
   {
     int numero;
     struct ListaEnt *proximo;
     struct ListaEnt *anterior;
   } inicio, *nodo, *novo;

   inicio.proximo = NULL;  // Lista vazia 
   inicio.anterior = NULL;
   nodo = &inicio;      // Aponta para o in¡cio da lista

   for (i = 1; i < 10; i += 2)
   {
      nodo->proximo = (struct ListaEnt *)
                       malloc(sizeof(struct ListaEnt));
      nodo->proximo->anterior = nodo;
      nodo = nodo->proximo;
      nodo->numero = i;
      nodo->proximo = NULL;
   }

   for (i = 2; i <= 10; i += 2)
   {
     int encontrado = 0;

     novo = (struct ListaEnt *) malloc(sizeof
            (struct ListaEnt));
     novo->numero = i;
     nodo = inicio.proximo;

     do
     {
       if (nodo->numero > novo->numero)
       {
          novo->proximo = nodo;
          novo->anterior = nodo->anterior;
	  nodo->anterior->proximo = novo;
	  nodo->anterior = novo;
	  encontrado = 1;
       }
       else
         nodo = nodo->proximo;
     } while ((nodo->proximo) && (! encontrado));

     if (! encontrado)
       if (nodo->numero > novo->numero)
       {
          novo->proximo = nodo;
	  novo->anterior = nodo->anterior;
	  nodo->anterior->proximo = novo;
	  nodo->anterior = novo;
       }
       else
        {
           novo->proximo = NULL;
           novo->anterior = nodo;
           nodo->proximo = novo;
        }
    }

    // Exibe a lista
    nodo = inicio.proximo;
    do
    {
       printf("%d ", nodo->numero);
       nodo = nodo->proximo;
    } while (nodo);

    return 0;
}

