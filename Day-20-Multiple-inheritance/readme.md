# Multiple Inheritance in C++

Multiple inheritance is a feature of C++ where a class can inherit from more than one classes. The constructors of inherited. For example in the following program B's constructor is called before A's constructor.

A class can be derived from more than one base class.

Eg.
- A CHILD class is derived from FATHER and MOTHER class.

!["derived-class"](/images/derived-class.png)

> Syntax

```c++
class A
{
    //statements
};
class B{
    //statements
};
class C: public A, public B
{
    //statements
};
```

> Example

```c++
#include <iostream>
using namespace std;

class Father
{
    public:
    Father(){
        cout << "Father constructor called " << endl;
    }
};

class Mother
{
    public:
    Mother()
    {
        cout << "Mother Constructor called " << endl;
    }
};

class Child: public Father, public Mother // Note the order
{
    public:
    Child()
    {
        cout << "Child Constructor called " << endl;
    }
};

int main()
{

Child child;

return 0;
}
```

#### The diamond Problem
The diamond problem occur when two superclasses of a class have a common base class. For Example, in the following diagram, the TA class gets two copies of all attribute of Person class, This causes ambiguites.

Let's understand with figure:

!["diamond-problem"](/images/Diamond-problem.png)

Let's understand it deeply 

In C++, a virtual base class is used to avoid the dreaded diamond problem that arises when multiple inheritance is involved. The diamond problem occurs when a class inherits from twwo or more classes that have a common base class. it leads to ambiguity in the inheritance hierarchy and can use cause unexpected behaviour.

Virtual inheritance allows us to create a shared base class so that only one instnace of base class exists ih the object hierarchy, regardles of how many derived classes inherit from it. This way, the diamind problem is resolved and there is no ambiguity when accessing members of the shared base class through the derived classes.

> Here's detailed explanation with an example 

```c++
class animal{
    public: 
    void makeSound()
    {
        cout << "animal sound\n";
    }
};

class mammal : public animal{
    public:
        void move()
        {
            cout << "mammel moves\n";
        }
};

class Bird : public Animal{
    public:
        void move()
        {
            cout << "Birds moves \n";
        }
};

class bat : public mamel, public Bird{
    public:
    //...
};
```
In this example, we have an Animal class, and two derived classes Mammal and Bird. Both Mammal and Bird inherit from the Animal class.

Now, we have a Bat class that is derived from both Mammal and Bird . The Bat class is the cause of the diamond problem since it indirectly inherits Animal twice through Mammal and Bird.

To resolve the diamond problem, we can use virtual inheritance. The Animal base class should be virtually inherited in Mammals and Bird like this:

```c++
class Animal {
public:
    void makeSound() {
        cout << "Animal sound\n";
    }
};

class Mammal : virtual public Animal { // Virtual inheritance
public:
    void move() {
        cout << "Mammal moves\n";
    }
};

class Bird : virtual public Animal { // Virtual inheritance
public:
    void move() {
        cout << "Bird moves\n";
    }
};

class Bat : public Mammal, public Bird {
public:
    // ...
};
```
With virtual inheritance, both Mammal and Bird virtually inherit from Animal, which means there is only one shared instance of the Animal class in the Bat object.

Now, when we create a Bat object and call the makeSound ( ) and move() functions, the appropriate functions will be called without any ambiguity:

```c++
int main() {
    Bat bat;
    bat.makeSound(); // Output: Animal sound
    bat.move();      // Output: Mammal moves

    return 0;
}
```





