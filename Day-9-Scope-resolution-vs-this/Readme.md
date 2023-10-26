# Scope Resolution Operator vs this Pointer in C++

Scope resolution operator is for accessing static or class members and this pointer is for accessing object members when there is a local variable with the same name.

Consdier below C++ program:

```c++
// C++ program to show that local parameters hide 
// class members

#include <iostream>

using namespace std;

class Test{
    int a;

    public:
     Test() {a = 1;}

     //local parameter 'a' hides class member a 
     void func(int a) {cout << a;}
};

// main code
int main()
{
    Test obj;
    int k = 3;
    obj.func(k);

    return 0;
}
```

#### Explanation
the output for the above program is 3 since the a passed as an argument to the func  shadow the a of the class i.e 1

Then how to output the class a this is where this pointer come sin handy. A statement like cout MM this->a insted of cout << a can simply output the value 1 as this pointer points to the object from where  func is class 

```c++
// C++ program to show use pf this to access member when 
// there ia a local variable with same name

#include <iostream>

using namespace std;

class Test{
    int a;

    public:
    Test(){a =1;}

    // Local parameter a hides object member 
    // a but we can access it using this

    void func(int a) {cout << this->a;}

};

// main code 
int main()
{
    Test obj;
    int k = 3;
    obj.func(k);
    return 0;
}
```
We cannot use the scope resolution operator in the above example to print the object’s member ‘a’ because the scope resolution operator can only be used for a static data member (or class members). If we use the scope resolution operator in the above program we get compiler error and if we use this pointer in the below program, then also we get a compiler error.

```c++
// C++ program to show that scope resolution operator can be 
// used to access static members when there is a local 
// variable with same name 
#include <iostream> 
using namespace std; 

class Test { 
	static int a; 

public: 
	// Local parameter 'a' hides class member 
	// 'a', but we can access it using :: 
	void func(int a) { cout << Test::a; } 
}; 

// In C++, static members must be explicitly defined 
// like this 
int Test::a = 1; 

// Driver code 
int main() 
{ 
	Test obj; 
	int k = 3; 
	obj.func(k); 
	return 0; 
}

```
