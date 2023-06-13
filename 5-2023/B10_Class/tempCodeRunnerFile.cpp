#include<iostream>
#include<string>

using namspace std;

class Doituong
{
    public:
        void setThongTin(string name, int tuoi); 
        void hienthi();
    private:
        int TUOI;
        char NAME;
}

void Doituong::hienthi()
{
    cout<<"Day la class doi tuong"<<endl;
    cout<<"Tuoi = "<<TUOI<<endl;
    cout<<"Lop  = "<<NAME<<endl;
}

void Doituong::setThongTin(string name, int tuoi)
{
    NAME = name;
    TUOI = tuoi;
}




int main()
{
    Doituong dt;
    dt.setThongTin("Hoang", 17);
    dt.hienthi();
    return 0;
}