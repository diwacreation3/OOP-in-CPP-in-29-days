# C++ Inheritance Access

- public: members are accessible from outside the class, and members can be accessed from anywhere.

- private: members cannot be accessed from outside the class i.e members are private to that class only 

- protected: members cannot be accesed from outside the clas, but they can be accessed in inherited class are derived classes 


### Public, Protected and Private inheritance in C++

Public, protected and private inheritance have the following features:

- **Public inheritance** make public memebrs of the base class public in the derived class, and the protectted memebrs of the base class remain protected in the derived class.

- **Protected inheritance** makes the public and protected members of the base class protected in the derived class.

- **Private inheritance** makes the public and protected members of the base class private in the derived class

Accessibility of Inheritance Access:

![""](/images/inheritance-access.png)

### 1. C++ Public Inheritance
Since private and protected memebers will not be directly accessed from main() so we have had to create functions name getPVT() to access the private variable and getProt()  to access the protected variable from inherited class.

Example 

```c++
// C++ program to demonstrate the
// working of public inheritance  

#include <iostream>
using namespace std;

class Base{
    private:
    int pvt =1;

    protected:
    int prot =2 ;

    public:
    int pub  = 3;

    //function to access private member
    int getPVT(){return pvt;}
};

class PublicDerived : public Base{
    public:
    //function to access protected memebr from base 
    int getProt() {return prot;}
};

int main()
{

PublicDerived obj;
cout << "Private: " << obj.getPVT() << endl;
cout << "Protected: " << obj.getProt() << endl;
cout << "Public: " << obj.pub << endl;
return 0;
}
```

## 2. protected inheritance
We know that protected memebrs can only be accessed from the derived class. These memebrs cannot be directly accessed from outside the class. so we cannot use getPVT() from Protectedderived. This is also why we need to create getPub() function in the Derived class in order to access 

Example:

```c++
// C++ program to demonstrate the working 
// of protected inheritance

#include <iostream>
using namespace std;


class Base{
    private:
    int pvt =1;

    protected:
    int prot = 2;

    public:
     int pub = 3;

     //function to access private member
    int getPVT() {return pvt;}
};

class ProtectedDerived : protected Base{
    public:

    //function to access protected member from base 
    int getProt() {return prot;}

    //function to access public memebr from base 
    int getPub() {return pub;}

};

int main()
{

ProtectedDerived obj;
cout << "Private cannot be accessed. " << endl;
cout << "Protected: " << obj.getProt()
 << endl;
 cout << "Public: " << obj.getPub() << endl;
return 0;
}
```
### 3. C++ private Inheritance
We know that private member cannot be accessed from the Derived class. These members cannot directly acced from outside the class. So we cannot use getPVT() from PrivateDerived. So we need to create the getPub() function in PrivateDerived in Order to access the pub variable.

Example:

```c++
// C++ program to demonstrate the working 
// of private inheritance 
#include <iostream> 
using namespace std; 

class Base { 
private: 
	int pvt = 1; 

protected: 
	int prot = 2; 

public: 
	int pub = 3; 

	// function to access private member 
	int getPVT() { return pvt; } 
}; 

class PrivateDerived : private Base { 
public: 
	// function to access protected member from Base 
	int getProt() { return prot; } 

	// function to access private member 
	int getPub() { return pub; } 
}; 

int main() 
{ 
	PrivateDerived object1; 
	cout << "Private cannot be accessed." << endl; 
	cout << "Protected = " << object1.getProt() << endl; 
	cout << "Public = " << object1.getPub() << endl; 
	return 0; 
}

```
