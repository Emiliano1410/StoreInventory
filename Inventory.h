#ifndef INVENTORY_H
#define INVENTORY_H

#include "Product.h"
#include <vector>
#include <memory>

class Inventory {
private:
    // Coleccion de productos
    std::vector<std::shared_ptr<Product>> products;

public:
    // Agrega un producto al inventario
    void addProduct(const std::shared_ptr<Product>& product);
    // Elimina un producto del inventario por su nombre
    void removeProduct(const std::string& productName);
    // Obtiene la lista de productos del inventario
    const std::vector<std::shared_ptr<Product>>& getProducts() const;
};

#endif
