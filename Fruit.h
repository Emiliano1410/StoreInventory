#ifndef FRUIT_H
#define FRUIT_H

#include "Product.h"

class Fruit : public Product {
private:
    // Origen de la fruta
    std::string origin;

public:
    Fruit(const std::string& name, double price, int quantity, const std::string& origin);

    // Métodos getter y setter para el origen
    std::string getOrigin() const;
    void setOrigin(const std::string& origin);

    // Método sobrescrito para imprimir los detalles de la fruta.
    void printDetails() const override;
};

#endif
