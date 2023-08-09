#include "../Header/staff.h"

staff::staff(list<dish> database, uint8_t number_of_table)
{
    DATABASE_DISH.assign(database.begin(), database.end());
}