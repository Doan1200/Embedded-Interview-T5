//  uint8_t array[] = {1, 3, 5, 2, 3, 4, 5, 6, 2, 6, 9, 6, 7};

// so 1: xuat hien 1 lan
// so 2: xuat hien 2 lan
// so 5: xuat hien 2 lan

// cho 1 chuoi ky tu array[] = {1, 2, 3,4, 5, 6, 7, 8, 9}

// Dao chuoi ky tu


#include <stdio.h>
#include <stdint.h>
#include "daoNguoc.c"
#include "sortList.c"





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


    uint8_t number;
    nhapNumber(&number);
    kiemTra(arr, size, number);

    
    printfMang(arr, size);

    return 0;
}