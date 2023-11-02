//C++ program to demonstrate 
// function overloading 

#include <iostream>
using namespace std;

void add(int a, int b)
{
    cout << "Sum = " << (a +b);
}

void add(double a, double b)
{
    cout << endl << "Sum = " << (a+b);
}

//main code 
int main()
{

add(6,3);
add(3.3,2.7);

return 0;
}