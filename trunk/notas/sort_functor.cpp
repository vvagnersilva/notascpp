#include <vector>
#include <iostream>

struct a
{
  a (int i)
  {
    a::i = i;
  }
  int i;
};

class Condicao
{
public:
  bool operator () (struct a st1, struct a st2) const
  {
    if (st1.i <= st2.i)
      {
	return true;
      }
    else
      {
	return false;
      }
  }
};

/*
    bool operator < (struct a st1, struct a st2)  
    {
         if(st1.i <= st2.i)
         {
            return true;
         }
         else
         {
           return false;
         }
    }
*/

int
main ()
{
  std::vector < struct a >col;
  std::vector < struct a >::iterator itr;

  for (int i = 10; i > 0; --i)
    col.push_back (a (i));

  /*
   * Sobrecarga do operador < atraves iterando nos objetos da lista
   * realizando comparacoes entre eles. Para tipos primitivos nao
   * sobrecarregamos o operador <
   */
  sort (col.begin (), col.end (), Condicao ());

  for (itr = col.begin (); itr != col.end (); ++itr)
    std::cout << (*itr).i << std::endl;

  return 0;

}
