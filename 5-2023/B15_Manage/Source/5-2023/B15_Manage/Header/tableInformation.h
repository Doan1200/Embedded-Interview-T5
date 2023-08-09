#ifndef TABLEINFORMATION_H
#define TABLEINFORMATION_H
#include "../Header/dish.h"

#include <cstdint>
#include <list>

class tableInformation
{
    private:
        uint8_t _numbers_of_table;
        bool _status;
        typedef struct
        {
            dish DISH;
            uint8_t QUANTITY;
        }TypeDish;
        list<dish> DATABASE_DISH;
    public:
        tableInformation(uint8_t number_of_table, bool status);
        
        uint8_t getTable();
        bool getStatus();

        void listDish(); 
        void addDish(dish dis, uint8_t quantity);
        void editDish(uint8_t id, uint8_t quantity);
        void deleteDish(uint8_t id);

};

#endif