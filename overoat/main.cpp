#include <iostream>
#include "overcoat.h"

int main() {
    Overcoat o1("Coat", 1200);
    Overcoat o2("Jacket", 100043);
    Overcoat o3("Coat", 1500);

    std::cout << "Overcoat 1:\n";
    o1.output();

    std::cout << "Overcoat 2:\n";
    o2.output();

    std::cout << "Overcoat 3:\n";
    o3.output();

    if (o1 == o3)
        std::cout << "o1 and o3 are same type.\n";
    else
        std::cout << "o1 and o3 are different types.\n";

    if (o3 > o1)
        std::cout << "o3 is more expensive than o1.\n";

    std::cout << "\nAssigning o2 = o1\n";
    o2 = o1;
    o2.output();
}
