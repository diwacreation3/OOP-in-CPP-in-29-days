# Templates in C++ 

A template is a simple yet powerful tool in C++. the simple idea is to pass the data type as a parameter so that we don't need to write the same code for different data types. For example, a software company may need to sort() for different data types. Rather than writing and maintaining multiple codes, we can write one sort() and pass the datatype as a parameter.

C++ adds two new keywords to support templates: 'template' and type name. The seconf can always be replaced by the keyword class

## How Do Templates Work ?

Templates are expanded at compiler time. This link macros. The difference is that the compiler does type-checking before template expansion. The idea is simple source code contains only function/class, but compiled code may contain multiple copies of the same function/class.

Example
```c++
template <typename T> T 
myMax(T x, T y )
{
    return (x>y) ? x :y;
}

int main()
{
    cout << myMax<int>(3,9) << endl;
    cout << myMax<char>('t','s') << endl; // compiler
    // internally generates and adds char x and char y
    return 0;
}
```

## Function Templates

We write a generic function that can be used for different data types. Examples of function templates are sort(), max(), min(), printArray().

max(), min()
```c++

// C++ program to demonstrate 
// use of template

#include <iostream>
using namespace std;
// one function works for all dat types. This would work
// / even for user defined types if operator ''>' is overloaded

template <typename T> T  myMax(T x, T y)
{
    return (x > y) ? x : y;
}

template <typename M> M myMin(M x, M y)
{
    return (x < y) ? x : y;
}

int main()
{
    // Call mymax for int
    cout << myMax<int>(3,9) << endl;

    // call myMax for double
    cout << myMax<double>(3.0,6.3) << endl;

    //call mymax for char 
    cout << myMax<char>('t','s') << endl;;

    //call myMin for int
    cout << myMin<int>(3 ,9) <<endl;

    //call MyMin for double
    cout << myMin<double>(3.3,6.6) << endl;

    //call myMin for char
    cout << myMin<char>('t', 's') << endl;
}
```

Example of implementing Bubble dort using templates in C++

```c++
// C++ program to implement 
// Bubble sort 
// using template function

#include <iostream>
using namespace std;

// A template function to implement bubble sort 
// we can use this for any dat type that supports 
// comparison operator < and swap works for it.

template <class T> void bubbleSort(T a[], int n)
{
    for (int i =0; i < n -1; i++)
        for(int j = n -1; i< j; j--)
            if(a[j] < a[j-1])
                swap(a[j], a[j-1]);
}

// main code 
int main()
{
    int a[5] = {9,80,85,3,6};
    int n = sizeof(a) / sizeof(a[0]);

    //calls template function 
    bubbleSort<int> (a,n);

    cout << " Sorted array : ";
    for(int i =0; i< n; i++)
        cout << a[i] << " ";
    cout << endl;

    return 0;    
}


```

## Class Templates
Class templates like function templates, class templates ae useful when a class defines something that is independent of the data type. Can be useful for classes like LinkedList, BinaryTree, stack, Queue, Array, etc;

```c++
// C++ program to implement 
// Template array class

#include <iostream>
using namespace std;


template <typename T> class Array{
    private:
    T* ptr;
    int size;

    public:
    Array(T arr[], int s);
        void print();
};

template <typename T> Array<T>::Array(T arr[], int s)
{
    ptr = new T[s];
    size = s;
    for(int i =0; i < size; i++)
        ptr[i] = arr[i];
}

template <typename T> void Array<T>::print()
{
    for (int i =0; i < size; i++)
        cout << " " << *(ptr + i);

     cout << endl;   
}

int main()
{

int arr[5] = {1,3,6,9,16};

Array<int> a(arr,5);
a.print();

return 0;

return 0;
}
```

## Can there be more than one argument for templates ?

yes, like normal parameters we can pass more than one data type as arguments to templates. the Following example ddemonstrate the same 

```c++
// C++ program to implement 
// use of template 

#include <iostream>
using namespace std;

template <class T, class U> class A{
    T x;
    U y;

    public:
        A() {cout << "Constructor Called" << endl;}
};

int main()
{

A<char, char>a;
A<int, double>b;


return 0;
}
```

## What is the difference betwwen function overloading and templates?
Both function overloading and templates are example of polymorphism features of OOP. Function overloading is used when multiple functions do quite similar (not identical ) operations, templates are used when multiple functions do identical operations.

More detailed..
[using-keyword-in-c++STL](read-me.md)