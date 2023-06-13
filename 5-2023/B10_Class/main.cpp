#include<iostream>
#include<string>

using namespace std;


class Doituong
{
    public:
        void hienthi();
        void setThongTin(int tuoi, string name);

    protected:
        int TUOI;
        string NAME;
};

void Doituong::setThongTin(int tuoi, string name)
{
    TUOI = tuoi;
    NAME = name;
}



void Doituong::hienthi()
{
    cout << "Day la class Doi tuong" << endl;
    cout << "Tuoi = " << TUOI << endl;
    cout << "Name = " << NAME << endl;
}


class Sinhvien : public Doituong
{
    public:
        void setThongTin(int tuoi, string name, int mssv);
        void hienthi();
    protected:
        int MSSV;

};


void Sinhvien::setThongTin(int tuoi, string name, int mssv)
{
    TUOI = tuoi;
    NAME = name;
    MSSV = mssv;
}


void Sinhvien::hienthi()
{
    cout << "Day la class Sinh vien" << endl;
    cout << "Tuoi = " << TUOI << endl;
    cout << "Name = " << NAME << endl;
    cout << "MSSV = " << MSSV << endl;
}


class Cetificate : public Sinhvien
{
    public:
        void setThongTin(int tuoi, string name, int mssv, string cetificate);
        void hienthi();
    private:
        string CETIFICATE;
};


void Cetificate::setThongTin(int tuoi, string name, int mssv, string cetificate)
{
    TUOI = tuoi;
    NAME = name;
    MSSV = mssv;
    CETIFICATE = cetificate;
}


void Cetificate::hienthi()
{
    cout << "Day la class Cetificate" << endl;
    cout << "Tuoi = " << TUOI << endl;
    cout << "Name = " << NAME << endl;
    cout << "MSSV = " << MSSV << endl;
    cout << "CTFC = " << CETIFICATE << endl;
}


int main()
{
    Doituong dt;
    dt.setThongTin(23, "Doan");
    dt.hienthi();

    Sinhvien sv;
    sv.setThongTin(23, "Doan", 1811252308);
    sv.hienthi();

    Cetificate ct;
    ct.setThongTin(23, "Doan", 1811252308, "Good");
    ct.hienthi();

    return 0;
}