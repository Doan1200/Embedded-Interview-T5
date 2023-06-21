#include<iostream>



namespace ConOngA
{
    static int A  = 10;
    class Toanhoc
    {
        public: 
            void setABC();
        private:
            int A;
            int B;
            int C;
            double delta;
    };
}

using namespace ConOngA;

void ConOngA::Toanhoc::setABC()
{
    std::cout << "Nhap vao bien A, B, C: "<< std::endl;
    std::cin >> A >> B >> C ;
    std::cout << A << B << C << std::endl;
}

namespace ConOngB
{
    int A = 20;
}



int main()
{
    ConOngA::Toanhoc th;
    
    th.setABC();

    return 0;
}