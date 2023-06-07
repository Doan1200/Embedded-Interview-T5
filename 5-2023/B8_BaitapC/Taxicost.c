// Tính giá cước taxi
// Đi taxi dưới 14km giá 14k
// Đi <= 30km giá 10 nghìn
// Đi hơn 30km giá 8 nghìn

#include <stdio.h>

const int COST = 14000;
const int COST2 = 10000;
const int COST3 = 8000;

int tinhGiaCuoc(int soKm)
{

    int giaCuoc = 0;

    if (soKm < 0)
    {
        printf("So km khong hop le.\n");
        return giaCuoc;
    }
    if (soKm < 14)
    {
        giaCuoc = soKm * COST;
    }
    else if (soKm <= 30)
    {
        giaCuoc = (soKm - 1) * COST2 + COST;
    }
    else
    {
        giaCuoc = (soKm - 30) * COST3 + (30 - 1) * COST2 + COST;
    }

    return giaCuoc;
}

int main()
{

    int soKm;

    printf("Nhap vao so km da di: ");

    scanf("%d", &soKm);

    printf("Gia cuoc xe = %d", tinhGiaCuoc(soKm));
    
    return 0;
}