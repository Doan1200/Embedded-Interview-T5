#include <stdio.h>
// #include "test.c"
extern int count;
extern void dem();

// void test()
// {
//     static int a = 10;
//     printf("Dia chi a: %p, Gia tri a = %d\n", &a, a);
//     a++;
// }

int main()
{
    // test();
    // test();
    // test();

    // printf("count = %d\n", count);

    dem();
    dem();


    return 0;
}

