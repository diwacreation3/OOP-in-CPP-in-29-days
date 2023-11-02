//C++ program to illustrate 
// constructor overloading 


#include <iostream>
using namespace std;

class construct{
    public:
    float area;

    //Constructor with no parameter 
    construct()
    {
        area = 0;
    }

    // Constructor with two parameter
        construct(int a, int b)
        {
            area = a * b;
        }

        void display()
        {
            cout << area << endl;
        }
};

int main()
{

// Constructor Overloading
// qith two different constrictors
// of class name

construct o;
construct o2(3,3);

o.display();
o2.display();

return 1;
}