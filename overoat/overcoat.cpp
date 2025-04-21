#include "overcoat.h"

Overcoat::Overcoat() : price(0.0) {
    strcpy(type, "Unknopwn");
}

Overcoat::Overcoat(const char* t, double p) : price(p) {
    strncpy(type, t, sizeof(type));
    type[sizeof(type) - 1] = '\0';
}

bool Overcoat::operator==(const Overcoat& other) const {
    return strcmp(type, other.type) == 0;
}
Overcoat& Overcoat::operator=(const Overcoat& other) {
    if (this != &other) {
        strncpy(type, other.type, sizeof(type));
        type[sizeof(type) - 1] = '\0';
        price = other.price;
    }
    return *this;
}

bool Overcoat::operator>(const Overcoat& other) const {
    if (*this == other) {
        return price > other.price;
    }
    return false;
}

void Overcoat::output() const {
    std::cout << "Type of clothes: " << type << "\n";
    std::cout << "Price($): " << price << "\n\n";
}
