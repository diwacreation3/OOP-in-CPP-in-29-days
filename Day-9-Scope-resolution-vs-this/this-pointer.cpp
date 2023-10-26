// C++ program to show use pf this to access member when 
// there ia a local variable with same name

#include <iostream>

using namespace std;

class Test{
    int a;

    public:
    Test(){a =1;}

    // Local parameter a hides object member 
    // a but we can access it using this

    void func(int a) {cout << this->a;}

};

// main code 
int main()
{
    Test obj;
    int k = 3;
    obj.func(k);
    return 0;
}