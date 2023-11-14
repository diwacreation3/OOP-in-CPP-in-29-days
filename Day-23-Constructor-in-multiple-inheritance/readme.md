# Constructor in Multiple Inheritance in C++

Constructor is a class member function with the same name as the class. The main job of the constructor is to allocate memory for class objects. Constructor is automatically called when the object is created.

## Multiple Inheritance

Multiple Inheritance is a feature of C++ ehere a class can derive from several (two or more) base classes. The constructor of inherited classes are called in the same order in which they are inherited.

!["multiple-inheritance"](/images/img-3.png)

> Syntax of Multiple Inheritance

!["multiple-inheritance-syntax"](/images/img-4.png)

> syntax
```c++
class Wood: public Tree, virtual Nail
{
    //statements
};

Here,
Nail(): virtual base constructor
Tree(): base constructor
Wood(): derived constructor
```

Example1: Below is the C++ program to show the concept of Constructor in Multiple Inheritance.

```c++
// C++ program to implement 
// constructor in Multiple 
// inheritance 

#include <iostream>
using namespace std;

class Tree
{
    public:
    Tree()
    {
        cout << "I'm base of every furniture bro! \n "; // base class Tree
    }
};
class Nail
{
    public:
    Nail()
    {
        cout << "i join every furniture bro !! \n"; //base class Nail
    }
};

class Wood: public Tree, virtual Nail
{
    public:
        Wood(): Tree(), Nail()
        {
            cout << "i can make any thing bro! \n"; // derived class Wood
        }
};

// main Code 
int main()
{
    Wood furniture;
    return 0;
}
```

Example 2: Below is the C++ Program to show the concept of Constructor in Multiple Inheritance 

```c++
// C++ program to implement 
// constructor in Multiple 
// inheritance 

#include <iostream>
using namespace std;

class add
{
    public:
    add()
    {
        int a= 20, b = 30, c;
        c = a+ b;
        cout << "Sum is: " << c << endl;
    }
};

class substract
{
    public:
        substract()
        {
            int x = 50, y = 42, z;
            z = x - y;
            cout << "Difference is: " << z << endl;
        }
};

class multiply: public add, virtual substract
{
    public:
    multiply(): add(), substract()
    {
        int r = 40, s = 8, t;
        t = r *s;
        cout << "Product is: " << t << endl;
    }
};

//main code 
int main()
{
    multiply math;
    return 0;
}

```

