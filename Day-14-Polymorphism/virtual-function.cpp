//C++ program to demonstrate
// virtual function

#include <iostream>
using namespace std;

//declaring base class
class stupa{
    public:
    //virtual function
    virtual void display()
    {
        cout << "Called virtual base class function " << endl;
    }

    void print()
    {
        cout << "Called stupa base print function " << endl;

    }
};

// declaring a child class
class stupa_child : public stupa{
    public:
    void display()
    {
        cout << "called stupa_child Display function"<< endl;

    }

    void print()
    {
        cout << "Called stupa_child print function"<< endl;

    }
   
};

//main code
int main()
{
    // create a reference of clas stupa
    stupa* base;

    stupa_child child;
    base = &child;

    //this will call the virtual function
    base->stupa::display();

    //this will call the non virtual function 
    base->print();

    return 0;
}