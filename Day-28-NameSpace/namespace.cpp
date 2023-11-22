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