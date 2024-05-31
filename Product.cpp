#include "Product.h"
#include <iostream>

Product::Product(const std::string& name, double price, int quantity)
    : name(name), price(price), quantity(quantity) {}

std::string Product::getName() const {
    return name;
}

void Product::setName(const std::string& name) {
    this->name = name;
}

double Product::getPrice() const {
    return price;
}

void Product::setPrice(double price) {
    this->price = price;
}

int Product::getQuantity() const {
    return quantity;
}

void Product::setQuantity(int quantity) {
    this->quantity = quantity;
}

std::ostream& operator<<(std::ostream& os, const Product& product) {
    os << product.getDetails();
    return os;
}
