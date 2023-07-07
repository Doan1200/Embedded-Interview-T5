#include<iostream>

class Sinhvien
{
    public:
        virtual char *test()                      // Overload      
        {
            return (char *)"hello world\n";
        }
        void display()
        {
            std::cout << "test: " << test() << std::endl;
        }
};


class Doituong : public Sinhvien
{
    public:
    char *test()
        {
            return (char *)"This is test\n"; // Override
        }
};

int main()
{
    Sinhvien sv;
    sv.display();

    Doituong dt;

    dt.display();

    return 0;
}