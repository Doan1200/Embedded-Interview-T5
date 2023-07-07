// Tạo một lớp xe hơi với các thuộc tính màu sắc, kiểu động cơ và số km
// đã đi, và các phương thức để tính toán chi phí bảo trì, kiểm tra số km
// đã đi và in thông tin về xe.
#include<iostream>
#include<string>
using namespace std;

class car
{
    private:
        string color;
        string enginetype;
        int kilometersdriven;
    public:
        car(string c = " ", string et = " ", int km = 0);

        // set methods
        void setColor(string c);
        void setEngine(string et);
        void setKm(int km);

        // get methods
        string getColor();
        string getEngine();
        int getKm();

        //
        void calculateMaintainCost();
        void checkKilomettersDriven();
        void printfCarInfo();




};

car::car(string c, string et, int km)
{
    color = c;
    enginetype = et;
    kilometersdriven = km;
}

// 
void car::setColor(string c)
{
    color = c;
}

void car::setEngine(string et)
{
    enginetype = et;
}

void car::setKm(int km)
{
    kilometersdriven = km;
}

//
string car::getColor()
{
    return color;
}

string car::getEngine()
{
    return enginetype;
}

int car::getKm()
{
    return kilometersdriven;
}


void car::calculateMaintainCost()
{
    int cost;
    cost = getKm() * 0.1;
    cout << "Chi phi bao duong: " << cost << endl;
}

void car::checkKilomettersDriven()
{
   cout << "So km da di: " << getKm() << endl;
}

void car::printfCarInfo()
{
    cout << "\tTHONG TIN XE " << endl;
    cout << "\tMau xe: " << enginetype << endl;
    cout << "\tMau son: " << color << endl;
    cout << "\tSo km da di: " << getKm() << endl;
   
}

int main()
{
    string color, enginetype;
    int kilometersdriven;

    cout << "Nhap vao mau son: ";
    getline(cin, color);
    cout << "Nhap vao mau xe: ";
    getline(cin, enginetype);
    cout << "Nhap vao so Km da di: ";
    cin >> kilometersdriven;

    car c(color, enginetype, kilometersdriven);

    c.calculateMaintainCost();
    c.checkKilomettersDriven();
    c.printfCarInfo();

    

    return 0;
}