// Learning C++ 
// Exercise 02_12
// Enumerations, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

// enum cow_purpose {dairy, meat, hide, pet};
// enum grocery_section {canned, frozen, meat, laundry, dairy, bakery}; // will create err...
// we can fix these w enum classes

enum class cow_purpose {dairy, meat, hide, pet};
enum class grocery_section {canned, frozen, meat, laundry, dairy, bakery}; // will create err...

int main(){
    int meat = 8; // compiler didn't care that this duplicates a enum.
    // expected behavior: meat is local var, has tighter scope than global enum
    // int a;

    // a = meat; // makes a = 8
    // a = cow_purpose::meat; // makes a = 1
    // a = (int) cow_purpose::meat; // sort of works
    cow_purpose a = cow_purpose::meat; // but this is better

    std::cout << "a = " << (int)a << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
