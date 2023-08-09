#include "../Header/manage.h"
#include "../Header/macro.h"
#include "../Header/enum.h"

// Constructor

manage::manage()
{
    int number;
    while (1)
    {
        CHOOSE_KEY("1. Add a dish"
                   "2. Edit dish"
                   "3. Delete dish"
                   "4. Display dish"
                   "5. Number Tables"
                   "0. Return");
        switch (static_cast<Type>(number))
        {
        case RETURN:

        case ADD_A_DISH:

            addDish();
            break;

        case EDIT_DISH:

            editDish();
            break;

        case DELETE_DISH:

        case DISPLAY_DISH:

        case NUMBER_TABLES:

        default:

            break;
        }
    }
}

// Setters

manage::manage()
{
   
}

// Getters

uint8_t manage::getNumberTables()
{
    return this->number_Tables;
}

list<dish> manage::getMenu()
{
    return this->DATABASE;
}
