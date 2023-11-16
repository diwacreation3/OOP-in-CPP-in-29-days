// C++ program to illustrate 
// concept of virtual functions 

#include <iostream>
using namespace std;

class base{
    public:
        virtual void print() {cout << "print base class \n";}

        void show() {cout << "Show base class \n";}
};

class derived: public base {
    public:
    void print() {cout << "print derived class \n";}
    void show() { cout << "Shoe derived class \n";}

};

int main()
{
    base* Base;
    derived Derived;

    Base = &Derived;

    //virtual function at runtime
    Base->print();

    //non-virtual function at compile time 
    Base->show();
    cin.get();

    return 0;
}