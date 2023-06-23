#include <iostream>
#include <cstdint>
#include <math.h>
using namespace std;

class Rectangle
{
private:
    int8_t Length;
    int8_t Width;

public:
    Rectangle(int8_t length, int8_t width);
    int chuVi();
    double dienTich();
    bool checkRectangle();
    double duongCheo();
};

Rectangle::Rectangle(int8_t length, int8_t width)
{
    Length = length;
    Width = width;
}

int Rectangle::chuVi()
{
    return 2 * (Width + Length);
}

double Rectangle::dienTich()
{
    return Width * Length;
}

bool Rectangle::checkRectangle()
{
    return Length == Width;
}


double Rectangle::duongCheo()
{
    return sqrt(pow(Length, 2) + pow(Width, 2));
}

int main()
{
    int16_t length;
    int16_t width;

    cout << "Nhap vao chieu dai: ";
    cin >> length;
    cout << "Nhap vao chieu rong: ";
    cin >> width;

    


    Rectangle rt(length, width);

   

    cout << "Chu vi hinh chu nhat la: " << rt.chuVi() << endl;
    cout << "Dien tich hinh chu nhat la: " << rt.dienTich() << endl;
    cout << "Duong cheo cua hinh chu nhat la: " << rt.duongCheo() <<  endl;

    if(rt.checkRectangle())
    {
        cout << "Day la hinh vuong!";
    }
    else
    {
        cout << "Day la hinh chu nhat!";
    }

    return 0;
}
