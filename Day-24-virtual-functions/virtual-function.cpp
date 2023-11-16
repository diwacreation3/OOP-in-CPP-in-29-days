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
    void func1(){cout << " derived-1\n";}
    void func2(){cout << "derived-2\n";}
    void func3(int x) {cout << "derived-4\n";}

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