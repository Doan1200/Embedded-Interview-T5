#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
// Phân vùng TEST chứa khai báo hằng số trong chương trình
// Read

const int a = 10;

char arr[] = "Hello";

char *arr2 = "Hello";

// Phân vùng DATA chứa biến toàn cục or Static != 0
//  Read - Write
//  Giải phóng khi hết chương trình

int b = 15;

static int c = 10;

void testData()
{
    b = b + 20;
    printf("Data b = %d\n", b);
}

// Phân vùng BSS chứa biến toàn cục or Static == 0 hoặc không khởi tạo
// Gỉai phóng khi kết thúc chương trình
// Read -Write

int d;

static int e = 0;

// Phân vùng Stack chứa biến local, input Parameter,...
// Được giải phóng khi ra khỏi block code/ hàm
// Read - Write

void testStack(int a, int b)
{
    int c;
    c = a + b;
    printf("testStack c = %d\n", c);
}

// Phân vùng Heap được sử dụng để cấp phát bộ nhớ động Malloc, Calloc,...
// Read - Write
// Được giải phóng khi gọi hàm free,...

uint16_t Arr[] = {1, 2, 4, 7}; // Mỗi địa chỉ cách nhau 2 bytes
                               // 0x01, 0x03, 0x05, 0x07
                               // Mảng là các địa chỉ liền kề

void testHeap(){
    char arr[3];
    printf("Dia chi arr1 = %p\n", arr);

    // Lưu ở phân vùng Stack
}

void testHeap2(){
    char *arr = (char*)malloc(sizeof(char)*3);
    printf("Dia chi arr2 = %p\n", arr);
    // Lưu ở phân vùng Heap
    // Sử dụng free để giải phóng vùng nhớ
    free(arr);

}
int main(int argc, char const *argv[])
{
    // PHÂN VÙNG TEST
    printf("\tDay la phan vung TEST\n");
    printf("a = %d\n", a);

    arr[0] = 'A';

    printf("test: %s\n", arr);

    // PHÂN VÙNG DATA (ininitialized)
    printf("\tDay la phan vung DATA\n");

    testData();

    b = b + 15;

    printf("testData b = %d\n", b);

    // PHÂN VÙNG BSS(uninitialized data)

    // PHÂN VÙNG STACK

    printf("\tDay la phan vung STACK\n");

    testStack(5, 7);

    // PHÂN VÙNG HEAP
    printf("\tDay la phan vung HEAP\n");

    printf("Dia chi 1: %p, gia tri 1: %d\n", Arr, *Arr);
    printf("Dia chi 2: %p, gia tri 2: %d\n", Arr + 1, *(Arr + 1));
    printf("Dia chi 3: %p, gia tri 3: %d\n", Arr + 2, *(Arr + 2));
    printf("Dia chi 4: %p, gia tri 4: %d\n", Arr + 3, *(Arr + 3));

    // Cấp phát bộ nhớ động Malloc

    uint8_t *ptr = (uint8_t *)malloc(sizeof(uint8_t) * 5);

    for (int i = 0; i < 5; i++)
    {
        Arr[i] = i;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("i = %d ", Arr[i]);
    }
    printf("\n");

    //Thay đổi kích thước mảng Realloc

    ptr = (uint8_t*)realloc(ptr, sizeof(uint8_t)*7);

    for (int i = 0; i < 7; i++)
    {
        Arr[i] = 2*i;
    }
    for (int i = 0; i < 7; i++)
    {
        printf("i = %d ", Arr[i]);
    }
    printf("\n");

    testHeap();
    testHeap();
    testHeap2();
    testHeap2();



    return 0;
}