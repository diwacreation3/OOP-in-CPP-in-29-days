# C++ Polymorphism
The word ploymorphism meand having many forms. In simple words, we can define ploymorphism as the ability of a message to be displayed in more than one form.  A real-life example of polymorphism is a person who at the same time can have different characteristics. A man at the same time is a father, a husband, and an employee. So the same person exhibits different behavior in different situations. This is called polymorphism. Polymorphism is considered one of the important features of Object-Oriented Programming.

### Types of Polymorphism 
 - Compile time Polymorphism
 - Runtime polymorphism 

 !["Ploymorphism"](/images/polymorphism.png)

 ## 1. Compile-Time Ploymorphism

 This type of polymorphism ie acheived by function overloading or operator overloading 

 #### A. Function Overloading 

 When there are multiple functions with the same name but different parameters, then the functions are said to be overloaded, hence this is known as Function Overloading. Functions can be overloaded by changing the number of arguments or/and changing the type of arguments. In simple terms, it is a feature of object-oriented programming providing many functions that have the same name but distinct parameters when numerous tasks are listed under one function name. There are certain Rules of Function Overloading that should be followed while overloading a function.

Below is the C++ program to show function overloading or compile-time polymorphism:

```c++
// C++ program to demonstrate
// function overloading or
 // compile time polymorphism

 #include <bits/stdc++.h>

 using namespace std;

 class stupa{
        public:
        //Function with 1 int parameter
        void func(int x)
        {
            cout << "value of x is " << x << endl;

        }

        // Function with same name but
        // 1 double parameter 
        void func (double x)
        {
            cout << "Value of x is " << x << endl;

        }

        //Function with same name 
        // 2 int parameters
        void func(int x, int y)
        {
            cout << "value of x and y is " << x << ", " << y << endl;

        }

 };

// main code 
int main()
{
    stupa obj;

    // Function being called depends 
    // on the parameters passed 
    // func() is called with int value
    obj.func(3);

    //func() is called with double value
    obj.func(9.369);

    //func() is called with 2 int values 
    obj.func(33.93);

    return 0;
}
```

#### B. Operator Overloading 
C++ has the ability to provide the operators with a special meaning for a data type, this ability is known as operator overloading. For example, we can make use of the addition operator (+) for string class to concatenate two strings. We know that the task of this operator is to add two operands. So a single operator ‘+’, when placed between integer operands, adds them and when placed between string operands, concatenates them. 

Below is the C++ program to demonstrate operator overloading:

```c++
// C++ program to demonstrate
// operaroe Overloading or
 // Compile-time polymorphism 

 #include <iostream>

 using namespace std;

class Complex{
    private:
    int real, imge;

    public:
    Complex(int r =0, int i = 0)
    {
        real =r;
        imge = i;
    }

    //This automatically called 
    // when + is used with between
    // to complex objects

    Complex operator+(Complex const& obj)
    {
        Complex res;
        res.real = real + obj.real;
        res.imge - imge + obj.imge;
        return res;
    }
    void print() {cout << real << "+ i" << imge << endl;}
} ;

//main code

int main()
{
    Complex c1(10,5), c2(3,6);

    // An example call to "operator+ "
    Complex c3 = c1+c2;
    c3.print();

    return 0;
}
```

#### Explanation
 In the above example, the operator ‘+’ is overloaded. Usually, this operator is used to add two numbers (integers or floating point numbers), but here the operator is made to perform the addition of two imaginary or complex numbers

## 2. Runtime Polymorphism

This type of polrmorphism is cheived by function Overriding. Late binding and dynamic plormorphism are other names for runtime polymorphism. The function call is resolved at runtime in runtime polymorphism. In contrast with compile time polymorphism, the compiler determines which function call to bind to the object after deducing it at runtime.

#### A. Function Overriding
Function overriding occures when a derived class has a defination for one of the member functions of the base class. That base function is said to be overidden.

!["function-overriding"](/images/function-overriding.png)

#### Runtime Polymorphism with Data members 
Runtime Polymorphism can be achieved by data members in C++. Let’s see an example where we are accessing the field by reference variable which refers to the instance of the derived class.

```c++
// C++ program for function overriding with data members
#include <bits/stdc++.h>
using namespace std;

// base class declaration.
class Animal {
public:
	string color = "Black";
};

// inheriting Animal class.
class Dog : public Animal {
public:
	string color = "Grey";
};

// Driver code
int main(void)
{
	Animal d = Dog(); // accessing the field by reference
					// variable which refers to derived
	cout << d.color;
}

```

### Virtual function
A virtual function is a member function that is declared in the base class using the keyword virtual and re-defined (overridden) in the derived class.

#### Some key points about virtaul functions
- Virtual functions are Dynamic in nature
- They are defined by inserting the keyword "virtual" inside a base class and are always declared with base class and overridden in a chld class
- A virtual function is called during runtime.

Below is the C++ program to demonstarate virtual function 

```c++
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
```


