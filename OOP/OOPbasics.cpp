#include <iostream>

class Car
{
    public:
        std::string make;
        std::string model;
        int year;
        std::string color;

        void accelerate(){
        std::cout<<"You step on the gas!\n";
        }

        void brake(){
        std::cout<< "You step on the brakes\n";
        }
};

int main()
{
    Car cars1;

    cars1.make = "Hyundai";
    cars1.model = "Senta Fe";
    cars1.year = 2023;
    cars1.color = "Black";

    std::cout<<cars1.make<<'\n';
    std::cout<<cars1.model<<'\n';
    std::cout<<cars1.year<<'\n';
    std::cout<<cars1.color<<'\n';

    cars1.accelerate();
    cars1.brake();


    return 0;
}