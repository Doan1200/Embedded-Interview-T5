#include<iostream>

using namespace std;

const double PI = 3.14159;

class calculatorCircleArea
{
    private:
        int radius;
    public:
        calculatorCircleArea(int rad = 0);
        void setRadius();
        double getCircleArea();
        double getCirclePrimeter();
};

calculatorCircleArea::calculatorCircleArea(int rad)
{
    radius = rad;
}

void calculatorCircleArea::setRadius()
{
    cout << "Nhap vao ban kinh duong tron: ";
    cin >> radius;
}

double calculatorCircleArea::getCircleArea()
{
    return (double)(PI * radius * radius);
}

double calculatorCircleArea::getCirclePrimeter()
{
    return (double)(2 * PI * radius);
}

int main()
{
    calculatorCircleArea cc;

    cc.setRadius();

    double area = cc.getCircleArea();

    cout << "Dien tich hinh tron = " << area << endl;

    double petimeter = cc.getCirclePrimeter();

    cout << "Chu vi hinh tron = " << petimeter << endl;

    return 0;
}