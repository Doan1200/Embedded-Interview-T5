#include<iostream>
#include<string>
using namespace std;


class Animal
{
    private:
        string name;        
        int age;
        double weight;
    public:
        // Create a Constructor
        Animal(string animalName = "A", int animalAge = 0, double animalWeight = 0);

        // Setter Methods

        void setName(string animalName);
        void setAge(int animalAge);
        void setWeight(double animalWeight);

        // Getter Methods

        string getName();
        int getAge();
        double getWeight();

        // Calculator BMI of Animal

        double calculatorAnimal();

        // Compare Age and Weight of two Animal

        void compareOldAnimal(Animal& otherAnimal);

        void compareWeightAnimal(Animal& otherAnimal);
      
};

Animal::Animal(string animalName, int animalAge, double animalWeight)
{
    name = animalName;
    age = animalAge;
    weight = animalWeight;
}

// Setter Methods

void Animal::setName(string animalName)
{
    name = animalName;
}

void Animal::setAge(int animalAge)
{
    age = animalAge;
}

void Animal::setWeight(double animalWeight)
{
    weight = animalWeight;
}

// Getter Methods

string Animal::getName()
{
    return name;
}

int Animal::getAge()
{
    return age;
}

double Animal::getWeight()
{
    return weight;
}

double Animal::calculatorAnimal()
{
    double animalHeight = 1.65;

    double BMI = weight / (animalHeight * animalHeight);

    return BMI;
}


void Animal::compareOldAnimal(Animal& otherAnimal)
{
    if(age > otherAnimal.getAge())
    {
        cout << name << " is older than " << otherAnimal.getName() << "." << endl;
    }
    else if (age < otherAnimal.getAge())
    {
        cout << name << " is younger than " << otherAnimal.getName() << "." << endl;
    }
    else
    {
        cout << name << " is the same age as " << otherAnimal.getName() << "." << endl;
    }
}

void Animal::compareWeightAnimal(Animal& otherAnimal)
{
    if(weight > otherAnimal.getWeight())
    {
        cout << name << " is heavier than " << otherAnimal.getName() << endl;
    }
    else if (weight < otherAnimal.getWeight())
    {   
        cout << name << " is lighter than " << otherAnimal.getName() << endl;
    }
    else
    {
        cout << name << " as heavy as " << otherAnimal.getName() << endl;
    }
}

int main()
{
    Animal mouse("Jerry", 2, 2);

    Animal cat("Tom", 3, 30);

    cout << "The BMI of mouse is: " << mouse.calculatorAnimal() << endl;

    cout << "The BMI of cat is: " << cat.calculatorAnimal() << endl;

    mouse.compareOldAnimal(cat);

    cat.compareOldAnimal(mouse);

    mouse.compareWeightAnimal(cat);

    cat.compareWeightAnimal(mouse);

    return 0;
}