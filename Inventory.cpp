#include "Inventory.h"
#include <algorithm>

void Inventory::addProduct(const std::shared_ptr<Product>& product) {
    products.push_back(product);
}

void Inventory::removeProduct(const std::string& productName) {
    products.erase(std::remove_if(products.begin(), products.end(),
                                  [&productName](const std::shared_ptr<Product>& product) {
                                      return product->getName() == productName;
                                  }), products.end());
}

const std::vector<std::shared_ptr<Product>>& Inventory::getProducts() const {
    return products;
}
