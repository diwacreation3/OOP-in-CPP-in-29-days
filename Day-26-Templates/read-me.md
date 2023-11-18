# Using keyword in C++ STL
The using keyword in C++ is a tool that allows developers to specify the use of a particular namespace. This is especially useful when working with large codebases or libraries where there may be many different namespaces in use. The using keyword can be used to specify the use of a single namespace, or multiple namespaces can be listed using the using keyword.

When using the using keyword, it is important to keep in mind that the specified namespace will take precedence over any other namespace that is in scope. This can lead to unexpected results if the code is not well-organized. For this reason, it is generally considered good practice to use the using keyword sparingly and only when absolutely necessary.

## Use of "using" keyword in C++ STL
The using keyword can be used in the following ways:

1. Using for namespaces
1. Using for Inheritance
1. using for aliasing
1. Using for directives

# 

### 1. "using" for namespaces

using allows you to specify that you want to use a particular namespace. this is useful if you want to avoid typing out the full namepsace name every time you want to use somwting from that namespace.

Example:

```c++
#include <iostream>
using namespace std;

int main()
{
    cout << "Hello, Nepal" << endl ;
    return 0;
}
```

### 2. using for inheritance
using allows you to specify that a class inherits from another class. this is useful if you want to avoid having to type out the full name of the base class every time you want to use it 

```c++
#include <iostream>
using namespace std;

class Base {
public:
int x;
Base(int &a):x(a){};
};

class Derived: public Base {
public:
int y;
using Base::Base; //inheriting the cunstructor of class Base.
};

int main() {

Derived d;
d.x = 5;
d.y = 10;
cout << d.x << " " << d.y;
return 0;
}

```
### 3 using aliasing 

```c++
#include <iostream>
using namespace std;
typedef long long ll;

int main() {

ll a = 5;
cout << a;
return 0;
}

```

### 4 using for directives 

```c++
#include <iostream>
using std::cout;
using std::endl;

int main() {
cout << "Hello, world!" << endl;
return 0;
}

```