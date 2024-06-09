#include <iostream>
#include <vector>
#include <memory>
#include <string>
#include "Store.h"
#include "Electronic.h"
#include "Clothing.h"
#include "Fruit.h"

// Creamos el menú del inventario de la tienda
void showMenu() {
    std::cout << "1. Add Product\n";
    std::cout << "2. Remove Product\n";
    std::cout << "3. List Products\n";
    std::cout << "4. Save to File\n";
    std::cout << "5. Load from File\n";
    std::cout << "6. Exit\n";
    std::cout << "Enter your choice (1-6): ";
}

// Agregar productos al inventario
void addProduct(Store& store) {
    int type;
    std::string name, origin, size, material;
    double price;
    int quantity, warrantyPeriod;

    std::cout << "Enter product type (1: Fruit, 2: Electronic, 3: Clothing): ";
    std::cin >> type;
    std::cout << "Enter product name: ";
    std::cin >> name;
    std::cout << "Enter product price: ";
    std::cin >> price;
    std::cout << "Enter product quantity: ";
    std::cin >> quantity;

    if (type == 1) {
        std::cout << "Enter fruit origin: ";
        std::cin >> origin;
        store.addProductToInventory(name, price, quantity, origin);
    } else if (type == 2) {
        std::cout << "Enter warranty period (months): ";
        std::cin >> warrantyPeriod;
        store.addProductToInventory(name, price, quantity, warrantyPeriod);
    } else if (type == 3) {
        std::cout << "Enter clothing size: ";
        std::cin >> size;
        std::cout << "Enter clothing material: ";
        std::cin >> material;
        store.addProductToInventory(name, price, quantity, size, material);
    } else {
        std::cout << "Invalid product type!\n";
    }
}

// Eliminar productos del inventario
void removeProduct(Store& store) {
    std::string name;
    std::cout << "Enter product name to remove: ";
    std::cin >> name;
    store.removeProductFromInventory(name);
}

// Guardar los datos en un archivo de texto
void saveToFile(const Store& store) {
    std::string filename;
    std::cout << "Enter filename to save to: ";
    std::cin >> filename;
    store.saveToFile(filename);
}

// Cargar los datos de un archivo de texto
void loadFromFile(Store& store) {
    std::string filename;
    std::cout << "Enter filename to load from: ";
    std::cin >> filename;
    store.loadFromFile(filename);
}

int main() {
    Store store;
    int choice;

    do {
        showMenu();
        std::cin >> choice;

        switch (choice) {
            case 1:
                addProduct(store);
                break;
            case 2:
                removeProduct(store);
                break;
            case 3:
                std::cout << store.listProducts() << std::endl;
                break;
            case 4:
                saveToFile(store);
                break;
            case 5:
                loadFromFile(store);
                break;
            case 6:
                std::cout << "Exiting...\n";
                break;
            default:
                std::cout << "Invalid choice! Please try again.\n";
                break;
        }
    } while (choice != 6);

    return 0;
}
