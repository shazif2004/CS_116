#include <iostream>

int main()
{
    // pointers = variable that stores a memory address of another variables
    // sometimes its easier to work with an address
    // & address-of operator
    // * dereference operator

    std::string name = "Bro";
    int age = 21;
    
    

    std::string *pName = &name; //Memory address
    int *pAge = &age;


    std::cout << pName << '\n'; 
    std::cout << *pName << '\n'; //Accessing the value 
    std::cout << age;

    return 0;
}