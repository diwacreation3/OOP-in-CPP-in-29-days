# Local Classes in C++

A class declared inside a function becomes local to that function and is called local Class in C++

- A local class name can only be used locally i.e inside thefunction and not outside it.
- The methods of a local class must be defined inside it only
- A local class can have static functions but, not static data members.

For example in the following program, test is a local class in func()

```c++
// C++ program without any compilation error 
// to demonstrate a Local Class 
#include <iostream> 
using namespace std; 

// Creating the class 
void fun() 
{ 
	// local to fun 
	class Test { 
		// members of Test class 
	}; 
} 

// Driver Code 
int main() { return 0; }

```
**Following are some interesting facts about Local Classes in C++**

### 1. A local class type name can only be used in the enclosing function
For example, in the following program, declarations of t and tp are valid in fuc(), but invaild in main().

```c++
// A program without any compilation error to demonstrate 
// that a local class type name can only be used 
// in the enclosing function 

#include <iostream> 
using namespace std; 

void fun() 
{ 
	// Local class 
	class Test { 
		// Body 
	}; 

	Test t; // Fine 
	Test* tp; // Fine 
} 

int main() 
{ 
	Test t; // Error 
	Test* tp; // Error 
	return 0; 
}

```
### 2. All the methods of Local classes must be defined inside the class only 
For example program 1 works fine and program 2 fails in the compilation.

```c++

// C++ program without any compilation error to demonstrate 
// that all the methods of Local classes must be defined 
// inside the class only

#include <iostream>
using namespace std;

void fun()
{
    class Test // local to fun
    {
        public:
        // Fine as the method is defined 
        // insdie the local class

        void method()
        {
            cout << "Local Class Method() called ";
        }
    };
    Test t;
    t.method();
}

int main()
{
    fun();
    return 0;
}

```
