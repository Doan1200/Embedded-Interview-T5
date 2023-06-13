#include<stdio.h>

int main(){
    int number = 10;
    int* ptr = &number;
    int** ptr2 = &ptr;

    printf("value = %d\n", **ptr2);

    **ptr2 = 20;

    printf("value = %d\n", **ptr2);

    printf("value = %d\n", *ptr);

    printf("value = %d\n", number);

    return 0;
}