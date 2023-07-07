#include<iostream>
using namespace std;

class perSon
{
    private:
        int date;
        int month;
        int year;
        int currentdate;
        int currentmonth;
        int currentyear;
    public:
        perSon(int i_date = 1, int i_month = 1, int i_year = 1, int i_currentdate = 1, int i_currentmonth = 1, int i_currentyear = 1);

        // Set methods
        void setDate(int i_date);
        void setMonth(int i_month);
        void setYear(int i_year);
        void setcurrentDate(int i_currentDate);
        void setCurrentMonth(int i_currentMonth);
        void setCurrentYear(int i_currentYear);

        // Get methods
        int getDate();
        int getMonth();
        int getYear();
        int getcurrentDate();
        int getCurrentMonth();
        int getCurrentYear();


        void calculateAge();
        bool checkHoliday();
};

perSon::perSon(int i_date, int i_month, int i_year, int i_currentdate, int i_currentmonth, int i_currentyear)
{
    date = i_date;
    month = i_month;
    year = i_year;
    currentdate = i_currentdate;
    currentmonth = i_currentmonth;
    currentyear = i_currentyear;
}


void perSon::setDate(int i_date)
{
    date = i_date;
}

void perSon::setMonth(int i_month)
{
    month = i_month;
}

void perSon::setYear(int i_year)
{
    year = i_year;
}

void perSon::setcurrentDate(int i_setcurrentDate)
{
    currentdate = i_setcurrentDate;
}

void perSon::setCurrentMonth(int i_setcurrentMonth)
{
    currentmonth = i_setcurrentMonth;
}

void perSon::setCurrentYear(int i_setcurrentYear)
{
    currentyear = i_setcurrentYear;
}

//

int perSon::getDate()
{
    return date;
}

int perSon::getMonth()
{
    return month;
}

int perSon::getYear()
{
    return year;
}

int perSon::getcurrentDate()
{
    return currentdate;
}

int perSon::getCurrentMonth()
{
    return currentmonth;
}

int perSon::getCurrentYear()
{
    return currentyear;
}

void perSon::calculateAge()
{
    int age = currentyear - year;

    if(currentmonth < month || currentmonth == month && currentdate < date)
    {
        age--;

        cout << "Tuoi cua ban la: " << age << endl;
    }
    else
        cout << "Tuoi cua ban la: " << age << endl;
}


bool perSon::checkHoliday()
{
    if(date == currentdate && month == currentmonth)
    {
        return true;
    }
    else 
        return false;
}

int main()
{
    int date, month, year;

    cout << "Nhap vao ngay thang nam sinh cua ban: ";

    cin >> date >> month >> year;

    int currenDate, currenMonth, currenYear;
    
    cout << "Nhap vao ngay thang nam hien tai:";

    cin >> currenDate >> currenMonth >> currenYear;

    perSon ps(date, month, year, currenDate, currenMonth, currenYear);



    ps.calculateAge();

    if(ps.checkHoliday())
    {
        cout <<"Day la sinh nhat cua ban!";
    }
    else
    {
        cout << "Day la ngay binh thuong!";
    }

    return 0;
}