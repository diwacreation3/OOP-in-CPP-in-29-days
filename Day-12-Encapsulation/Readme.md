# Encapsulation in C++

Encapsulation in C++ is defined as the wrapping up of data and information in a single unit. In Object Oriented Programming. Encapsulation is defined as binding together the data and the functions that manipulate them.

Consider a real-life example of encapsulation in a company there are different sections like the accounts section, fiance section, sales section etc.

- The finance section handles all the financial transcations and keeps records of all the data relate to finance
- similarly, the sales section handle all the sales-related activites and keeps record of all the sales.

### Two important property of Encapsulation 🍂

#### 1. Data protection
Encapsulation protects the internal state of an object by keeping its data members private. Access to and modification of these data members is restricted to the class's public methods, ensuring controlled and secured data manipulation.

#### 1. Information Hiding 
Encpsulation hides the internal implementation details of a class from external code. only the publiv interface of the class is accessible, providing abstraction and simplifying the usage of the class while allowing the internal implementation to be modified without impacting external code.

For example if we give input, and output should be half of input.

```c++
// basic example of data hiding  
#include <iostream>

using namespace std;

class temp{
    int a;
    int b;

    public:
    int solve(int input)
    {
        a = input;
        b= a/2;
        return b;
    }
};

int main()
{
    int n;
    cin >> n;
    temp half;
    int ans = half.solve(n);
    cout << ans << endl;

    return 0;
}
```
## Features of Encapsulation
Below are thw fetures of encapsulation 
1. We can nit access any functions from the class directly. We nned an object to access thet function that is using the member variables of that class.
1. the function which we are making inside the class must only use only member variables, only then it is called encapsulation.
1. If we don't make a function inside the class which is using the member variable of the class then we don't call it encapsulation
1. It hepls to  control the modification of our data members 

!["encapsulation"](/images/Encapsulation.png)

Encapsulation also leads to data abstraction. Using encapsulation also hides the data, as in the above example, the data of the sections like sales, finance, or accounts are hidden from any other section.

Simple Example
```c++
#include <iostream>
#include <string>

using namespace std;

class person {
    private:
    string name;
    int age;

    public:
        person(string name , int age)
        {
            this->name = name;
            this->age = age;
        }
        void setName(string name)
        {
            this->name = name;
        }
        string getName()
        {
            return name;
        }
        void setAge(int age)
        {
            this->age = age;
        }
        int getAge(){
            return age;
        }
};
int main()
{
    person p("anish", 19);
    cout << "name: " << p.getName() << endl;
    cout << "Age: " << p.getAge() << endl;

    p.setName("sneha");
    p.setAge(22);
    cout << "Name:" << p.getName() << endl;
    cout << "Age: " << p.getAge() << endl;

    return 0;
}


```
Output
name: anish
Age: 19    
Name:sneha
Age: 22  

