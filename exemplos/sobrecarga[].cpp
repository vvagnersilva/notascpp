#include <iostream>

template<class T>
class cType
{
public:

    void operator = ( T val )
    {
        m_val = val;
    }
    void operator = ( cType<T> &type )
    {
        m_val = type.m_val;
    }
    T operator ()() { return m_val; }
private:
    T m_val;
};

template<class T>
class Container
{
public:
    Container(int index) { m_val = new T[index]; }

    T & operator [](int index)
    {
        return m_val[index];
    }
private:
    T * m_val;
};

int main()
    {
    cType<int> type;

    type = 3;

    std::cout << type() << std::endl;

    Container< cType<int> > cont2(10);

    cont2[0] = type;

    std::cout << cont2[0]() << std::endl;

    return 0;
    }
