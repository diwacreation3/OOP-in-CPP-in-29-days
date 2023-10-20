// C++ program to demonstrate
// the working of static data member

#include <iostream>

using namespace std;

class A{
    public:
    A()
    {
        cout << "A Constructor called" <<endl;
    }
};

class B{
    static A a;

    public:
    B()
    {
        cout << "B constructor called " << endl;

    }
};

//main code 
int main()
{
    B b;
    return 0;
}