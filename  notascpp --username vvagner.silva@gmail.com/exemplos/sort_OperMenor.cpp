#include <vector>
#include <iostream>

struct a
{
    a(int i) { a::i = i; }
    int i;
};

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

int main () 
{
   std::vector<struct a> col;
   std::vector<struct a>::iterator itr;

   for (int i = 10; i > 0; --i)
      col.push_back (a(i));

    sort(col.begin(), col.end());

   for (itr = col.begin(); itr!= col.end(); ++itr)
      std::cout << (*itr).i << std::endl;

    return 0;
}


