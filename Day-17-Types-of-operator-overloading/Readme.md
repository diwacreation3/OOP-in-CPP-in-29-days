# Types of Operator Overloading in C++
C++ Provides a special function to change the current functonality of some operators within its class which is often called as operator Overloading. Operator overloading is the methos by which we can change the function of some specific operators to do some different tasks.

Syntax:
```c++
Return_Type classname :: Operator op(Argument list)
{
    function body
} // This can be done by declaring the function 
```
Here,
- **return_Type** is the value type to be returned to another object
- **operator op** is the function where the operator is a keyword 
- **op** is the operator to be overloaded 

Operator overloading can be done by using three approaches i.e 

1. Overloading **unary operator**.
1. Overloading **binary operator**.
1. Overloading **binary operator using a friend function**.

## Overloading unary Operator
Let us consider overloading (-) unary operator. In the unary operator function, no arguments should be passed. It works only with one class object. It is the overloading of an operator operating on a single operand.

Example: Assume that class Distance takes two member objects i.e. feet and inches, and creates a function by which the Distance object should decrement the value of feet and inches by 1 (having a single operand of Distance Type). 

```c++
// C++ program to show unary 
// operator overloading 

#include <iostream>
using namespace std;

class Distance{
    public:
    int feet, inch;

    //Consructor to initilize 
    // the objects value

    Distance(int f, int i)
    {
        this->feet = f;
        this->inch = i;
    }

    //Overloading ( - ) operator to 
    // perform decrement operation 
    // of Distnace Object 

    void operator-()
    {
        feet--;
        inch--;
        cout << "\n feet and inches (Decrement ): " << feet << " " << inch;
    }
};

//main code 
int main()
{
    Distance d1(8,9);

    //use (-) unary operator by
    // single operand 
    -d1;
    return 0;
}
```
Explanation: In the above program, it shows that no argument is passed and no return_type value is returned, because the unary operator works on a single operand. (-) operator changes the functionality to its member function.
> Note: d2 = -d1 will not work because operator -() dosen't return any value

## Overloading Binary Operator
In binary operator overloading function, there should be one argument to be passed. it is yhe overloading of an operator operating on two operands. Below is the C++ program to show the overloading of the binary operator (+) using a class Distance wirh two distant objects.

```c++
// c++ program to show binary 
// operator overloading 

#include <iostream>
using namespace std;

class Distance{
    public:
    int feet, inch;

    Distance()
    {
        this->feet = 0;
        this->inch = 0;
    }
    Distance(int f, int i)
    {
        this->feet =f;
        this->inch =i;
    }

    // Overloading (+) operator to 
    // perform addition of two distance object
    // call be refrence 

    Distance operator+(Distance& d2)
    {
        //create an object to return 
        Distance d3;
        d3.feet = this->feet + d2.feet;
        d3.inch = this->feet + d2.inch;

        // retuen the resulting Object
        return d3;

    }
};

//main code 
int main()
{
    Distance d1(8,9);
    Distance d2 (10, 2);
    Distance d3;

    // use Verloaded operator
    d3 = d1+ d2;
    cout << "\nTotal Feet & Inches: " <<  
             d3.feet << "'" << d3.inch;

   return 0;          
}
```

Pictorial view of working of Binary Operator

!["binary-operator"](/images/binary-operator.png)

## Overloading Binary operator using a friend Function 

In this approach, the operator overloading function must be preceded by the friend keyword, and declare the function in the class scope. Keeping in mind, the friend operator function takes two parameters in a binary operator and varies one parameter in a unary operator. All the working and implementation would same as the binary operator function except this function will be implemented outside the class scope.

```c++
// C++ program to show binary 
// operator overloading using 
// a friend function 

#include <iostream>
using namespace std;

class Distance{
    public:
    int feet, inch;

    Distance()
    {
        this->feet = 0;
        this->inch = 0;
    }
    Distance(int f, int i)
    {
        this->inch = i;
        this->feet =f;
    }

    //Declaring friend function
    // using firend keyword 
    friend Distance operator+ (Distance& d1 , Distance& d2)

    // implementng friend function 
    // with two parameter 
    // call by reference 
    {
        Distance d3;

        d3.feet = d1.feet + d2.feet;
        d3.inch = d1.inch + d2.inch;

        //return the resulting object 
        return d3;

    }

};

// main code 
int main()
{
    Distance d1(8,9);
    Distance d2(10,2);
    Distance d3;

    //use overloaded operator
    d3 = d1+ d2;
    cout << "\nTotal Feet & Inches: " <<  
             d3.feet << "'" << d3.inch; 
    return 0;
}
```
