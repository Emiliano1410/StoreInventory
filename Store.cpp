#include "Store.h"
#include <algorithm>
#include <iostream>

Store::Store() {}

void Store::addProductToInventory(const std::shared_ptr<Product>& product) {
    products.push_back(product);
}

void Store::addProductToInventory(const std::string& name, double price, int quantity, const std::string& origin) {
    auto product = std::make_shared<Fruit>(name, price, quantity, origin);
    products.push_back(product);
}

void Store::addProductToInventory(const std::string& name, double price, int quantity, int warrantyPeriod) {
    auto product = std::make_shared<Electronic>(name, price, quantity, warrantyPeriod);
    products.push_back(product);
}

void Store::addProductToInventory(const std::string& name, double price, int quantity, const std::string& size, const std::string& material) {
    auto product = std::make_shared<Clothing>(name, price, quantity, size, material);
    products.push_back(product);
}

void Store::removeProductFromInventory(const std::string& productName) {
    products.erase(std::remove_if(products.begin(), products.end(),
                                  [&productName](const std::shared_ptr<Product>& product) {
                                      return product->getName() == productName;
                                  }), products.end());
}

void Store::listProducts() const {
    for (const auto& product : products) {
        std::cout << product->getDetails() << std::endl;
    }
}
