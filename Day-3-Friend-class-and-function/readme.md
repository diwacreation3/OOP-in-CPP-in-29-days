# Friend class and Function in C++

A friend class can access private and protected members of other classes in which it is declared as friend. it is sometime useful to allow a particular class to access private and protected members of other classes. For example, a LinkedLists class may allowed to access private members of Node

We can declare a friend class in C++ by using the friend keyword.

Syntax:
```c++
friend class class_name; //declared in the base class 
```
Here is how is looks

!["friend class"](/images/friend-class.png)

Example
```c++
// C++ program to demonstrate the 
// functioning of a friend class

#include <iostream>

using namespace std;

class Snack{

    private:
        int private_order;

    protected:
        int protected_order;

    public:
        Snack(){
            private_order = 3;
            protected_order = 6;

        } 
        //friend class declaration
        friend class food;   

};

// her class food is eclared as a friend class Snack.
// therefore food is a firend class of Snack. Class food can 
// access the private members of class snack

class food{
    public:
        void display( Snack& order)
        {
            cout  << "The value of Private Variable = " << order.private_order << endl ;
            cout  << "The vlaue of protected variable = " << order.protected_order << endl ;
        }
};

// main code 
int main(){
    Snack snack;
    food momo;
    momo.display(snack);
    return 0;
}
```
output

The value of Private Variable = 3 \
The vlaue of protected variable = 6


# Friend Function
Like a friend class, a friend function can be garnted special access to private and protected members of a class in C++. They are the non-member functions that can access and manipulate the private and protected members of the class for they are declared as friends.

A friend function can be:

1. A global function
1. A member function of another class 

!["friend function"](/images/friend-function.png)


Syntax:
```c++

friend return_type function_name(arguments); // for global function

//Or

friend return_type class_name::function_name(arguments); // for a member function of another class
```

### 1. Global Function as Friend Function 
We can declare any global function as a friend function. The Following example demonstrate how to declare a global function as a firend function in C++:

Example:

```C++
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




```
