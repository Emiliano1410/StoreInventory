#ifndef STORE_H
#define STORE_H

#include "Inventory.h"
#include "Product.h"
#include <memory>

class Store {
private:
    // Inventario de la tienda
    Inventory inventory;

public:
    Store();
    // Agrega un producto al inventario de la tienda
    void addProductToInventory(const std::shared_ptr<Product>& product);
    // Elimina un producto del inventario de la tienda por su nombre.
    void removeProductFromInventory(const std::string& productName);
    // Lista todos los productos en el inventario.
    void listProducts() const;
    // Devuelve una referencia constante al inventario.
    const Inventory& getInventory() const;
};

#endif
