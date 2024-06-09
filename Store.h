#ifndef STORE_H
#define STORE_H

#include "Product.h"
#include <vector>
#include <memory>
#include <string>

class Store {
private:
    // Colección de productos
    std::vector<std::shared_ptr<Product>> products;

public:
    Store();
    
    // Sobrecargar addProductToInventory para diferentes tipos de productos
    void addProductToInventory(const std::shared_ptr<Product>& product);
    void addProductToInventory(const std::string& name, double price, int quantity, const std::string& origin);
    void addProductToInventory(const std::string& name, double price, int quantity, int warrantyPeriod);
    void addProductToInventory(const std::string& name, double price, int quantity, const std::string& size, const std::string& material);

    // Elimina un producto del inventario de la tienda por su nombre.
    void removeProductFromInventory(const std::string& productName);

    // Lista todos los productos en el inventario.
    std::string listProducts() const;

    // Guardar y cargar datos de un archivo de texto
    void saveToFile(const std::string& filename) const;
    void loadFromFile(const std::string& filename);
};

#endif
