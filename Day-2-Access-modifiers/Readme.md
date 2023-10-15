# Access Modifiers in C++

Access modifiers are used to implement an important aspect of Object-Oriented programming known as Data Hiding. Consider a real-life example: 
The Research and Analysis Wing (R&AW), having 10 core members, has come into possession of sensitive confidential information regarding national security. Now we can correlate these core members to data members or member functions of a class, which in turn can be correlated to the R&A Wing. 

These 10 members can directly access the confidential information from their wing (the class), but anyone apart from these 10 members can’t access this information directly, i.e., outside functions other than those prevalent in the class itself can’t access the information (that is not entitled to them) without having either assigned privileges (such as those possessed by a friend class or an inherited class, as will be seen in this article ahead) or access to one of these 10 members who is allowed direct access to the confidential information (similar to how private members of a class can be accessed in the outside world through public member functions of the class that have direct access to private members). This is what data hiding is in practice.

Access Modifiers or Access Specifiers in a class are used to assign the accessibility to the class members, i.e., they set some restrictions on the class members so that they can’t be directly accessed by the outside functions.
There are 3 types of access modifiers available in C++: 

1. Public
1. Private
1. protected 

> Note: if we dont specify any access modifiers for the members inside the class, then by default the access modifiers for the member will be **Public**

Let's now look at each one of these access modifiesr in detail:

### 1. Public :
All the class member declared under the public specifiers will be available to everyone. The dat member and member functions declared as public can be accessed by other Classes and functions too. The public members of a class can be accessed anywhere in the program using the direc temmber access operator(.) with the object of that class.

Example:
 ```c++
 //C++ program to demonstarate Public
// access modifier
#include <iostream>
using namespace std;

//Class defination
class Momo
{
    public:
        //Data member / Variable

        int plate; //your Momo order

        // methods / function
        double total_price()
        {
            return plate * 120 ; // calculating momo price based on plate:::: price from 2023 
        }
};

// main function
int main()
{

Momo order; // creating object 
order.plate = 3; // we Order 3 plate momo

cout  << "Order plate is:" << order.plate << endl ;
cout  << "Total price is: " << order.total_price()<< endl;

return 0;
}
 ```
**Output**

Order plate is:3   
Total price is: 360

### 2. Private: 
The class member declared as private can be accessed directly by any object or function outside the class. Only the member functions or the friend functions are allowed to access the data members of the class  

Example: 
```c++
// C++ program to demonstrate private
// access modifier 

#include <iostream>
using namespace std;

class Momo{

        // private dat member
        private:
            // Data member / Variable
            int plate;

        //Public  member function
        public:

        // methods / function  
        double total_price() 
        {
            //Member function can access private
            // data member plate
            return plate * 120 ; 
        }   
};

//main function 
int main()
{

// Creating object of the class 
Momo order;

//trying to acces private data member 
// directly otside the class 
order.plate = 4;

cout << "Total price is: " << order.total_price() << endl;
return 0;
}
```
**output**

```bash
private.cpp: In function 'int main()':
private.cpp:35:7: error: 'int Momo::plate' is private within this context
   35 | order.plate = 4;
      |       ^~~~~
private.cpp:12:17: note: declared private here
   12 |             int plate;
      |                 ^~~~~
```

The output of the above program is a compile time error because we are not allowed to access the private data members of a class directly from outside the class. Yet an access to order.plate is attempted, but plate being a private data member, we obtained the above compilation error. 

However, we can access the private data members of a class indirectly using the public member functions of the class

Example

```c++

// C++ program to demonstrate private
// access modifier 

#include <iostream>
using namespace std;

class Momo{

        // private dat member
        private:
            // Data member / Variable
            int plate;

        //Public  member function
        public:

        // methods / function  
        void total_price( int plate) 
        {
            //Member function can access private
            // data member plate
            double total=  plate * 120 ;
            cout  << "Total is:" << total << endl ; 
        }   
};

//main function 
int main()
{

// Creating object of the class 
Momo order;

//trying to access private data member
// directly outside the class
order.total_price(3); 

return 0;
}

```
**output**

Total is: 360


### 3. Protected

The protected access modifier is similar to the private access modifier in the sense that it can't be accessed outside of its class unless with the help of a friend class. The difference is that the class members declared as proteced can be accessed by any subclass(derived class) of that class as well.
> Note: This access through inheritance can alter the access modifier of the elements of base class in derived class depending on the Mode of Inheritance

Example

```cpp


```

