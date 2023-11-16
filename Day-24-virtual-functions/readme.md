# Virtual Functions

A virtual function(also known as virtual methods) is a member function that is declared within a base clas an is re-defined (overridden) by a derived class. When you refer to a derived class object using a pointer or a reference to the base class, you can call a virtual function for that object and execute the derived class's version of the method.

- Virtual function ensure that the correct function is called for an object regardles of the type of referennce or(pointer) used for the function call.
- They are mainly used to acheive Runtime polymorphism
- Functions are declared with virtual keyword in a base class.
- The resolving of a function call is done at runtime.

## Rules for Virtual Functions
The rules for the virtual functions in C++ are as follows :

1. Virtual function cannot be static
1. A virtual function can be friend function of another class.
1. Virtual Functions should be accessed using a pointer or reference of a base type to acheive runtime polymorphism
1. The prototype of virtaul functions should be the same in the base as well as the derived class.
1. They are always defined in the base class and overridden in a derived class. it is nit mandatory for the derived class to override (or re-define the virtual function) in that case the base class version of the function is used.
1. A class may have a virtual destructor but it cannot have a virtual constructor.

### Compile time (early binding) Vs Runtime (late binding ) behaviour of virtaul functions 

Consdier the following simple program showing the runtime behaviour of virtual functions.

```c++

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
```
### Working of Virtual Functions (concept of VTABLE and VPTR)

As descussed here, if a class contains a virtual functions then the compiler itself does two things.

1. If an object of that class is created then a virtual pointer (VPTR) is inserted as a data member of the class to point to the VTABLE of that class. For each new object created, a new virtual pointer is inserted as a data member of that class

1. Irrespective of whether the object is created or not, the class contains as a member a static array of function pointers called VTABLE. Cells of this table store the address of each virtual function contained in that class.

Consider the example Below:

!["vtable"](/images/Vtable.png)

```c++
// C++ program to illustrate
// working of Virtual Functions

#include <iostream>
using namespace std;

class base{
    public:
    void func1(){cout << "base-1 \n";}
    virtual void func2() {cout << "base-2 \n";}
    virtual void func3(){cout << "base-3\n";  }
    virtual void func4() {cout <<"base-4\n";}
};

class derived: public base{
    public:
    void func_1(){cout << " derived-1\n";}
    void func_2(){cout << "derived-2\n";}
    void func_3(int x) {cout << "derived-4\n";}

};

int main()
{
    base* Base;
    derived Derived;
    Base = &Derived;

    //Early binding because func1 is no-virtual in base 
    Base->func1();

    //late binding(RTP)
    Base->func2();

    //late binding(RTP)
    Base->func3();

    //Late binding (RTP)
    Base->func4();

    //early binding but this function call is 
    // illegal (produces error) because pointer 
    // is of base type and function is of derived class
    // p->func_1(5);

    return 0;

}
```

### Limitations of Virtual Functions
- Slower
The function call takes slightly longer due to the virtual mechanism and makes it more difficult for the compiler to optimize because it does not know exactly which function is going to be called at compile time.

- Difficult to Debug
In a complex system, virtual functions can make it a little more difficult to figure out where a function is being called from.