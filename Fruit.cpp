#include "Fruit.h"
#include <iostream>

Fruit::Fruit(const std::string& name, double price, int quantity, const std::string& origin)
    : Product(name, price, quantity), origin(origin) {}

std::string Fruit::getOrigin() const {
    return origin;
}

void Fruit::setOrigin(const std::string& origin) {
    this->origin = origin;
}

void Fruit::printDetails() const {
    std::cout << "Fruit: " << name << ", Price: $" << price << ", Quantity: " << quantity
              << ", Origin: " << origin << std::endl;
}
