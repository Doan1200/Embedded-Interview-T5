// Tạo một lớp phân số với các thuộc tính tử số và mẫu số và các phương thức để tính toán các phép tính toán cơ bản như cộng, trừ, nhân và chia.
#include<iostream>
#include<string>
using namespace std;

class fractional
{
    private:

        int numerator;

        int denomirator;

    public:

        fractional(int num = 0, int den = 1);       

        // Setter Methods

        void setNumerator(int num);

        void setDenomirator(int den);

        // Get Methods

        int getNumerator();

        int getDenominator();

        // 

        void numFractional(fractional& otherFractional);

        void subFractional(fractional& otherFractional);

        void mulFractional(fractional& otherFractional);

        void divFractional(fractional& otherFractional);

};

fractional::fractional(int num, int den)
{
    numerator = num;

    denomirator = den;
}

void fractional::setNumerator(int num)
{
    numerator = num;
}

void fractional::setDenomirator(int den)
{
    denomirator = den;
}

int fractional::getNumerator()
{
    return numerator;
}

int fractional::getDenominator()
{
    return denomirator;
}

void fractional::numFractional(fractional& otherFractional)
{
    int TU_SO = (numerator * otherFractional.denomirator) + (denomirator * otherFractional.numerator);

    int MAU_SO = (denomirator * otherFractional.denomirator);

    cout << TU_SO << "/" << MAU_SO << endl;
}


void fractional::subFractional(fractional& otherFractional)
{
    int TU_SO = (numerator * otherFractional.denomirator) - (denomirator * otherFractional.numerator);

    int MAU_SO = (denomirator * otherFractional.denomirator);

    cout << TU_SO << "/" << MAU_SO << endl;
}

void fractional::mulFractional(fractional& otherFractional)
{
    int TU_SO = numerator * otherFractional.numerator;

    int MAU_SO = denomirator * otherFractional.denomirator;

    cout << TU_SO << "/" << MAU_SO << endl;   
}

void fractional::divFractional(fractional& otherFractional)
{
    double result = (((double)numerator / denomirator) / ((double)denomirator / otherFractional.denomirator));

    cout << result << endl;

    
}




int main()
{
    fractional fr1(2, 3);

    fractional fr2(3, 4);

    fr1.numFractional(fr2);

    fr1.subFractional(fr2);

    fr1.mulFractional(fr2);

    fr1.divFractional(fr2);

    
    return 0;
}