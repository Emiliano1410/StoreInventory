#include "Store.h"
#include <iostream>

Store::Store() {}

void Store::addProductToInventory(const std::shared_ptr<Product>& product) {
    inventory.addProduct(product);
}

void Store::addProductToInventory(const std::string& name, double price, int quantity, const std::string& origin) {
    auto product = std::make_shared<Fruit>(name, price, quantity, origin);
    inventory.addProduct(product);
}

void Store::addProductToInventory(const std::string& name, double price, int quantity, int warrantyPeriod) {
    auto product = std::make_shared<Electronic>(name, price, quantity, warrantyPeriod);
    inventory.addProduct(product);
}

void Store::addProductToInventory(const std::string& name, double price, int quantity, const std::string& size, const std::string& material) {
    auto product = std::make_shared<Clothing>(name, price, quantity, size, material);
    inventory.addProduct(product);
}

void Store::removeProductFromInventory(const std::string& productName) {
    inventory.removeProduct(productName);
}

void Store::listProducts() const {
    const auto& products = inventory.getProducts();
    for (const auto& product : products) {
        product->printDetails();
    }
}

const Inventory& Store::getInventory() const {
    return inventory;
}
