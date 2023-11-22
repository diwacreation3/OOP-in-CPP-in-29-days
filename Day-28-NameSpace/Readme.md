# Namespace in C++

- NameSpace provide the space where we can define or declare identifers i.e variable method, classes.

- Using namespace you can define the psace or context in which identifiers are defined i.e variable, method, classes, In essence a namespace defined a scope.

### Advantage of namespace to avoid name Collision

- Example you might writing some code that has a function called xyz() and there is another library available which is also having same function xyz(). Now the compiler has no way of knowing which version of xyz() function you are referring to within your code.

- A namespace is designed to overcome this difficulty and is used as additional information to differentiate similar functions, classes, variables etc. with the same name available in different libraries.

- The best example of namespace scope is the C++ standard library(std) where all the classes, methods and templates are declared. hence while writing a C++ program we usually include the directive using namespace std:

## Defining a NameSpace

- A namespace defination begins with the keyword namespace followed by the namesapce name as follows:

```c++
namespace namespace_name{
    //code declaration i.e variable (int a;)
    method (void add();)
    classes(class student{};)
}
```
- it is to be noted that, there is no semicolon(;) after closing brace.
- To call the nameSpace-enebled version of either function or variable, prepend the namespace name as follow
- namespace_name::code; //code could be variable function or class

## The using directive
- You can also avoid prepending of namespaces with the using namespace directive. This directive tells the compiler that the subsequent code is making use of names in the specified namespace.

- The namespace is thus implied for the following code:

```c++
//C++ program to demonstarte 
// namespace

#include <iostream>
using namespace std;


namespace TSn
{
    void func()
    {
        cout << "hello, i'm 1st namespace \n";
    }
}

//second namespace 
namespace tsN
{
    void func()
    {
        cout << "hello, i'm 2nd namespace \n";
    }
}
int main()
{

TSn::func(); // calling from TSn namespace
tsN::func(); // calling from TsN namespace 

return 0;
}
```

## nested NameSpaces
- NameSpaces can be nested where you can define one namespace insdie another name space as follows:

> Syntax

```C++
namespace namespace_name1
{
    // Code declaration

    namespace namespace_name2
    {
        // Code declaration
    }
}
```
You can access members of nested namespace by using resolution operators as follows:
// to access members of namespace_name2
using namespace namespace_name1::namespace_name2;
// to access members of namespace_name1
using namespace namespace_name1;
 

In the above statements if you are using namespace_name1, then it will make elements of namespace_name2 available in the scope as follows:

```c++

#include <iostream>
using namespace std;


//first namespace
namespace TSn //tsn is 369
{
    void func()
    {
        cout << "Inside first_space" << endl;
    }

//second namespace 
namespace tsN
{
    void func()
    {
        cout << "Inside second_space" << endl;
    }
}
}

using namespace TSn::tsN;
int main()
{
func();

return 0;
}
```
Let us see how namespace scope the entities including variable and functions:

```c++
#include <iostream>
using namespace std;

//first name Space
namespace first_space
{
    void func()
    {
        cout << "Insdie first_insde" << endl;
    }
}

//second namespace 
namespace second_space
{
    void func()
    {
        cout << "Inside second_space" << endl;
    }
}

int main()
{

// calls function from first name space
first_space :: func();

// calls function from second namespace 
second_space::func();

return 0;
}
```
### Defination and creation
NameSpaces allow us to group name entities that otherwise would have global scope into norrower scopes, giving them namespace scope. This allows organizing the elements of programs into different logcal scopes referred to by names. namespaces provide the space where we can define or declare identifiers i.e names of variable methods, classes etc.

- A namespace is a featue added in C++ and is not present in C.
- A namespace is a declarative region that provides a scope to the identifiers inside it.
- Multiple namespace blocks with same name are allowd. All declarations within yhose blocks are delcared in the named scope.

## Classes and namespace
The following is a simple way to create classes in namespace:
```c++
// C++ program to demonstrate use of 
// / class in a namespace


#include <iostream>
using namespace std;

namespace tsn
{
    // a class in a namespace
    class Bicte
    {
        public:
        void display()
        {
            cout << "tsn::Bicte::display()" << endl;
        }
    };
}

int main()
{

// creating Object of geek class
tsn::Bicte bicte;
bicte.display();

return 0;
}
```