#include "Store.h"
#include "Fruit.h"
#include "Electronic.h"
#include "Clothing.h"
#include <algorithm>
#include <sstream>
#include <fstream>
#include <iostream>

Store::Store() {}

void Store::addProductToInventory(const std::shared_ptr<Product>& product) {
    products.push_back(product);
}

void Store::addProductToInventory(const std::string& name, double price, int quantity, const std::string& origin) {
    products.push_back(std::make_shared<Fruit>(name, price, quantity, origin));
}

void Store::addProductToInventory(const std::string& name, double price, int quantity, int warrantyPeriod) {
    products.push_back(std::make_shared<Electronic>(name, price, quantity, warrantyPeriod));
}

void Store::addProductToInventory(const std::string& name, double price, int quantity, const std::string& size, const std::string& material) {
    products.push_back(std::make_shared<Clothing>(name, price, quantity, size, material));
}

void Store::removeProductFromInventory(const std::string& productName) {
    auto it = std::remove_if(products.begin(), products.end(),
        [&productName](const std::shared_ptr<Product>& product) { return product->getName() == productName; });
    products.erase(it, products.end());
}

std::string Store::listProducts() const {
    std::ostringstream oss;
    for (const auto& product : products) {
        oss << *product << "\n";
    }
    return oss.str();
}

void Store::saveToFile(const std::string& filename) const {
    std::ofstream file(filename);
    if (file.is_open()) {
        for (const auto& product : products) {
            if (auto fruit = std::dynamic_pointer_cast<Fruit>(product)) {
                file << "Fruit " << fruit->getName() << " " << fruit->getPrice() << " " << fruit->getQuantity() << " " << fruit->getOrigin() << "\n";
            } else if (auto electronic = std::dynamic_pointer_cast<Electronic>(product)) {
                file << "Electronic " << electronic->getName() << " " << electronic->getPrice() << " " << electronic->getQuantity() << " " << electronic->getWarrantyPeriod() << "\n";
            } else if (auto clothing = std::dynamic_pointer_cast<Clothing>(product)) {
                file << "Clothing " << clothing->getName() << " " << clothing->getPrice() << " " << clothing->getQuantity() << " " << clothing->getSize() << " " << clothing->getMaterial() << "\n";
            }
        }
        file.close();
    } else {
        std::cerr << "Unable to open file for writing.\n";
    }
}

void Store::loadFromFile(const std::string& filename) {
    std::ifstream file(filename);
    if (file.is_open()) {
        products.clear();
        std::string line;
        while (std::getline(file, line)) {
            std::istringstream iss(line);
            std::string type, name;
            double price;
            int quantity;
            iss >> type >> name >> price >> quantity;

            if (type == "Fruit") {
                std::string origin;
                iss >> origin;
                addProductToInventory(name, price, quantity, origin);
            } else if (type == "Electronic") {
                int warrantyPeriod;
                iss >> warrantyPeriod;
                addProductToInventory(name, price, quantity, warrantyPeriod);
            } else if (type == "Clothing") {
                std::string size, material;
                iss >> size >> material;
                addProductToInventory(name, price, quantity, size, material);
            }
        }
        file.close();
    } else {
        std::cerr << "Unable to open file for reading.\n";
    }
}
