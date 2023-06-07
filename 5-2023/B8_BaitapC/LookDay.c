#include <stdio.h>

int tinhNgayTrongTuan(int ngay, int thang, int nam)
{
    int soNgayTrongThang[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0))
    {
        soNgayTrongThang[1] = 29;
    }

    int soNgay = 0;

    for (int i = 1; i < nam; i++)
    {
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
        {
            soNgay += 366;
        }
        else
        {
            soNgay += 365;
        }
    }

    for (int i = 0; i < thang - 1; i++)
    {
        soNgay += soNgayTrongThang[i];
    }

    soNgay += ngay;

    int thu = soNgay % 7;

    return thu;
}

int main()
{
    int ngay, thang, nam;

    printf("Nhap vao ngay, thang, nam: ");
    scanf("%d %d %d", &ngay, &thang, &nam);

    char *arrNgay[7] = {"Chu nhat", "Thu hai", "Thu ba", "Thu tu", "Thu nam", "Thu sau", "Thu bay"};

    int thu = tinhNgayTrongTuan(ngay, thang, nam);

    printf("Ngay %d/%d/%d la %s\n", ngay, thang, nam, arrNgay[thu]);

    return 0;
}
