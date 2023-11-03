# Operator Verloading in C++
C++ has the ability to provide the operators with a special meaning for a data type, this ability is known as operator overloading. Operator overloading is a compile-time polymorphism. For example, we can overload an operator ‘+’ in a class like String so that we can concatenate two strings by just using +. Other example classes where arithmetic operators may be overloaded are Complex Numbers, Fractional Numbers, Big integers, etc.

#### Example

```c++
int a;
float b ,sum;
sum = a+ b;
```
Here, variables “a” and “b” are of types “int” and “float”, which are built-in data types. Hence the addition operator ‘+’ can easily add the contents of “a” and “b”. This is because the addition operator “+” is predefined to add variables of built-in data type only. 

#### Implementation
```c++
// C++ program to demonstrate the 
// qorking/ Logic behind Operator 
// Overloading 

class A{
    statements;
};

int main()
{
    A a1, a2, a3;

    a3 = a1+ a2;
    return 0;
}
```
In this example, we have 3 variables “a1”, “a2” and “a3” of type “class A”. Here we are trying to add two objects “a1” and “a2”, which are of user-defined type i.e. of type “class A” using the “+” operator. This is not allowed, because the addition operator “+” is predefined to operate only on built-in data types. But here, “class A” is a user-defined type, so the compiler generates an error. This is where the concept of “Operator overloading” comes in.

Now, if the user wants to make the operator “+” add two class objects, the user has to redefine the meaning of the “+” operator such that it adds two class objects. This is done by using the concept of “Operator overloading”. So the main idea behind “Operator overloading” is to use C++ operators with class variables or class objects. Redefining the meaning of operators really does not change their original meaning; instead, they have been given additional meaning along with their existing ones.

### Example of Operator Overloading in C++
```c++
// C++ program to demonstrate 
// Operator Overloading 

#include <iostream>
using namespace std;

class Complex{
    private:
        int real, imge;

    public:
    Complex(int r =0 , int i = 0)
    {
        real = r;
        imge = i;
    }

    // this is sutomatically called when '+' is used with
    // betwwen teo complex objects 

    Complex operator+(Complex const& obj)
    {
        Complex res;
        res.real = real + obj.real;
        res.imge = imge + obj.imge;
        return res;
    }    

    void print() {cout << real << " + i" << imge << "\n";}

};

int main()
{
Complex c1(10,5), c2(2,6);
Complex c3 = c1+ c2;
c3.print();


return 0;
}
```

### Can we Overload All operators?

Almost all operators be overloaded expext a few. Following is the list of operator that cannot be overloaded 

```c++
sizeof
typeid
Scope resolution ::
Class member access operators .(dot), .*(pointer to member operator )
ternary or conditional (?:)
```

### Why can't the above-stated operators be overloaded ?

1. sizeof Operator
This returns the size of the object or datatype entered as the operand. This is evaluated by the compiler and cannot be evaluated during runtime. The proper incrementing of a pointer in an array of objects relies on the sizeof operator implicitly. Altering its meaning using overloading would cause a fundamental part of the language to collapse.

1. typeid oprator 
This provides a CPP program with the ability to recover the actually derived type of the object referred to by a pointer or reference. For this operator, the whole point is to uniquely identify a type. If we want to make a user-defined type ‘look’ like another type, polymorphism can be used but the meaning of the typeid operator must remain unaltered, or else serious issues could arise.

1. Scope resolution :: operator 
This helps identify and specify the context to which an identifier refers by specifying a namespace. It is completely evaluated at runtime and works on names rather than values. The operands of scope resolution are note expressions with data types and CPP has no syntax for capturing them if it were overloaded. So it is syntactically impossible to overload this operator.

1. ternary or Conditional ?: Operator
The ternary or conditional operator is a shorthand representation of an if-else statement. In the operator, the true/false expressions are only evaluated on the basis of the truth value of the conditional expression.

```c++
conditional statement ? expression1 (if statement is TRUE) : expression2 (else)
```