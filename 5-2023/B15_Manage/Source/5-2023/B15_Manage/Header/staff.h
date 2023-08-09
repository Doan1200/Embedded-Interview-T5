#ifndef STAFF_H
#define STAFF_H
#include "../Header/dish.h"
#include "../Header/tableInformation.h"
#include <list>

class staff
{
    private:
        list<dish> DATABASE_DISH;
        list<tableInformation> DATABASE_TABLE_INFORMATION;
    public:
        staff(list<dish> database, uint8_t number_of_table);



};

#endif // STAFF_H