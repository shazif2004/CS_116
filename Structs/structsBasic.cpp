#include <iostream>
#include <string>

using namespace std;

struct student{
    string name;
    double gpa;
    bool enrolled;
};

int main()
{
    student student1;
    student1.name = "Shazif";
    student1.gpa = 3.6;
    student1.enrolled = true;

    student student2;
    student2.name = "Fatima";
    student2.gpa = 2.1;
    student2.enrolled = true;

    cout << student1.name <<'\n';
    cout << student1.gpa <<'\n';
    cout << student1.enrolled << '\n';
    cout<<'\n';
    cout << student2.name <<'\n';
    cout << student2.gpa <<'\n';
    cout << student2.enrolled << '\n';

    return 0;
}