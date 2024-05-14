// Learning C++ 
// Exercise 02_06
// Preprocessor directives, by Eduardo Corpeño 

// directives always begin with #


#include <iostream>
// iostream does not have path or extension
// and is enclosed by <>
// so the preprocessor will look for iostream in a predefined place

#include <string>

#include <cstdint> // this contains c code made available for c++

// be careful with macros
// they legit do find and replace

#define CAPACITY 5000 // the all-caps name is just a convention
#define DEBUG // we don't actually have to give it a value for it to be "defined"

int main(){
    int32_t large = CAPACITY;
    uint8_t small = 37;

#ifdef DEBUG
    std::cout << "[About to perf addition]" << std::endl;
#endif


    // large = large + small;
    // or...
    large += small;

    std::cout << "large = " << large << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
