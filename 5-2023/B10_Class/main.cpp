#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cout << "Nhap vao n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            cout << " " << i;
        }
    }
    cout << endl;
    float tong = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            tong += i;
        }
    }
    cout << "Tong = " << tong << endl;
    cout << endl;

    // KIEM TRA SO NGUYEN TO

    bool laSoNguyenTo = true;

    if (n < 2)
    {
        laSoNguyenTo = false;
    }
    else
    {
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
                laSoNguyenTo = false;
                break;
        }
    }

    if (laSoNguyenTo)
    {
        cout << "Day la so nguyen to" << endl;
    }
    else
    {
        cout << "Day khong phai la so nguyen to" << endl;
    }

    return 0;
}