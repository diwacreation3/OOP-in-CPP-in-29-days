// C++ program to demonstrate Stack unwinding

#include <iostream>
using namespace std;


// A sample function f1() that throws an int exception 

void f1()
{
    cout << "\n f1() Start ";
    throw 99;
    cout << "\nf1() End ";

}

// Another sample function f2() that calls f1()
void f2() 
{
    cout << "\n f2() start ";
    f1();
    cout << "\n f2() End";
}

// Another sample function f3() that calls f2() and handles 
// exception thrown by f1() 
void f3() 
{ 
    cout << "\n f3() Start "; 
    try { 
        f2(); 
    } 
    catch (int i) { 
        cout << "\n Caught Exception: " << i; 
    } 
    cout << "\n f3() End"; 
} 

int main()
{
f3(); 
  
    getchar();


return 0;
}