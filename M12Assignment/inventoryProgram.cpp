//  inventoryProgram.cpp
//  M12Assignment
//  Created by Aqila Nasiry on 5/8/25.

/*
 The program should ask the user how many items it is going to store in the inventory.
 Make sure that the user enters positive numbers for the number. Your program should then
 dynamically allocate an array of  that many objects. Each object’s members should be
 assigned with user input. Finally, display each object's information. Do not accept negative numbers for any input. 
 */

#include <iostream>
#include <iomanip>
#include "Inventory.h"
using namespace std;

// this part is about sort the array based on the itemNumber: Extra Credit part of the assignment
void sortInventory(Inventory* items, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (items[j].getItemNumber() < items[i].getItemNumber()) {
                Inventory temp = items[i];
                items[i] = items[j];
                items[j] = temp;
            }
        }
    }
}

int main() {
    int numItems;

    // ask the user how many items it is going to store in the inventory
    cout << "Enter the number of inventory items: ";
    cin >> numItems;

    //Make sure that the user enters positive numbers for the number
    while (numItems <= 0) {
        cout << "Please enter a positive number: ";
        cin >> numItems;
    }

    // Dynamically allocate array of Inventory objects
    Inventory* items = new Inventory[numItems];

    // Get user input for each item
    for (int i = 0; i < numItems; i++) {
        int itemNum, quantity;
        double cost;

        cout << "\nItem #" << (i + 1) << ":\n";

        do {
            cout << "Enter item number: ";
            cin >> itemNum;
        } while (itemNum < 0);

        do {
            cout << "Enter quantity: ";
            cin >> quantity;
        } while (quantity < 0);

        do {
            cout << "Enter cost per item: ";
            cin >> cost;
        } while (cost < 0.0);

        items[i].setItemNumber(itemNum);
        items[i].setQuantity(quantity);
        items[i].setCost(cost);
    }

    //sort the array
    sortInventory(items, numItems);

    //display
    cout << fixed << setprecision(2);
    cout << "\nComplete Inventory List:\n";
    for (int i = 0; i < numItems; i++) {
        cout << "Item Number is: " << items[i].getItemNumber() << endl;
        cout << "Quantity is: " << items[i].getQuantity() << endl;
        cout << "Cost is about: $" << items[i].getCost() << endl;
        cout << "Your total cost will be: $" << items[i].getTotalCost() << "\n\n";
    }

    // Free dynamically allocated memory
    delete[] items;

    return 0;
}
