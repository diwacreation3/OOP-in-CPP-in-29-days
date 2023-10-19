# Constructors in C++

Constructor in C++ is a special method that is invoked automatically at the time of object creation. it is used to initilize the data members of new objects generally. The constructor in C++ has the same name as the class or structure. it constructs the values i.e provide data for the object which is why it is known as constructor.

- Constructor is member function of a class, whose name is same as the class name.
- Constructor is a special type of member function that is used to initilize the data  members for an object of a class automatically, when an object of the same class is created.
- Constructor do not return value, hence thet do not have a return type.

### Constructor inside the class
```c++
// defining the constructor within the class

#include <iostream>

using namespace std;

class student
{
    int roll;
    char name[50];
    double fee;

    public:
        student()
        {
            cout<< "Enter roll no: ";
            cin>>roll;
            cout << "Enter name: ";
            cin>> name;
            cout << "Enter the fee: ";
            cin>> fee;
        }

        void display()
        {
            cout << endl << roll<<"\t" <<name<<"\t"<<fee;

        }
};

int main()
{

    student s; // constructor gets called automatically when we create the object of class
     s.display();
     return 0;
}
```
### Constructor outside the class

```c++
// defining the constructor within the class

#include <iostream>

using namespace std;

class student
{
    int roll;
    char name[50];
    double fee;

public:
    student();

    void display();
};

// we can use constructor outside the class with the help of
//  scope resolution operator ::

student::student()
{

    cout << "Enter roll no: ";
    cin >> roll;
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter the fee: ";
    cin >> fee;
}

void student::display()
{
    cout << endl<< roll << "\t" << name << "\t" << fee;
}

int main()
{

    student s; // constructor gets called automatically when we create the object of class
    s.display();
    return 0;
}
```

## Characteristics of constructor
- The name of the constructor is same as its class name.
- constructor are mostly declared in the public section of the class though it can be declared in the private section of the class
- A constructor gets called automatically when we create theobject of the class
- Constructor can be overload
- Constructor can not be declare virtual

## Types of constructor 
- Default constructor 
- Parameterized constructor 
- Overloaded constructor
- Constructor with defalu value
- Copy Constructor 
- Inline Constructor 

### How constructor are different from a normal member function 

A  constructor is different from normal functions in following ways:

- Constructor has same name as the class itself
- Default Constructors don’t have input argument however, Copy and Parameterized Constructors have input arguments
- A constructor is automatically called when an object is created.
- If we do not specify a constructor, C++ compiler generates a default constructor for object (expects no parameters and has an empty body).

!["Constructor"](/images/constructor.png)

Let us understand the types of constructors in C++ by taking a real-world example. Suppose you went to a shop to buy a marker. When you want to buy a marker, what are the options. The first one you go to a shop and say give me a marker. So just saying give me a marker mean that you did not set which brand name and which color, you didn’t mention anything just say you want a marker. So when we said just I want a marker so whatever the frequently sold marker is there in the market or in his shop he will simply hand over that. And this is what a default constructor is! The second method is you go to a shop and say I want a marker a red in color and XYZ brand. So you are mentioning this and he will give you that marker. So in this case you have given the parameters. And this is what a parameterized constructor is! Then the third one you go to a shop and say I want a marker like this(a physical marker on your hand). So the shopkeeper will see that marker. Okay, and he will give a new marker for you. So copy of that marker. And that’s what a copy constructor is!

### Types of Constructors
1. default Constructor: Default construcor is the constructor which dosent take anyarguments. it has no parameters. it is also called a Zero-argument constructor.

```c++
// Cpp program to illustrate the
// concept of Constructors
#include <iostream>
using namespace std;

class construct {
public:
	int a, b;

	// Default Constructor
	construct()
	{
		a = 10;
		b = 20;
	}
};

int main()
{
	// Default constructor called automatically
	// when the object is created
	construct c;
	cout << "a: " << c.a << endl << "b: " << c.b;
	return 1;
}

```

2. parameterized Constructors: it is possible to pass arguments to constructors. Typically, these arguments help initilize an object when it is created. To create a parameterized constructor, simply add parameters to it the way you would to any other function. When you define the constructors body, use the parameters to initilize the object.

```c++
// CPP program to illustrate
// parameterized constructors
#include <iostream>
using namespace std;

class Point {
private:
	int x, y;

public:
	// Parameterized Constructor
	Point(int x1, int y1)
	{
		x = x1;
		y = y1;
	}

	int getX() { return x; }
	int getY() { return y; }
};

int main()
{
	// Constructor called
	Point p1(10, 15);

	// Access values assigned by constructor
	cout << "p1.x = " << p1.getX()
		<< ", p1.y = " << p1.getY();

	return 0;
}

```

```c++
// Example

#include<iostream>
#include<string.h>
using namespace std;

class student
{
	int rno;
	char name[50];
	double fee;

	public:
	student(int,char[],double);
	void display();
	
};

student::student(int no,char n[],double f)
{
	rno=no;
	strcpy(name,n);
	fee=f;
} 

void student::display()
{
	cout<<endl<<rno<<"\t"<<name<<"\t"<<fee;
}
	
int main()
{
	student s(1001,"Ram",10000);
	s.display();
	return 0;
}

```


3. Copy Constructor:

A copy constructor is a member function that initializes an object using another object of the same class. A detailed article on Copy Constructor.

Whenever we define one or more non-default constructors( with parameters ) for a class, a default constructor( without parameters ) should also be explicitly defined as the compiler will not provide a default constructor in this case. However, it is not necessary but it’s considered to be the best practice to always define a default constructor. 

Copy constructor takes a reference to an object of the same class as an argument.

```c++
#include<iostream>
#include<string.h>
using namespace std;
class student
{
	int rno;
	char name[50];
	double fee;
	public:
	student(int,char[],double);
	student(student &t)	 //copy constructor
	{
		rno=t.rno;
		strcpy(name,t.name);
		fee=t.fee;
	}
	void display();
	
};




	student::student(int no,char n[],double f)
	{
		rno=no;
		strcpy(name,n);
		fee=f;
	} 

void student::display()
	{
		cout<<endl<<rno<<"\t"<<name<<"\t"<<fee;
	}
	
int main()
{
	student s(1001,"Manjeet",10000);
	s.display();
	
	student manjeet(s); //copy constructor called
	manjeet.display();
	
	return 0;
}

```
