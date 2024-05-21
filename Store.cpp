#include "Store.h"
#include <iostream>

Store::Store() {}

void Store::addProductToInventory(const std::shared_ptr<Product>& product) {
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
