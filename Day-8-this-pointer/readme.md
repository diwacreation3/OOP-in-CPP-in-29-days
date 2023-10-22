# 'this' pointer in C++

To understand 'this' pointer, it is important to know how object looks at functions and data members of a class

1. Each object gets its own copy of the data member
1. All-access the same function definition as present in the code segment

Meaning each onject gets its own copy of data member and all object share a single copy of member functions.
Then now question is that if only one copy of each member function exists and is used by multiple objects, how are the proper data members are accessed and updated?
The compiler supplies an implicit pointer along with the names of the functions as ‘this’.
The ‘this’ pointer is passed as a hidden argument to all nonstatic member function calls and is available as a local variable within the body of all nonstatic functions. ‘this’ pointer is not available in static member functions as static member functions can be called without any object (with class name).
In the early version of C++ would let ‘this’ pointer to be changed; by doing so a programmer could change which object a method was working on. This feature was eventually removed, and now this in C++ is an r-value.
C++ lets object destroy themselves by calling the following code 

```c++
delete this;
```
As Stroustrup said 'this' could be the reference than the pointer

### When local variable name is same as members name

```c++
// C++ program to demonstrate 
// local variable same as a members name

#include <iostream>
using namespace std;

class Test
{
    private:
        int x;

    public: 
        void setX(int x)
        {
            // the 'this' pointer is used to retrieve the object x
            // hidden by the local variable x

            this->x = x;
        }
        void print(){ cout << "X= " << x << endl;}  

};

int main()
{
    Test obj;
    int x = 20;
    obj.setX(x);
    obj.print();
    return 0;
}

```

### to return to the calling object
```c++
// reference to the calling object can be returned 

Test& Test::func()
{
    // Some processing
    return *this;
}
```
When a reference to a local object is returned, the returned reference can be used to chain function calls on a single object.

```c++
// C++ program to demonstrate 
//Reference to the calling object can be returned

#include <iostream>

using namespace std;

class Snack
{
    private:
        int order;
        int price;

    public:
    Snack(int Order = 0, int Price = 0)
    {
        this->order = Order;
        this->price = Price;
    }
    Snack &getOrder(int a)
    {
        order = a;
        return *this;

    }
    Snack &getPrice(int b)
    {
        price = b;
        return *this;
    }
    void print()
    {
        cout << "Order= " << order << "price = " << price << endl;
    }    

};

int main()
{
    Snack food(2,100);

    // Chained function calls. All calls modify the same object 
    // as the same object returned by reference

    food.getOrder(3).getPrice(200);

    food.print();
    return 0;
}
```
