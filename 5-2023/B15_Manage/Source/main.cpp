#include <iostream>
#include "../Header/manage.h"


typedef enum
{
    EXIT = 0,
    MANAGER,
    STAFF
} Choose;

int main()
{
    int choice;
    manage mn;
    dish di;
    
    while(1)
    {
        std::cout << "---------------------------------" << std::endl;
        std::cout << "\t1. MANAGER" << std::endl;
        std::cout << "\t2. STAFF" << std::endl;
        std::cout << "\t0. EXIT" << std::endl;
        std::cout << "Your choice: ";
        std::cin >> choice;
        std::cin.ignore();
        
    switch(static_cast<Choose>(choice))
    {
        case EXIT:
            return 0;
        case MANAGER:
            mn.showOption();
            break;
        case STAFF:

            break;
        default:
            std::cout << "Please, Re-enter!";
            break;

    }
    }
    return 0;
}