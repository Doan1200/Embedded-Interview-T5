#include "../Header/manage.h"
#include "../Header/enum.h"
#include <iostream>
#include<string>
// Constructor


// Setters

manage::manage(){}


void manage::addDish()
{

    std::string name;
    int price;
    while (true)
    {
        dish newDish;
        std::cout << "DISH NAME: ";
        std::getline(std::cin, name);
        newDish.setName(name);

        std::cout << "DISH PRICE: ";
        std::cin >> price;
        newDish.setPrice(price);

        DATABASE.push_back(newDish);
        int choice;
        std::cout << "Do you want to add another dish? (1/0): ";
        std::cin >> choice;
        if (choice == 0)
        {
            break;
        }
        std::cin.ignore();
    }
}





uint8_t manage::getNumberTables()
{
    return this->number_Tables;
}


list<dish> manage::getMenu() const
{
    return this->DATABASE;
}



void manage::showMenu()
{
    list<dish> menu = getMenu();

    std::cout << std::string(30, '-') << std::endl;

    std::cout << "-----------MENU-----------" << std::endl;
    std::cout << "\tID\tNAME\t\tPRICE" << std::endl;
    std::cout << " " << std::endl;

    for(const dish& d : menu)
    {
        std::cout << "\t" << d.getId() << "\t" << d.getName() << "\t-\t" << d.getPrice() << std::endl;

    }
}



void manage::showOption()
{
    int number;
    while (1)
    {
        std::cout << "---------------------------------" << std::endl;
        std::cout << "\t1. Add a Dish" << std::endl;
        std::cout << "\t2. Edit Dish" << std::endl;
        std::cout << "\t3. Delete Dish" << std::endl;
        std::cout << "\t4. Display Dish" << std::endl;
        std::cout << "\t5. Tables Number" << std::endl;
        std::cout << "\t0. Return" << std::endl;
        std::cout << "Your choice: ";
        std::cin >> number;
        std::cin.ignore();

        switch (static_cast<Type>(number))
        {
        case RETURN:
            return;
        case ADD_A_DISH:
            addDish();
            break;

        case EDIT_DISH:

            break;

        case DELETE_DISH:

        case DISPLAY_DISH:

            showMenu();
            break;

        case NUMBER_TABLES:

        default:

            break;
        }
    }
}
