#include <iostream>

using namespace std;

int main() 
{
  int box[6]={5,4,3,2,1,0};
  int jobs[4]={42,88,99,51};
  int* jam = nullptr;
  int* cab = jobs;
  jam = cab;

    cout << box[3] << " " << *box << " " << jam[2] << " " << *cab << endl;

    jam = &box[1];
    cab++;

    cout << *(jam+2) << " " << jam[3] << " " <<*box << " " << box[1]<<endl;

}