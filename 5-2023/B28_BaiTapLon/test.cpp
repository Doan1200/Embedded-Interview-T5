#include <iostream>
#include <vector>
using namespace std;

struct MenuItem {
    string name;
    int id;
    float price;
};

class Manager {
private:
    vector<MenuItem> menu;

public:
    void addMenuItem();
    void editMenuItem();
    void deleteMenuItem();
    void displayMenu();
    void setTableNumber();
};

void Manager::addMenuItem() {

    static int nextID = 1;

    MenuItem item;

    cout << "Enter the name of the item: ";
    cin.ignore();
    getline(cin, item.name);

    item.id = nextID;

    cout << "Enter the price of the item: ";
    cin >> item.price;

    menu.push_back(item);
    cout << "New item has been added to the menu." << endl;
    nextID++;
}

void Manager::editMenuItem() {

    displayMenu();
    
    int id;
    string newName;
    float newPrice;

    cout << "Enter the ID of the item to edit: ";
    cin >> id;

    cout << "Enter the new name of the item: ";
    cin.ignore();
    getline(cin, newName);

    cout << "Enter the new price of the item: ";
    cin >> newPrice;

    for (auto& item : menu) {
        if (item.id == id) {
            item.name = newName;
            item.price = newPrice;
            cout << "Item information has been updated." << endl;
            return;
        }
    }
    cout << "No item found with the corresponding ID." << endl;
}

void Manager::deleteMenuItem() {
    int id;

    cout << "Enter the ID of the item to delete: ";
    cin >> id;

    for (auto it = menu.begin(); it != menu.end(); ++it) {
        if (it ->id == id) {
            menu.erase(it);
            cout << "Item has been removed from the menu." << endl;
            return;
        }
    }
    cout << "No item found with the corresponding ID." << endl;
}

void Manager::displayMenu() {
    cout << "Menu items:" << endl;
    for (const auto& item : menu) {
        cout << "ID: " << item.id << ", Name: " << item.name << ", Price: " << item.price << endl;
    }
}

void Manager::setTableNumber() {
    int tableNumber;
    cout << "Enter the table number: ";
    cin >> tableNumber;
    cout << "Table number has been set to " << tableNumber << "." << endl;
}

class Employee {
public:
    void callWaiter();
};

void Employee::callWaiter() {
    cout << "Employee has called the manager." << endl;
}

int main() {
    Manager manager;
    Employee employee;

    int choice;

    do {
        cout << "Menu:" << endl;
        cout << "1. Add a menu item" << endl;
        cout << "2. Edit a menu item" << endl;
        cout << "3. Delete a menu item" << endl;
        cout << "4. Display menu" << endl;
        cout << "5. Set table number" << endl;
        cout << "6. Call waiter" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                manager.addMenuItem();
                break;
            case 2:
                manager.editMenuItem();
                break;
            case 3:
                manager.deleteMenuItem();
                break;
            case 4:
                manager.displayMenu();
                break;
            case 5:
                manager.setTableNumber();
                break;
            case 6:
                employee.callWaiter();
                break;
            case 0:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }

        cout << endl;
    } while (choice != 0);

    return 0;
}
