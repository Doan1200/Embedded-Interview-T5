#include <stdio.h>

// #define MAX 10

#define SUM(a, b) ((a) + (b))

#define CREATE_FUNC(ten_ham, noi_dung) \
    void ten_ham()                     \
    {                                  \
        printf("%s\n", noi_dung);      \
    }

CREATE_FUNC(test, "This is a test!")
CREATE_FUNC(test2, "This is a abc function!")

// void test3(int a, int b)
// {
//     int c;
//     c = a + b;
//     printf("c = %d\n", c);
// }

int main(int argc, char const *argv[])
{
    // printf("MAX = %d\n", MAX);

    // int a = MAX + 5;

    // printf("a = %d\n", a);

    // printf("Tong a va b = %d\n", SUM(2, 3));

    // printf("Tong a va b = %d\n", SUM(2, 4));

    test();

    test2();

    // test3(4, 5);
    // test3(5, 6);
    // test3(6, 7);
    
}