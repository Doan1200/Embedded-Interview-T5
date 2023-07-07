#include<iostream>
#include<string>
#include<list>

using namespace std;

enum TypeSex {
    NAM,
    NU
};

enum TypeAcademic {
    GIOI,
    KHA,
    TRUNG_BINH,
    YEU
};

class Student {
private:
    int ID;
    string NAME;
    int AGE;
    double mathScores;
    double physicsScores;
    double chemistryScores;
    TypeAcademic ACADEMIC;
    TypeSex SEX;

public:
    Student(int id = 0, string name = " ", int age = 0, TypeAcademic academic = KHA, TypeSex sex = NAM, double math = 0, double physics = 0, double chemistry = 0);

    // Setter Methods
    void setID(int id);
    void setName(string name);
    void setAge(int age);
    void setAcademic(TypeAcademic academic);
    void setSex(TypeSex sex);
    void setMathScores(double math);
    void setPhysicsScores(double physics);
    void setChemistryScores(double chemistry);

    // Getter Methods
    int getID();
    string getName();
    int getAge();
    string getAcademic();
    string getSex();
    double getMathScores();
    double getPhysicsScores();
    double getChemistryScores();
    float getAverageScore();
};

Student::Student(int id, string name, int age, TypeAcademic academic, TypeSex sex, double math, double physics, double chemistry)
{
    ID = id;
    NAME = name;
    AGE = age;
    ACADEMIC = academic;
    SEX = sex;
    mathScores = math;
    physicsScores = physics;
    chemistryScores = chemistry;
}

// Setter Methods

void Student::setID(int id)
{
    ID = id;
}

void Student::setName(string name)
{
    NAME = name;
}

void Student::setAge(int age)
{
    AGE = age;
}

void Student::setAcademic(TypeAcademic academic)
{
    ACADEMIC = academic;
}

void Student::setSex(TypeSex sex)
{
    SEX = sex;
}

void Student::setMathScores(double math)
{
    mathScores = math;
}

void Student::setPhysicsScores(double physics)
{
    physicsScores = physics;
}

void Student::setChemistryScores(double chemistry)
{
    chemistryScores = chemistry;
}

// Getter Methods

int Student::getID()
{
    return ID;
}

string Student::getName()
{
    return NAME;
}

int Student::getAge()
{
    return AGE;
}

string Student::getAcademic()
{
    string academicStr[] = { "GIOI", "KHA", "TRUNG_BINH", "YEU" };
    return academicStr[ACADEMIC];
}

string Student::getSex()
{
    string sexStr[] = { "NAM", "NU" };
    return sexStr[SEX];
}

double Student::getMathScores()
{
    return mathScores;
}

double Student::getPhysicsScores()
{
    return physicsScores;
}

double Student::getChemistryScores()
{
    return chemistryScores;
}

float Student::getAverageScore()
{
    return (mathScores + physicsScores + chemistryScores) / 3;
}

class Menu {
private:
    list<Student> Database;

public:
    void themSinhVien();
    void hienThiSinhVien();
    void capNhatThongTin();
    void xoaThanhVien();
};

void Menu::themSinhVien()
{
    int id, age;
    string name;
    double math, physics, chemistry;
    TypeAcademic academic;
    TypeSex sex;

    cout << "Nhap ID: ";
    cin >> id;
    cin.ignore(); 
    cout << "Nhap ten: ";
    getline(cin, name);
    cout << "Nhap tuoi: ";
    cin >> age;
    cout << "Nhap hoc luc (0: GIOI, 1: KHA, 2: TRUNG_BINH, 3: YEU): ";
    int academicInput;
    cin >> academicInput;
    academic = static_cast<TypeAcademic>(academicInput);
    cout << "Nhap gioi tinh (0: NAM, 1: NU): ";
    int sexInput;
    cin >> sexInput;
    sex = static_cast<TypeSex>(sexInput);
    cout << "Nhap diem Toan: ";
    cin >> math;
    cout << "Nhap diem Ly: ";
    cin >> physics;
    cout << "Nhap diem Hoa: ";
    cin >> chemistry;

    Student st(id, name, age, academic, sex, math, physics, chemistry);

    Database.push_back(st);
}

void Menu::hienThiSinhVien()
{
    cout << "Danh sach sinh vien:" << endl;
    for (auto& st : Database)
    {
        cout << "ID: " << st.getID() << endl;
        cout << "Name: " << st.getName() << endl;
        cout << "Age: " << st.getAge() << endl;
        cout << "Sex: " << st.getSex() << endl;
        cout << "Math: " << st.getMathScores() << endl;
        cout << "Physics: " << st.getPhysicsScores() << endl;
        cout << "Chemistry: " << st.getChemistryScores() << endl;
        cout << "Average Score: " << st.getAverageScore() << endl;
        cout << "Academic Performance: " << st.getAcademic() << endl;

        cout << "--------------------------------------" << endl;
    }
}

void Menu::capNhatThongTin()
{
    int id, age;
    string name;
    double math, physics, chemistry;
    TypeAcademic academic;
    TypeSex sex;

    cout << "Nhap vao ID: ";
    cin >> id;

    for (auto& item : Database)
    {
        if (item.getID() == id)
        {
            cout << "Nhap ten: ";
            cin.ignore();
            getline(cin, name);
            cout << "Nhap tuoi: ";
            cin >> age;
            cout << "Nhap hoc luc (0: GIOI, 1: KHA, 2: TRUNG_BINH, 3: YEU): ";
            int academicInput;
            cin >> academicInput;
            academic = static_cast<TypeAcademic>(academicInput);
            cout << "Nhap gioi tinh (0: NAM, 1: NU): ";
            int sexInput;
            cin >> sexInput;
            sex = static_cast<TypeSex>(sexInput);
            cout << "Nhap diem Toan: ";
            cin >> math;
            cout << "Nhap diem Ly: ";
            cin >> physics;
            cout << "Nhap diem Hoa: ";
            cin >> chemistry;
            item.setID(id);
            item.setName(name);
            item.setAge(age);
            item.setAcademic(academic);
            item.setSex(sex);
            item.setMathScores(math);
            item.setPhysicsScores(physics);
            item.setChemistryScores(chemistry);
            break;
        }
        else
        {
            cout << "Khong tim thay ID!" << endl;
        }
    }
}

void Menu::xoaThanhVien()
{
    int number;
    cout << "Nhap vao ID muon xoa: ";
    cin >> number;

    for (auto it = Database.begin(); it != Database.end(); ++it)
    {
        if(it->getID() == number)
        {
            Database.erase(it);
            break;
        }
    }
}
int main()
{
    Menu menu;

    char choice;

    do
    {
        cout << "Chon thao tac: " << endl;
        cout << "1. Them sinh vien" << endl;
        cout << "2. Hien thi danh sach sinh vien" << endl;
        cout << "3. Cap nhat thong tin" << endl;
        cout << "4. Xoa ID" << endl;
        cout << "5. Thoat" << endl;
        cout << "Nhap lua chon: ";
        cin >> choice;

        switch (choice)
        {
        case '1':
            menu.themSinhVien();
            break;
        case '2':
            menu.hienThiSinhVien();
            break;
        case '3':
            menu.capNhatThongTin();
            break;
        case '4':
            menu.xoaThanhVien();
            break;
        case '5':
            cout << "Tam biet!";
            break;
        default:
            cout << "Lua chon khong hop le!";
            break;
        }
        cout << endl;
    } while (choice != '5');

    return 0;
}
