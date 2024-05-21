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

    // Crear productos de frutas
    auto apple = std::make_shared<Fruit>("Apple", 0.50, 100, "USA");
    auto banana = std::make_shared<Fruit>("Banana", 0.30, 50, "Ecuador");
    auto watermelon = std::make_shared<Fruit>("Watermelon", 3.00, 20, "Mexico");
    auto pineapple = std::make_shared<Fruit>("Pineapple", 3.50, 15, "Hawaii");
    auto dragonfruit = std::make_shared<Fruit>("Dragonfruit", 8.00, 5, "Vietnam");

    // Crear productos electrónicos
    auto laptop = std::make_shared<Electronic>("Laptop", 1200.0, 10, 24);
    auto smartphone = std::make_shared<Electronic>("Smartphone", 800.0, 20, 12);

    // Crear productos de ropa
    auto tshirt = std::make_shared<Clothing>("T-Shirt", 25.0, 100, "L", "Cotton");
    auto jeans = std::make_shared<Clothing>("Jeans", 50.0, 50, "M", "Denim");
    auto jacket = std::make_shared<Clothing>("Jacket", 100.0, 30, "XL", "Leather");

    // Agregar productos al inventario de la tienda
    store.addProductToInventory(apple);
    store.addProductToInventory(banana);
    store.addProductToInventory(watermelon);
    store.addProductToInventory(pineapple);
    store.addProductToInventory(dragonfruit);
    store.addProductToInventory(laptop);
    store.addProductToInventory(smartphone);
    store.addProductToInventory(tshirt);
    store.addProductToInventory(jeans);
    store.addProductToInventory(jacket);

    // Quitar productos al inventario de la tienda
    store.removeProductFromInventory("Jacket");

    // Listar productos en el inventario usando polimorfismo
    store.listProducts();

    return 0;
}
