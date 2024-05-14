// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

#define END() \
    std::cout << std::endl << std::endl; \
    return (0);

int main(){
    std::string str; // defines a variable "str" of type std::string (from the std lib)

    std::cout << "What's your name?" << std::endl << std::flush; // makes SURE that "What's your name" is sent to the console
    // BEFORE it waits for the user's input

    std::cin >> str; // sets str equal to std::cin (console input)
    // note: cin only supports single word inputs (spaces would mark the end of a string)

    std::cout << "Your name is " << str << "." << std::endl;
    // std::cout << str; // prints out the contents of str to the console

    END();
}
