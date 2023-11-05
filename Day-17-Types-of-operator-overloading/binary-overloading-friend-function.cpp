// C++ program to show binary 
// operator overloading using 
// a friend function 

#include <iostream>
using namespace std;

class Distance{
    public:
    int feet, inch;

    Distance()
    {
        this->feet = 0;
        this->inch = 0;
    }
    Distance(int f, int i)
    {
        this->inch = i;
        this->feet =f;
    }

    //Declaring friend function
    // using firend keyword 
    friend Distance operator+ (Distance& d1 , Distance& d2)

    // implementng friend function 
    // with two parameter 
    // call by reference 
    {
        Distance d3;

        d3.feet = d1.feet + d2.feet;
        d3.inch = d1.inch + d2.inch;

        //return the resulting object 
        return d3;

    }

};

// main code 
int main()
{
    Distance d1(8,9);
    Distance d2(10,2);
    Distance d3;

    //use overloaded operator
    d3 = d1+ d2;
    cout << "\nTotal Feet & Inches: " <<  
             d3.feet << "'" << d3.inch; 
    return 0;
}