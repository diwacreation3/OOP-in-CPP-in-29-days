# Static Member Function in C++

The static keyword is used with a variable to make the memory of the variable static once a static variable is declared its memory can't be changed.

## Static Member in C++
Static members of a class are not associated wit hthe objects of the class. just lke a static variable once declared is allocated with memory that can't be changed every objects points to the same memory.

#### Example
```c++
// C++ Program to demonstrate 
// Static member in a class

#include <iostream>
using namespace std;

class Student{
    public:
    //static member
    static int total;

    //Constructor called 
    Student() { total += 1;}
};

int Student::total = 0;

int main()
{
    //Student 1 declared 
    Student s1;
    cout << "Number of students: " << s1.total << endl;

    //student 2 declared
    Student s2;
    cout << "Number of students: " << s2.total <<endl;

    //student 3 declared
    Student s3;
    cout << "Number of students: " << s3.total <<endl;

    return 0;

}
```

## Static member Function in C++
Static Member Function in a class is the function that is declared as static because of which function attains certain properties as defined below:

- A static member functon is independent of any object of the class
- A static member function can be called even if no objects of the class exist.
- A static member function can also be accessed using the class name through the scope resolution operator
- A static member function can access static data member and static member function inside or outside of the class
- Static member functions have a scope insdie the class and cannot access the current object pointer

### The reason we need Static member function

- Static members are frequently used to store information that is shared by all objects in a class. 

- For instance, you may keep track of the quantity of newly generated objects of a specific class type using a static data member as a counter. This static data member can be increased each time an object is generated to keep track of the overall number of objects.

#### Example

```c++
// C++ progra, to show the working of 
// static member functions 

#include <iostream>

using namespace std;

class Box{
        private:
        static int length;
        static int breadth;
        static int height;

        public:
        static void print()
        {
            cout << "Length: " << length <<endl;
            cout << "Breadth: " << breadth << endl;
            cout << "Height: " << height << endl;

        }
};

// initilize the static data members

int Box::length = 10;
int Box::breadth = 20;
int Box::height = 30;

//main code 
int main()
{
    Box box;

    cout << "Static member function is called through object name: " << endl;
    box.print();

    cout << "Static member function is called throught Class name: " << endl;
    Box::print();

    return 0;
}
```