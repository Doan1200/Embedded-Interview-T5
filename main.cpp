#include <iostream>
#include "../Header/manage.h"
#include "../Header/macro.h"


typedef enum
{
    QUAN_LY = 1,
    NHAN_VIEN,
    THOAT
} Luachon;

class menu
{   private:
        string _name;    
    public:
        menu();

        void setName(string name);
        string getName();
};

menu::menu()
{
}

void menu::setName(string name)
{
    _name = name;
}

string menu::getName()
{
    return _name;
}

int main()
{
    menu mn;
    while(1)
    {
    int number;
    CHOOSE_KEY("1. QUAN LY\n"
               "2. NHAN VIEN\n"
               "3.THOAT\n"
               "NHAP VAO LUA CHON CUA BAN: ");
    switch(number)
    {
        case QUAN_LY:
            mn.setName("DOAN");
            CHOOSE_KEY("TEN CUA BAN: ");
            mn.getName();
            break;
        case NHAN_VIEN:
            cout <<"NHAN VIEN" << endl;
            break;
        case THOAT:
            return 0;
            
    }
    }
    return 0;
}