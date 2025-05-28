//  Inventory.cpp
//  M12Assignment
//  Created by Aqila Nasiry on 5/8/25.

#include "Inventory.h"

// Default constructor
Inventory::Inventory() {
    itemNumber = 0;
    quantity = 0;
    cost = 0.0;
}

// Overloaded constructor
Inventory::Inventory(int itemNum, int qty, double itemCost) {
    itemNumber = itemNum;
    quantity = qty;
    cost = itemCost;
}

// Setters
void Inventory::setItemNumber(int itemNum) {
    itemNumber = itemNum;
}

void Inventory::setQuantity(int qty) {
    quantity = qty;
}

void Inventory::setCost(double itemCost) {
    cost = itemCost;
}

// Getters
int Inventory::getItemNumber() const {
    return itemNumber;
}

int Inventory::getQuantity() const {
    return quantity;
}

double Inventory::getCost() const {
    return cost;
}

double Inventory::getTotalCost() const {
    return quantity * cost;
}
