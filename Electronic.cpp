#include "Electronic.h"
#include <sstream>
#include <iomanip>

Electronic::Electronic(const std::string& name, double price, int quantity, int warrantyPeriod)
    : Product(name, price, quantity), warrantyPeriod(warrantyPeriod) {}

int Electronic::getWarrantyPeriod() const {
    return warrantyPeriod;
}

void Electronic::setWarrantyPeriod(int warrantyPeriod) {
    this->warrantyPeriod = warrantyPeriod;
}

std::string Electronic::getDetails() const {
    std::ostringstream oss;
    oss << std::fixed << std::setprecision(2);
    oss << "Electronic: " << name << ", Price: $" << price << ", Quantity: " << quantity
        << ", Warranty Period: " << warrantyPeriod << " months";
    return oss.str();
}
