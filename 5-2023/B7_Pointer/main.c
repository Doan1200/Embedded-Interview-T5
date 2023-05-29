#include <stdio.h>


//----------------------------------------------------------------
void tong(int a, int b)
{
    printf("Tong a va b = %d\n", a + b);
}

int hieu(int a, int b)
{
    return a - b;
}

int tich(int a, int b)
{
    return a * b;
}

int thuong(int a, int b)
{
    printf("Thuong cua a va b = %.2f", (float)a/b);
}


////////////////////////////////////////////////////////////////
void tinhToan(int a, int b, void (*ptr) (int, int))
{
    printf("Chuong trinh toan!\n");
    ptr(a, b);
}



int main(int argc, char const *argv[])
{

    // int *ptr = NULL;
    // printf("Test: %p\n", ptr);

////////////////////////////////////////////////////////////////

    // void (*ptr)(int, int) = NULL;

    //     ptr = &tong;

    //     ptr(7, 8);

    // int (*ptr_hieu)(int, int) = hieu;
    
    //     ptr_hieu = &hieu;

    //     printf("Hieu = %d\n", ptr_hieu(7, 8));

    // int (*ptr_tich)(int, int) = tich;

    //     ptr_tich = &tich;
    
    //     printf("Tich = %d\n", ptr_tich(7, 8));

    // int (*ptr_thuong)(int, int) = thuong;

    //     ptr_thuong = &thuong;

    //     ptr_thuong(9, 4);

////////////////////////////////////////////////////////////////

    // void (*phepToan) (int, int) = NULL;

    //     phepToan = &tong;

    //     phepToan(4, 5);

    // tinhToan(4,5, tich);

////////////////////////////////////////////////////////////////////////

    int i = 10;

    double d = 15.6;

    char c = 'b';

    void *ptr = &i;

        printf("%d\n", *(int*)ptr);

        ptr = &d;

        printf("%.1f\n", *(double *) ptr);

        ptr = &c;

        printf("%c", *(char *)ptr);





    
    

    return 0;
}