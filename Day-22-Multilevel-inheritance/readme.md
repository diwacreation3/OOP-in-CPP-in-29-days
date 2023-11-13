# C++ Multilevel Inheritance

Multilevel inheritance in C++ is the process of deriving a class from another derived class. When one class inherits another class it is further inherited by another class. it is known as multi-level inheritance.

For example if we take Grandfather as a base then father is the derived class that has features of grandfather and then Child is the also derived class that is derived from the sub-class Father which inherits all the features of Father.

Example
```c++
Base class-> Wood, Intermediated class-> furniture, subclass-> table 
```

### Block Diagram of Multilevel Inheritance 

![""multilevel-inheritance"](/images/multilevel.png)

As shown in the diagram class B inherits property from class A and class C inherits property from class B.

Syntax:
```c++
class A //Base class
{
    //statements 
};

class B : access_specifier A //derived class
{
    //stetements 

};
class C : access_specifier B // drved from derived class B
{
    //ststements
};
```

Example 

```c++
// C++ program to implement 
// multilevel Inheritance 

#include <bits/stdc++.h>
using namespace std;

//single base class
class A
{
    public:
    int a;
    void get_A_Data()
    {
        cout << "Enter value of a : ";
        cin >> a;
    }
};

//derived class from base 
class B: public A{
    public:
    int b;
    void get_B_data()
    {
        cout << "Enter value of b: ";
        cin >> b;
    }
};

//derived from class derive1
class C : public B{
    private:
        int c;
    public:
        void get_C_data(){
            cout << "Enter value of c: ";
            cin >> c;
        }
        // function to print sum

        void sum()
        {
            int ans = a + b+ c;
            cout << "sum: " << ans;
        }    
};

int main(){
    C obj;
    obj.get_A_Data();
    obj.get_B_data();
    obj.get_C_data();
    obj.sum();
}
```