#include<stdio.h>
#include<stdint.h>



void sortList(uint8_t arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                uint8_t temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}




void kiemTra(uint8_t arr[], int size, int number)
{
    int dem = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == number)
        {
            dem++;
        }
    }

    printf("So %d xuat hien %d lan\n", number, dem);
}



void nhap(int* number)
{
    printf("\nNhap so can check: ");
    scanf("%d", number);
}
