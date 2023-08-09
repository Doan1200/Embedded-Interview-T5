#include <iostream>
#include <cmath>

class Diem
{
private:
    int8_t toaDoX;
    int8_t toaDoY;

public:
    Diem();
    Diem(int8_t x, int8_t y);
    void setToaDoX(int x);
    void setToaDoY(int y);
    int8_t getToaDoX();
    int8_t getToaDoY();
};

Diem::Diem()
{
    toaDoX = 0;
    toaDoY = 0;
}

Diem::Diem(int8_t x, int8_t y)
{
    toaDoX = x;
    toaDoY = y;
}

void Diem::setToaDoX(int x)
{
    toaDoX = x;
}

void Diem::setToaDoY(int y)
{
    toaDoY = y;
}

int8_t Diem::getToaDoX()
{
    return toaDoX;
}

int8_t Diem::getToaDoY()
{
    return toaDoY;
}

class phepToanOXY
{
private:
    Diem diemA;
    Diem diemB;
    Diem diemC;

    enum typePhepToan
    {
        KHOANG_CACH,
        DIEN_TICH_TAM_GIAC
    };

    typePhepToan phepToan;

public:
    phepToanOXY(Diem A, Diem B);
    phepToanOXY(Diem A, Diem B, Diem C);
    float getKhoangCach();
};

phepToanOXY::phepToanOXY(Diem A, Diem B)
{
    phepToan = KHOANG_CACH;
    diemA = A;
    diemB = B;
}

phepToanOXY::phepToanOXY(Diem A, Diem B, Diem C)
{
    phepToan = DIEN_TICH_TAM_GIAC;
    diemA = A;
    diemB = B;
    diemC = C;
}

float phepToanOXY::getKhoangCach()
{
    if (phepToan == KHOANG_CACH)
    {
        int8_t deltaX = diemB.getToaDoX() - diemA.getToaDoX();
        int8_t deltaY = diemB.getToaDoY() - diemA.getToaDoY();

        return std::sqrt(deltaX * deltaX + deltaY * deltaY);
    }
    else
    {
        std::cout << "Khong goi duoc ham tinh khoang cach" << std::endl;
        return 0.0f;
    }
}

int main()
{
    Diem A(1, 2);
    Diem B(4, 6);

    phepToanOXY operation(A, B);

    float distance = operation.getKhoangCach();
    std::cout << "Distance between A and B: " << distance << std::endl;

    return 0;
}
