#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

class Product {
protected:
    // Nombre del producto
    std::string name;
    // Precio del producto
    double price;
    // Cantidad del producto en el inventario
    int quantity;

public:
    Product(const std::string& name, double price, int quantity);
    // Destructor virtual
    virtual ~Product() {}

    // Métodos getter y setter para los atributos del producto
    std::string getName() const;
    void setName(const std::string& name);

    double getPrice() const;
    void setPrice(double price);

    int getQuantity() const;
    void setQuantity(int quantity);
    
    // Método virtual para imprimir los detalles del producto
    virtual void printDetails() const = 0;
};

#endif
