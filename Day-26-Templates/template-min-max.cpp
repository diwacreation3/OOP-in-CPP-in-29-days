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