# Function Overloading in C++
Function overloading is a feature of object-oriented programming where two or more functions can have the same name but different parameters. When a function name is overloaded with different jobs it is called Function Overloading. In Function Overloading “Function” name should be the same and the arguments should be different. Function overloading can be considered as an example of a polymorphism feature in C++.

If multiple functions having same name but parameters of the functions should be different is known as Function Overloading.
If we have to perform only one operation and having same name of the functions increases the readability of the program.
Suppose you have to perform addition of the given numbers but there can be any number of arguments, if you write the function such as a(int,int) for two parameters, and b(int,int,int) for three parameters then it may be difficult for you to understand the behavior of the function because its name differs.

The parameters should follow any one or more than one of the following conditions for Function overloading:
- parameters should have a different type
```c++
add(int a, int b)
add(double a, double b)
```
Below is the implementation of the above discussion:

```c++
//C++ program to demonstrate 
// function overloading 

#include <iostream>
using namespace std;

void add(int a, int b)
{
    cout << "Sum = " << (a +b);
}

void add(double a, double b)
{
    cout << endl << "Sum = " << (a+b);
}

//main code 
int main()
{

add(6,3);
add(3.3,2.7);

return 0;
}
```

- parameters should have a different number

```c++
add(int a, int b)
add(int a, int b, int c)
```
Below is the implementation of the above code 

```c++
#include <iostream>
using namespace std;

void add(int a, int b)
{
    cout << "sum = "<< (a+b) << endl;
}

void add(int a, int b , int c )
{
    cout << "sum = " << (a+b+c);
}

//main code
int main()
{

add(6,3);
add(4,4,1);

return 0;
}
```

# Constructor overloading in C++

In C++, We can have more than one constructor in a class with same name, as long as each has a different list of arguments.This concept is known as Constructor Overloading and is quite similar to function overloading.

- Overloaded constructors essentially have the same name (exact name of the class) and different by number and type of arguments

- A constructor is called depending upon the number and type of arguments passed.

- While creating the object, arguments must be passed to let compiler know, which constructor needs to be called. 


