/* Author: Tran Dinh Doan

*/

#ifndef DISH_H
#define DISH_H
#include <cstdint>
#include <string>
using namespace std;

class dish
{
    private:
        uint8_t id;
        string name;
        double price;
    public:
        // Constructor
        dish(string name, double price);
        dish();

        // Setters
        void setName(string name);
        void setPrice(double price);

        //Getters
        uint8_t getId();
        string getName() const;
        double getPrice() const;
};

#endif // FOOD_H