#ifndef ELECTRONIC_H
#define ELECTRONIC_H

#include "Product.h"

class Electronic : public Product {
private:
    // Periodo de garantía del producto en meses
    int warrantyPeriod;

public:
    Electronic(const std::string& name, double price, int quantity, int warrantyPeriod);

    // Métodos getter y setter para el periodo de garantía
    int getWarrantyPeriod() const;
    void setWarrantyPeriod(int warrantyPeriod);

    // Método sobrescrito para imprimir los detalles del producto electrónico.
    std::string getDetails() const override;
};

#endif
