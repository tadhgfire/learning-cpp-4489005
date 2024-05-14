// Learning C++ 
// Exercise 02_03
// Using Variables, by Eduardo Corpeño 

#include <iostream>

int a, b = 5; // global vars
// this line ONLY defines b. a is still uninitialized
// the allocation for a and b are automatic, so we call them automatic vars
// alloc.d in stack memory


int main(){
    bool my_flag; 
    a = 7;
    my_flag = false;
    my_flag = 7;
    my_flag = false;
    // cppreference.com says that vars must
    // start with non_number
    // can't match with other keywords like "int"
    
    /**/

    /*
    oeuoeu
    oeuoeu
     */



    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "flag = " << my_flag << std::endl; // 1 = true

    std::cout << "b - a = " << b - a << std::endl;
    std::cout << "a + b = " << a + b << std::endl;

    unsigned int positive;

    positive = b - a;

    std::cout << "b - a (unsigned) = " << positive << std::endl;

    
    std::cout << std::endl << std::endl;
    return (0);
}