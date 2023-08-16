#ifndef MANAGE_H
#define MANAGE_H

#include <string>
#include<list>
#include "../Header/dish.h"

using namespace std;

class manage
{
    private:

        list<dish> DATABASE;
        uint8_t number_Tables;
        void addDish();
        void editDish();
        void numberTables();


    public:

        manage();
        void showOption();
        void showMenu();
        list<dish> getMenu() const;
        uint8_t getNumberTables();


};

#endif // MANAGE_H