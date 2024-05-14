// Learning C++ 
// Exercise 02_10
// Type Casting, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    float flt;
    int32_t sgn;
    uint32_t unsgn;

    flt = -7.66;
    sgn = flt; // this will be converted from float to int (implicit)
    unsgn = sgn; // 32 bit version of the 2's complement of 7...

    std::cout << "flt    = " << flt << std::endl;
    std::cout << "int32  = " << sgn << std::endl;
    std::cout << "uint32 = " << (int32_t)unsgn << std::endl; // unsgn = 4332434239, (int32_t)unsgn = -7
    
    std::cout << std::endl << std::endl;
    return (0);
}
