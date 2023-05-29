#include <stdio.h>
#include <stdint.h>
#include<string.h>

        // Struct là kiểu dữ liệu do người dùng tự định nghĩa
        // Size = Kích thước của tất cả các members + Bộ nhớ đệm

// struct typeDate
// {
//     uint8_t ngay;   // 1 byte + 3 bytes Bộ nhớ đệm
//     uint32_t thang; // 4 bytes
//     uint16_t nam;   // 2 bytes + 2 bytes bộ nhớ đệm
//                     // 12 Bytes
// };

// struct typeDate1
// {
//     uint8_t ngay;   // 1 byte + 7 Bytes BND;
//     uint64_t thang; // 8 bytes
//     uint32_t lich;  // 4 bytes + 2 bytes nam + 2 bytes BND;
//     uint16_t nam;   //
//                     // 24 Bytes
// };

// struct typeDate2
// {
//     uint8_t ngay;   // 1 Byte + 4 Bytes Uint32 + 2 Bytes Uint16 + 1  Bytes BND
//     uint32_t thang; //
//     uint16_t nam;   //
//     uint64_t nam1;  // 8 Bytes
//     uint32_t nam2;  // 4 Bytes + 4 Bytes BND
//                     // 24 Bytes
// };

// struct typeDate3
// {
//     uint8_t ngay;   //  1 + 4 + 1 + 2
//     uint32_t thang; //
//     uint8_t s;      //
//     uint64_t nam;   //  8 Bytes

//     //  24 Bytes
// };

                    // UNION  Giá trị của nó bằng với giá trị mà nó được gán gần nhất
                    // Size == kích thước của member lớn nhất
        // typedef union
        // {
        //     uint64_t a;
        //     uint16_t b;
        //     uint32_t c;
        // } typeDate4;

typedef union
{
    char test1[6];
    char test2[3];
} typeDate;

// void hienThi(typeDate4 data)
// {
//     printf("a: %d\n", data.a);
//     printf("b: %d\n", data.b);
//     printf("c: %d\n", data.c);
// }

int main(int argc, char const *argv[])
{
    // printf("Size: %d\n", sizeof(struct typeDate));

    // printf("Size 1: %d\n", sizeof(struct typeDate1));

    // printf("Size 2: %d\n", sizeof(struct typeDate2));

    // printf("Size 3: %d\n", sizeof(struct typeDate3));

            // typeDate4 data;

            // printf("Dia chi cua union = %p\n", &data);
            // printf("Dia chi cua data.a = %p\n", &(data.a));
            // printf("Dia chi cua data.b = %p\n", &(data.b));
            // printf("Dia chi cua data.c = %p\n", &(data.c));

            // data.a = 12;
            // data.b = 14;
            // data.c = 10;

            // hienThi(data);
 
            typeDate data;

            strcpy(data.test1, (char*)"Hello");

            data.test1[5] = '\0';

            strcpy(data.test2, (char *) "Hi");
            
            data.test2[2] = '\0';

            printf("test: %s\n", data.test1);


                for(int i = 0; i < 6; i++)
                {
                    printf("%c\n", data.test1[i]);
                }

    return 0;
}