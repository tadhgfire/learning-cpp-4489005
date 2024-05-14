// Learning C++ 
// Exercise 03_01
// Structures, by Eduardo Corpeño 

#include <iostream>
#include <string>

#define PRINT(x) std::cout << x << std::endl;

enum class cow_purpose {dairy, meat, hide, pet};

struct cow {
    std::string name;
    int age;
    cow_purpose purpose;

}; // DOES req. closing ;

int main(){
    cow my_cow;
    my_cow.age = 5;
    my_cow.name = "Betsy";
    my_cow.purpose = cow_purpose::dairy; // assigns 0 technically...

    PRINT(my_cow.name << " is a type-" << (int) my_cow.purpose << " cow.");
    PRINT(my_cow.name << " is " << my_cow.age << " years old.");
    
    
    std::cout << std::endl << std::endl;
    return (0);
}
