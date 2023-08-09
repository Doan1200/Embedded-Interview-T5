#include <stdio.h>
#include <stdint.h>

void daoNguocMang(uint8_t arr[], uint8_t size)
{
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void printfMang(uint8_t arr[], uint8_t size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}
