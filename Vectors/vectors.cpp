#include <iostream>
#include <vector>

int main()
{
    std::vector<int>myVector; // Declare a vector of integer
    std::vector<int>myVector3(4,100); // Vector 4 integer, each initialized to 100.
    std::vector<int>myVector4{10,20,30,40}; //Creates a vector and initializes it with a list of values.
    std::vector<int>myVector5=myVector4; //copy of v4
    std::vector<int>myVector1; // Creates an empty vector.
    std::vector<int>myVector2(5); //Vector of 5 integers.

    for (int value : myVector2)
    {
        std::cout<<value<< ' ';
    }


    return 0;
}