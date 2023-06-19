#include <iostream>
using namespace std;

class Toanhoc
{
    public:
        void tong(int a, int b);
        virtual void tong(int a, int b, int c);
        int tong(int a, double b);
};

void Toanhoc::tong(int a, int b)
{
    cout << "Tong cua a va b = " << a + b << endl;
}

void Toanhoc::tong(int a, int b, int c)
{
    cout << "Tong cua a va b = " << a + b + c << endl;
}

int Toanhoc::tong(int a, double b)
{
    return a + (int)b;
}


template<typename var, typename varb>

varb tong(var a, varb b)
{
    return (varb) (a + b);
}


int main()
{
    Toanhoc th;
    th.tong(6, 7);

    th.tong(2, 3, 4);

    cout << th.tong(2, 13.3) << endl;


    cout << "Tong a va b = " << tong(12, 6.2) << endl;

    return 0;
}