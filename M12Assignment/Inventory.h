//  Inventory.h
//  M12Assignment
//  Created by Aqila Nasiry on 5/8/25.

/*
 Design an Inventory class that can hold the information and calculate data for items in a retail store's inventory.
 */

// Inventory.h
#ifndef INVENTORY_H
#define INVENTORY_H

class Inventory {
private:
    int itemNumber;
    int quantity;
    double cost;

public:
    // Default constructor
    Inventory();

    // Overloaded constructor
    Inventory(int itemNum, int qty, double itemCost);

    // Setters
    void setItemNumber(int itemNum);
    void setQuantity(int qty);
    void setCost(double itemCost);

    // Getters
    int getItemNumber() const;
    int getQuantity() const;
    double getCost() const;
    double getTotalCost() const;
};

#endif

