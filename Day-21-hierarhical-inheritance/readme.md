# C++ Hierarchical Inheritance

Imheritance is a feature of Object-Oriented programming in which a derived class (child class) inherites the property (data member and member functions ) of the base class (parent class). For example, a chile inheritance the traits of their Parents.

In Hierarchical inheritance, more than one sub-class inheritance the property of a single base class. There is one base class and multiple derived classes. Several other classes inherit the derived classes as well. Hierarchial structures thus from a tree like structure. it ia similar to that, mango and apple both are fruits; both inherit the class property of fruit. fruit will be the Base class, and mango and the apple are sub-classes.

The below diagram shows, Class A is a Base class, B is a subclass inherited from class A and C is a subclass it also inherits from class A

!["inheritance"](/images/img-1.png)

Similarly if another subclass inherits property from B class and so on then thee will be hierarchy and tree like structure is formed, below is the diagram

!["Example"](/images/img-2.png)


Here X and Y are sub-class (child class) that inherits property from class B, and M and N are sub-class (child class) that inherits property from class C. B is the parent class of X and Y, and C is the parent class of M and N. access_specifier provides the visibility mode in the class declaration. By inheriting from the base class, the derived class inherits the members of the base class.

> Syntax

```c++
class A
{
    //Statements
};
class B: access_specifier A
{
    //statements
};
class C: access_specifier A
{
    //statements
}

```

Example

```c++
// C++ program for hierarchical Inheritance

#include <iostream>
using namespace std;

class A //super class 
{
    public: 
    void show_A()
    {
        cout << "i am superclass A" << endl;

    }

};

class B : public A  //subclass B
{
    public:
    void show_B()
    {
        cout << "i am subclass B" << endl;
    }
};

class C : public A //subclass C
{
    public:
    void show_C()
    {
        cout << "i am subclass c" << endl;
    }
};

int main(){
    B b; // b is object of class B
    cout << "calling from B: " << endl;
    b.show_B();
    b.show_A();

    C c; // c is object of class C
    cout << "calling from c: " << endl;
    c.show_C();
    c.show_A();

    return 0;
}
```
