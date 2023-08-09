// Nhap vao ban phim: 2 +3-(6*8) =?
// Nhap vao pt bac nhat: 2x+5 =0 x=?
// Nhap vao pt bac 2: 2x^2 + 4x - 6 = 0; x1= ?, x2 = ?
#include <stdio.h>
#include <string.h>
#include <math.h>

void giaiPhuongTrinhBacNhat(char arr[])
{
    int len = strlen(arr);
    int i = 0;
    int a = 0, b = 0;
    int dau = 1;
    int x;

    for (i = 0; i < len; i++)
    {
        if (arr[i] == '+' || arr[i] == '-')
        {
            if (arr[i] == '-')
            {
                dau = -1;
            }
        }
        else if (arr[i] >= '0' && arr[i] <= '9')
        {
            int so = 0;
            for (; i < len && arr[i] >= '0' && arr[i] <= '9'; i++)
            {
                so = so * 10 + (arr[i] - '0');
            }
            if (i < len && arr[i] == 'x')
            {
                if (so == 0)
                {
                    so = 1;
                }
                a += dau * so;
            }
            else
            {
                b += dau * so;
            }
            i--;
        }
    }

    if (a == 0)
    {
        if (b == 0)
        {
            printf("Phuong trinh vo so nghiem.\n");
        }
        else
        {
            printf("Phuong trinh vo nghiem.\n");
        }
    }
    else
    {
        x = -b / a;
        printf("Phuong trinh co nghiem x = %d.\n", x);
    }
}

void giaiPhuongTrinhBacHai(char arr[])
{
    int len = strlen(arr);
    int i = 0;
    int a = 0, b = 0, c = 0;
    int dau = 1;
    int x1, x2;

    for (i = 0; i < len; i++)
    {
        if (arr[i] == '+' || arr[i] == '-')
        {
            if (arr[i] == '-')
            {
                dau = -1;
            }
        }
        else if (arr[i] >= '0' && arr[i] <= '9')
        {
            int so = 0;
            for (; i < len && arr[i] >= '0' && arr[i] <= '9'; i++)
            {
                so = so * 10 + (arr[i] - '0');
            }
            if (i < len && arr[i] == 'x')
            {
                if (so == 0)
                {
                    so = 1;
                }
                a += dau * so;
            }
            else
            {
                b += dau * so;
            }
            i--;
        }
    }

    c = b;
    b = b - a;
    a = c;

    if (a == 0)
    {
        giaiPhuongTrinhBacNhat(arr);
    }
    else
    {
        float delta = b * b - 4 * a * c;
        if (delta > 0)
        {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Phuong trinh co 2 nghiem phan biet:\n");
            printf("x1 = %.2f\n", x1);
            printf("x2 = %.2f\n", x2);
        }
        else if (delta == 0)
        {
            x1 = -b / (2 * a);
            printf("Phuong trinh co nghiem kep:\n");
            printf("x = %.2f\n", x1);
        }
        else
        {
            printf("Phuong trinh vo nghiem.\n");
        }
    }
}

void tinhPhepTinh(char arr[])
{
    int len = strlen(arr);
    int i = 0;
    int dau = 1;
    int result = 0;

    for (i = 0; i < len; i++)
    {
        if (arr[i] == '+' || arr[i] == '-')
        {
            if (arr[i] == '-')
            {
                dau = -1;
            }
        }
        else if (arr[i] >= '0' && arr[i] <= '9')
        {
            int so = 0;
            for (; i < len && arr[i] >= '0' && arr[i] <= '9'; i++)
            {
                so = so * 10 + (arr[i] - '0');
            }
            result += dau * so;
            i--;
        }
    }

    printf("Ket qua phep tinh: %d\n", result);
}

int main()
{
    char phepToan[50];
    printf("Nhap vao phep toan: ");
    fgets(phepToan, sizeof(phepToan), stdin);

    giaiPhuongTrinhBacHai(phepToan);
    giaiPhuongTrinhBacNhat(phepToan);
    tinhPhepTinh(phepToan);

    return 0;
}
