// C++ program to show unary 
// operator overloading 

#include <iostream>
using namespace std;

class Distance{
    public:
    int feet, inch;

    //Consructor to initilize 
    // the objects value

    Distance(int f, int i)
    {
        this->feet = f;
        this->inch = i;
    }

    //Overloading ( - ) operator to 
    // perform decrement operation 
    // of Distnace Object 

    void operator-()
    {
        feet--;
        inch--;
        cout << "\n feet and inches (Decrement ): " << feet << " " << inch;
    }
};

//main code 
int main()
{
    Distance d1(8,9);

    //use (-) unary operator by
    // single operand 
    -d1;
    return 0;
}