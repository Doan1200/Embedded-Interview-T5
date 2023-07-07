//Tạo một lớp tài khoản ngân hàng với các thuộc tính số tài khoản, tên tài khoản và số dư, và các phương thức để rút, nộp tiền và kiểm tra số dư
// trong tài khoản
#include<iostream>
#include<string>
#include<cstdint>
using namespace std;

class bankaccount
{
    private:
        string accountname;
        long long int accountnumber;
        long long int accountbalance;
    public:
        bankaccount(string s_accountname = "A", long long int i_accountnumber = 0, long long int i_accountbalance = 0);

        void setAccountName(string s_accountname);
        void setAccountNumber(long long int i_accountnumber);
        void setAccountBalance(long long int i_accountbalance);

        string getAccountName();
        long long int getAccountNumber();
        long long int getAccountBalance();

        void depsosit(long long int amount);
        void withdraw(long long int amount);
        void checkbalance();
};

bankaccount::bankaccount(string s_accountname, long long int i_accountnumber, long long int i_accountbalance)
{
    accountname = s_accountname;
    accountnumber = i_accountnumber;
    accountbalance = i_accountbalance;
}

void bankaccount::setAccountName(string s_accountname)
{
    accountname = s_accountname;
}  

void bankaccount::setAccountNumber(long long int i_accountnumber)
{
    accountnumber = i_accountnumber;
}

void bankaccount::setAccountBalance(long long int i_accountbalance)
{
    accountbalance = i_accountbalance;
}

string bankaccount::getAccountName()
{
    return accountname;
}

long long int bankaccount::getAccountNumber()
{
    return accountnumber;
}

long long int bankaccount::getAccountBalance()
{
    return accountbalance;
}

void bankaccount::depsosit(long long int amount)
{
     accountbalance += amount;

     cout << "So du cua tai khoan la: " << accountbalance << endl;
}

void bankaccount::withdraw(long long int amount)
{
    if(amount <= accountbalance)
    {
        accountbalance -= amount;
        cout << "So du con lai cua ban la: " << accountbalance << endl;
    }
    else
    {
        cout << "So du khong du" << endl;
    }
}

void bankaccount::checkbalance()
{
    cout << "So du cua ban la: " << accountbalance << endl;
}

int main()
{
    string accountname;
    long long int accountnumber, accountbalance;

    cout << "Nhap vao ten tai khoan:";
    getline(cin, accountname);

    cout << "Nhap vao so tai khoan: ";
    cin >> accountnumber;

    cout << "Nhap vao so du tai khoan: ";
    cin >> accountbalance;

    bankaccount ba(accountname, accountnumber, accountbalance);

    cout << "Ten tai khoan: " << ba.getAccountName() << endl;
    cout << "So tai khoan: " << ba.getAccountNumber() << endl;
    cout << "So du tai khoan: " << ba.getAccountBalance() << endl;

    long long int amount;
    int choose;
    while(choose != 0)
    {
    cout << " " << endl;
    cout << "///////////////////////////////////////////" << endl;
    cout << " " << endl;
    cout << "\tMENU" << endl;
    cout << "\t1. Gui tien" << endl;
    cout << "\t2. Rut tien" << endl;
    cout << "\t3. Kiem tra so du" << endl;
    cout << "\tNhap vao lua chon cua ban: ";
    cin >> choose;
    cout << " " << endl;
    

    switch(choose)
    {
        case 1:
            cout << "Nhap vao so tien ban muon gui: ";
            cin >> amount;
            ba.depsosit(amount);
            break;
        case 2:
            cout << "Nhap vao so tien ban muon rut: ";
            cin >> amount;
            ba.withdraw(amount);
            break;
        case 3:
            ba.checkbalance();
            break;
        default:
            cout << "Ki tu khong hop le!" << endl;
            break;
    }
    }
  

    return 0;
}