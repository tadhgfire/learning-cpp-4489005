// Learning C++ 
// Exercise 03_02
// Classes, by Eduardo Corpeño 

#include <iostream>
#include <string>

enum class cow_purpose {dairy, meat, hide, pet};

class cow{
public:
    // constructor
    cow(std::string iname, int iage, cow_purpose ipurpose) {
        name = iname;
        age = iage;
        purpose = ipurpose;
    }

    // getters
    std::string get_name() const{ // add "const" because this function will NOT edit any attribute in the class
                                  // const correctness...
        return name;
    }
    int getAge() const{
        return age;
    }
    cow_purpose get_purpose() const{
        return purpose;
    }

    void set_age(int new_age) {
        age = new_age;
    }




private:
    std::string name;
    int age;
    cow_purpose purpose;


};

int main(){
    cow my_cow = cow("Betsy", 5, cow_purpose::dairy);
    // my_cow.setAge(5);
    // my_cow.name = "Betsy";
    // my_cow.purpose = cow_purpose::dairy;
    my_cow.set_age(8);
    std::cout << my_cow.get_name() << " is a type-" << (int)my_cow.get_purpose() << " cow." << std::endl;
    std::cout << my_cow.get_name() << " is " << my_cow.getAge() << " years old." << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
