# C++ static Data Members
Static data member are class member that are declared using the static keywords. A static member has certain special characteristics which are as follows:

- only one copy of that member is created for the entire class and is shared by all the object of that class, no matter how many objects are created 
- It is initilized before any object of this class iacreated even before the main starts
- It is visible only within the class, but its lifetime is the entire program

Below is the c++ program to demonstrate the working of ststic data members:

```c++
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
```