// Tạo một lớp người với các thuộc tính tên, tuổi và địa chỉ, và các phương thức để in thông tin của người đó và tính tuổi của người đó

#include<iostream>
#include<string>

using namespace std;

class person
{
    private:

        string name;

        int age;

        string address;

    public:

        person(string personName = "A", int personAge = 0, string personAddress = "B");

        // Setter Methods

        void setName(string personName);

        void setAge(int personAge);

        void setAddress(string address);

        // Getter Methods

        string getName();

        int getAge();

        string getAddress();

        // Calculator Age

        void calculatorAge(int personAge);
};

person::person(string personName, int personAge, string personAddress)
{
    name = personName;

    age = personAge;

    address = personAddress;
}

// Setter Methods

void person::setName(string personName)
{
    name = personName;
}

void person::setAge(int personAge)
{
    age = personAge;
}

void person::setAddress(string personAddress)
{
    address = personAddress;
}

string person::getName()
{
    return name;
}

int person::getAge()
{
    return age;
}

string person::getAddress()
{
    return address;
}

void person::calculatorAge(int personAge)
{
    int I_NAM_HIEN_TAI;

    cout << "Nhap vao nam hien tai: ";

    cin >> I_NAM_HIEN_TAI;

    int YEAR_OF_BIRTH = I_NAM_HIEN_TAI - personAge;

    cout << "Year Of Birth: " << YEAR_OF_BIRTH << endl; 
}

int main()
{

    person ps("Doan", 23, "296 Dray Sap");
  
    ps.calculatorAge(ps.getAge());

    ps.getAge();

    return 0;
}