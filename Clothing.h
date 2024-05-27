#ifndef CLOTHING_H
#define CLOTHING_H

#include "Product.h"

class Clothing : public Product {
private:
    // Talla de la ropa
    std::string size;
    // Material de la ropa
    std::string material;

public:
    Clothing(const std::string& name, double price, int quantity, const std::string& size, const std::string& material);

    // Métodos getter y setter para la talla y el material
    std::string getSize() const;
    void setSize(const std::string& size);
    std::string getMaterial() const;
    void setMaterial(const std::string& material);

    // Método sobrescrito para imprimir los detalles de la prenda de ropa.
    std::string getDetails() const override;
};

#endif
