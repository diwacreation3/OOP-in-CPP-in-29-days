// C++ program to create a global function as a 
// firend function of some class 

#include <iostream>

using namespace std;

class base; // forward defination needed
// another class in which function is declared 

class anotherClass{
    public:
        void memberFunction(base& obj);
};

//  base class for which friend is declared 
class base{
    private:
        int private_variable;
    protected:
        int protected_variable;

    public:
        base()
        {
            private_variable = 9;
            protected_variable = 6;
        }        
        //friend function declaration
        friend void anotherClass::memberFunction(base&);
};

// friend function defination
void anotherClass::memberFunction(base& obj)
{
    cout  << "Private Variable: " << obj.private_variable << endl ;
    cout  << "Protected variable: " << obj.protected_variable << endl ;
}

//driver code / main

int main()
{
    base object;
    anotherClass object1;
    object1.memberFunction(object);

    return 0;
}


