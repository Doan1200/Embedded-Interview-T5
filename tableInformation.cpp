#include "../Header/tableInformation.h"

tableInformation::tableInformation(uint8_t number_of_table, bool status)
{
    _numbers_of_table = number_of_table;
    _status = status;
}

void tableInformation::deleteDish(uint8_t id)
{
    uint8_t id;

    auto position = DATABASE_DISH.begin();

    for(auto item : DATABASE_DISH)
    {
        if(item.getId() == id)
        {
            DATABASE_DISH.erase(position);
        }
        position++;
    }
}

void tableInformation::addDish(dish dis, uint8_t quantity)
{

}