#include "Fruit.h"
#include <iomanip>
#include <iostream>

Fruit::Fruit(const std::string& name, double price, int quantity, const std::string& origin)
    : Product(name, price, quantity), origin(origin) {}

std::string Fruit::getOrigin() const {
    return origin;
}

void Fruit::setOrigin(const std::string& origin) {
    this->origin = origin;
}

std::string Fruit::getDetails() const {
    std::ostringstream oss;
    oss << std::fixed << std::setprecision(2);
    oss << "Fruit: " << name << ", Price: $" << price << ", Quantity: " << quantity
        << ", Origin: " << origin;
    return oss.str();
}
