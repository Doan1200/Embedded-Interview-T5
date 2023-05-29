#include <stdio.h>
#include <stdint.h>

//  uint8_t array[] = {1, 3, 5, 2, 3, 4, 5, 6, 2, 6, 9, 6, 7};

// so 1: xuat hien 1 lan
// so 2: xuat hien 2 lan
// so 5: xuat hien 2 lan

// cho 1 chuoi ky tu array[] = {1, 2, 3,4, 5, 6, 7, 8, 9}
// Dao chuoi ky tu

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




void kiemTra(uint8_t array[], int n)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] == 5)
        {
            dem++;
        }
    }

    printf("So 1 xuat hien %d lan\n", dem);
}

int main(int argc, const char* argv[])
{
    uint8_t array[] = {1, 3, 5, 2, 3, 4, 5, 6, 2, 6, 9, 6, 7};

    int n = sizeof(array) / sizeof(array[0]);

    sortList(array, n);

    printf("Mang tang dan: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    kiemTra(array, n);



    return 0;
}