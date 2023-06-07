// Tính giá cước taxi
// Đi taxi dưới 14km giá 14k
// Đi <= 30km giá 10 nghìn
// Đi hơn 30km giá 8 nghìn

#include <stdio.h>

#define COST 14000
#define COST2 10000
#define COST3 8000

int main()
{
    int i_soKm;
    int i_soTienPhaiTra = 1;
    int i_soTienPhaiTra1 = 1;

    printf("Nhap vao so km da di: ");
    scanf("%d", &i_soKm);

    i_soTienPhaiTra1 = (30 - 1) * COST2;

    if (i_soKm < 14)
    {
        i_soTienPhaiTra = i_soKm * COST;

        printf("Gia cuoc xe = %d nghin", i_soTienPhaiTra);
    }
    else if (i_soKm <= 30)
    {
        i_soTienPhaiTra1 = (i_soKm - 1) * COST2 + COST;

        printf("Gia cuoc xe = %d nghin", i_soTienPhaiTra1);
    }
    else
    {
        i_soTienPhaiTra = (i_soKm - 30) * COST3 + i_soTienPhaiTra1 + COST;

        printf("Gia cuoc xe = %d nghin", i_soTienPhaiTra);
    }

    return 0;
}