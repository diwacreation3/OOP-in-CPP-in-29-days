// C++ program for hierarchical Inheritance

#include <iostream>
using namespace std;

class A //super class 
{
    public: 
    void show_A()
    {
        cout << "i am superclass A" << endl;

    }

};

class B : public A  //subclass B
{
    public:
    void show_B()
    {
        cout << "i am subclass B" << endl;
    }
};

class C : public A //subclass C
{
    public:
    void show_C()
    {
        cout << "i am subclass c" << endl;
    }
};

int main(){
    B b; // b is object of class B
    cout << "calling from B: " << endl;
    b.show_B();
    b.show_A();

    C c; // c is object of class C
    cout << "calling from c: " << endl;
    c.show_C();
    c.show_A();

    return 0;
}