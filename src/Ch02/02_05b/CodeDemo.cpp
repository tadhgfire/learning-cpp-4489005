// Learning C++ 
// Exercise 02_05
// Type inference with auto, by Eduardo Corpeño 

#include <iostream>
#include <typeinfo>

int main(){

    // auto figures out the type
    // but you need to instantiate the variable AT declaration, not later
    auto a = 8;
    auto b = 12345678901;
    auto c = 3.14f;
    auto d = 3.14;
    auto e = true;
    auto f = 'd';
    auto g = "C++ rocks";

    std::cout << "The type of a is " << typeid(a).name() << std::endl; // i for integer
    std::cout << "The type of b is " << typeid(b).name() << std::endl; // l for long
    std::cout << "The type of c is " << typeid(c).name() << std::endl; // f for float
    std::cout << "The type of d is " << typeid(d).name() << std::endl; // d for double
    std::cout << "The type of e is " << typeid(e).name() << std::endl; // b for bool
    std::cout << "The type of f is " << typeid(f).name() << std::endl; // c for char
    std::cout << "The type of g is " << typeid(g).name() << std::endl; // PKc for "pointer to const char" (string)

    // note: typeid is implementation-specific:
    // ex. if not compiled on codespaces, typeid().name() might return descriptive strings such as "integer" or "long"
    
    std::cout << std::endl << std::endl;
    return (0);
}
