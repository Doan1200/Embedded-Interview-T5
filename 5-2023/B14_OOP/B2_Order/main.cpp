#include<iostream>
#include<string>

using namespace std;

class Quanly
{
    private:


    public:

        // Setter

        // Getter


        // Methods
        void themMon();
        void suaMon();
        void xoaMon();
        void danhSachMon();
        void thietLapSoBan();
};


class nhanVien
{
    private:

    public:
};


int main()
{
    int number;

    do{
        cout << "1. Quan ly" << endl;
        cout << "2. Nhan vien" << endl;
        cout << "Nhap vao lua chon cua ban: ";
        cin >> number;

        switch(number)
        {
            case 1:
                cout << "1" << endl;
                break;

            case 2:
                cout << "2" << endl;
                break;
            
            default:
                cout << "unknown" << endl;
                break;
        }
    }while(number !=0);

    return 0;
}