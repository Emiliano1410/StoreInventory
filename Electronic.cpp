#include "Electronic.h"
#include <iostream>

Electronic::Electronic(const std::string& name, double price, int quantity, int warrantyPeriod)
    : Product(name, price, quantity), warrantyPeriod(warrantyPeriod) {}

int Electronic::getWarrantyPeriod() const {
    return warrantyPeriod;
}

void Electronic::setWarrantyPeriod(int warrantyPeriod) {
    this->warrantyPeriod = warrantyPeriod;
}

void Electronic::printDetails() const {
    std::cout << "Electronic: " << name << ", Price: $" << price << ", Quantity: " << quantity
              << ", Warranty Period: " << warrantyPeriod << " months" << std::endl;
}
