#include "Clothing.h"
#include <iomanip>
#include <iostream>

Clothing::Clothing(const std::string& name, double price, int quantity, const std::string& size, const std::string& material)
    : Product(name, price, quantity), size(size), material(material) {}

std::string Clothing::getSize() const {
    return size;
}

void Clothing::setSize(const std::string& size) {
    this->size = size;
}

std::string Clothing::getMaterial() const {
    return material;
}

void Clothing::setMaterial(const std::string& material) {
    this->material = material;
}

std::string Clothing::getDetails() const {
    std::ostringstream oss;
    oss << std::fixed << std::setprecision(2);
    oss << "Clothing: " << name << ", Price: $" << price << ", Quantity: " << quantity
        << ", Size: " << size << ", Material: " << material;
    return oss.str();
}
