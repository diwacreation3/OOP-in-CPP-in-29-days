# Abstraction in C++

Data abstraction is one of the most essential and important features of object-oriente programming in C++. Abstraction means displaying only essentials information and hiding the details. Data abstraction refers to providing only essential information about the data to the outside world, hiding the background details or implemention.

Consider a real-life example of a man driving a car. The man only knows that pressing the accelerator will increase the speed of the car or applying brakes will stop the car but he does not know how on pressing the accelerator the speed is actually increasing, he does not know about the inner mechanism of the car or the implementation of the accelerator, brakes, etc in the car. This is what abstraction is.

## Types of Abstraction
#### 1. Data abstraction
This type only shows the required information about the data and hides the unnecessary data.

#### 2. Control Abstraction
This type only shows the required information about the implemention and hides unncessary  information.

!["Abstraction"](/images/Abstraction.png)

## Abstraction Using Classes 
We can implement Abstraction in C++ using classes. The class helps us to group data members and member functions using available access specifiers. A Class can decide which data member will be visible to the outside world and which is not

## Abstraction in Header files 
One more type of abstraction in C++ can be header files. For example, consider the pow() method present in math.h headre file. Whenever we need to calculate the power of a number, we simply call the function pow() present in themath.h header file and pass the numbers as arguments without knowing the underlying algorithm according to which the function is actually calculating the power of numbers. 

## Abstraction using Access Specifiers 
Access specifiers are the main pillar of implementing abstraction in C++. We can use access specifiers to enforce restrictions on Class members. For Example 
- Members declared as public in a class can be accessed from anywhere in the program.
- Members declared as private in a class can be accessed from any part of the code outside the class. 

#### Example

```c++
// c++ program to demonstrate the 
// working of abstraction 

#include <iostream>
using namespace std;

class implementAbstraction{
    private:
    int a,b;

    public:
    //method to set vlaues of 
    // private members 

    void set(int x, int y)
    {
        a =x;
        b =y;
    }

    void display()
    {
        cout << "a= " <<a << endl;
        cout << "b= " << b <<endl;
    }

};

int main()

{
    implementAbstraction obj;
    obj.set(36,69);
    obj.display();

    return 0;
}

```
## Advantage of Data abstraction
- Helps the user to avoid writing low-level code 
- Avoids code duplication and increase reusability.
- Can change the internal implementation of the class independently without affecting the user.
- Helps to increase the security of an application or program as only important details are provided to the user.
