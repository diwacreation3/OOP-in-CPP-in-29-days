// C++ program to show that local parameters hide 
// class members

#include <iostream>

using namespace std;

class Test{
    int a;

    public:
     Test() {a = 1;}

     //local parameter 'a' hides class member a 
     void func(int a) {cout << a;}
};

// main code
int main()
{
    Test obj;
    int k = 3;
    obj.func(k);

    return 0;
}