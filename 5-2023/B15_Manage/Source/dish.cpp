#include "../Header/dish.h"

// Constructor

dish::dish(string name, double price)
{
    this->name = name;
    this->price = price;
}
dish::dish(){}

// Setters

void dish::setName(string name)
{
    this->name = name;
}

void dish::setPrice(double price)
{
    this->price = price;
}

// Getters

uint8_t dish::getId()
{
    return this->id;
}

string dish::getName() const
{
    return this->name;
}

double dish::getPrice() const
{
    return this->price;
}