#include <iostream>
#include <vector>
#include <memory>
#include "Store.h"
#include "Electronic.h"
#include "Clothing.h"
#include "Fruit.h"

int main() {
    // Crear instancia de la tienda
    Store store;

    // Agregar productos al inventario de la tienda
    store.addProductToInventory("Apple", 0.50, 100, "USA");
    store.addProductToInventory("Banana", 0.30, 50, "Ecuador");
    store.addProductToInventory("Watermelon", 3.00, 20, "Mexico");
    store.addProductToInventory("Pineapple", 3.50, 15, "Hawaii");
    store.addProductToInventory("Dragonfruit", 8.00, 5, "Vietnam");
    store.addProductToInventory("Laptop", 1200.0, 10, 24);
    store.addProductToInventory("Smartphone", 800.0, 20, 12);
    store.addProductToInventory("T-Shirt", 25.0, 100, "L", "Cotton");
    store.addProductToInventory("Jeans", 50.0, 50, "M", "Denim");
    store.addProductToInventory("Jacket", 100.0, 30, "XL", "Leather");

    // Quitar productos al inventario de la tienda
    store.removeProductFromInventory("Jacket");

    // Listar productos en el inventario usando polimorfismo
    store.listProducts();

    return 0;
}
