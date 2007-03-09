#include <sstream>
#include <iostream>

using namespace std;

int main()
{
    ostringstream s1;
    int i = 22;
    s1 << "Alo " << i << endl; // encadeamento de insercao <<
    string s2 = s1.str();
    cout << s2;
    
    return 0;
}
