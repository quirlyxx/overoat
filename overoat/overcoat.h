#pragma once
#include <iostream>

class Overcoat {
private:
    char type[50];
    double price;

public:
    Overcoat();
    Overcoat(const char* t, double p);
    bool operator==(const Overcoat& other) const;
    Overcoat& operator=(const Overcoat& other);

    bool operator>(const Overcoat& other) const;

    void output() const;
};
