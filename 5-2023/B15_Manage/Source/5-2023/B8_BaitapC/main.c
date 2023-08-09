//  uint8_t array[] = {1, 3, 5, 2, 3, 4, 5, 6, 2, 6, 9, 6, 7};

// so 1: xuat hien 1 lan
// so 2: xuat hien 2 lan
// so 5: xuat hien 2 lan

// cho 1 chuoi ky tu array[] = {1, 2, 3,4, 5, 6, 7, 8, 9}

// Dao chuoi ky tu

// cho mot chuoi ky tu ngau nhien char arr[] = "mot hai mot hai mot mot, ba bon ba hai mot "
// Dem xem mot tu xuat hien bao nhieu lan
// "mot": xuat hien 4 lan
// "hai": xuat hien 3 lan
// "ba" : xuat hien 1 lan

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

#include "sortList.c"
#include "daoNguoc.c"

char arr1[] = "mot hai mot hai mot mot, ba bon ba hai mot";

typedef struct
{
    char *array;
    uint8_t size;
} Words;

Words words[100];

void splitArray()
{
    int count = 0;
    int index = 0;

    for (int i = 0; i < 100; i++)
    {
        if (arr1[i] == ' ' || arr1[i] == ',' && arr1[i] == ' ')
        {
            Words word;
            word.size = count;
            word.array = &arr1[i - count];
            words[index] = word;
            index++;
            count = 0;
        }
        else
        {
            count++;
        }
        Words word;
    }
}

bool isEqual(const char arr1[], const char arr2[])
{
    int count = 0;
    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            if(arr1[i] == arr2[j])
            {
                count++;
            }
        }
    }
    return count;
}

int main(int argc, const char *argv[])
{

    uint8_t arr[] = {1, 3, 5, 2, 3, 4, 5, 6, 2, 6, 9, 6, 7};
    uint8_t size = sizeof(arr) / sizeof(arr[0]);

    printf("Mang sau khi sap xep: ");
    sortList(arr, size);
    printfMang(arr, size);

    printf("\nMang sau khi dao: ");
    daoNguocMang(arr, size);
    printfMang(arr, size);

    int number;
    nhap(&number);
    kiemTra(arr, size, number);

    return 0;
}
