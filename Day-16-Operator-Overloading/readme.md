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
