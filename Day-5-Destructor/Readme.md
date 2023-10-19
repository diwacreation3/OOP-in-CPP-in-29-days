# Destructor in C++

Destructor is an instance of member function that is invoked automatically whenever an object is going to be destroyed. Meaning, a destructor is the last function that is going to  be called  before an object is destroyed.

- A destructor is also a special memebr function like constructor. Destructor destroys the class objects created by constructor
- Destructor has the same name as their class name precded by the tilde( ~ ) symbol
- it is not possible to define more than oe destructor.
- The destructor is only one way to destroy the object created by the constructor hence destructor can not be overloaded.
- destructor neither requires any argumrnts nor returns any value
- it is automatically called when an object goes out of scope
- in destructor, objects are destroyed in the reverse of object creation.

The thing is to be noted here if the object is created by using new or the constructor uses new to allocate memory that resides in the heap memory or the free store, the destructor should use delete to free the memory

#### Example 1
The below code demonstrates the automatic execution of constructors and destructors when objects are created and destroyed, respectively.

```c++
// C++ program to demonstrate the execution of constructor
// and destructor

#include <iostream>
using namespace std;

class Test {
public:
	// User-Defined Constructor
	Test() { cout << "\n Constructor executed"; }

	// User-Defined Destructor
	~Test() { cout << "\nDestructor executed"; }
};
main()
{
	Test t;

	return 0;
}

```

#### Example 2
The below code demonstrate the automatic execution of constructors and destructors each time when multiple objects are created and destroyed.

```c++
// C++ program to demonstrate the execution of constructor
// and destructor when multiple objects are created

#include <iostream>
using namespace std;
class Test {
public:
	// User-Defined Constructor
	Test() { cout << "\n Constructor executed"; }

	// User-Defined Destructor
	~Test() { cout << "\n Destructor executed"; }
};

main()
{
	// Create multiple objects of the Test class
	Test t, t1, t2, t3;
	return 0;
}

```

### properties of destructor
- The destructor functon is automatically invoked when the objects are destroyed.
- It cannot be declared static or const
- The destructor does not have arguments 
- it has no return type not even void 
- An object of a class with a destructor cannot become a member of the union
- A destructor should be declared in the public section of the class
- The programmer cannot acce the address of the destructor

### When is the destructor called ?
1. The function ends
1. The program ends
1. A block containing local variable ends
1. A delete operator is called 

### When do we need to write a user-defined destructor

If we do not write our own destructor in class, the compiler creates a default destructor for us. The default destructor works fine unless we have dynamically allocated memory or pointer in class. When a class contains a pointer to memory allocated in the class, we should write a destructor to release memory before the class instance is destroyed. This must be done to avoid memory leaks.

#### Example
```c++
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class String {
private:
	char* s;
	int size;

public:
	String(char*); // constructor
	~String(); // destructor
};

String::String(char* c)
{
	size = strlen(c);
	s = new char[size + 1];
	strcpy(s, c);
}
String::~String() { delete[] s; }

int main()
{
	String str = "Hello, World!";
	String myString(str);
	cout << "String: " << myString.s << endl;
	return 0;
}


```
### can a destructor be virtual

Yes, in fact it is always a good idea to make destructor virtual in the base class when we have a virtual function.
