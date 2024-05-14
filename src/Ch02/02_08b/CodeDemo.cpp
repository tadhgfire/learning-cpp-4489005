// Learning C++ 
// Exercise 02_08
// Arrays, by Eduardo Corpeño 

#include <iostream>


// #define AGE_LENGTH 4

int main(){

    const size_t AGE_LENGTH = 4; // size_t is more appropriate than an int

    int age[AGE_LENGTH]; // 0-indexed arrays (like normal)
    float temperature[] = {31.5, 32.7, 38.9}; // note: auto does NOT work for arrays. 

    age[0] = 25;
    age[1] = 20;
    age[2] = 19;
    age[3] = 19;

    std::cout << "Age[0] = " << age[0] << std::endl;
    std::cout << "Age[1] = " << age[1] << std::endl;
    std::cout << "Age[2] = " << age[2] << std::endl;
    std::cout << "Age[3] = " << age[3] << std::endl;

   
    std::cout << std::endl << std::endl;
    return (0);
}
