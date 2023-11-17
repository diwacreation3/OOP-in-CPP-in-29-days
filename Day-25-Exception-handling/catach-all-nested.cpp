// C++ program to demonstrate 
// nested try/catch

#include <iostream>
using namespace std;

int main()
{

try{
    try{
        throw 3;
    }
    catch (int t)
    {
        cout << "handle partially ";
        throw; // re-throwing an exception
    }
}
catch (int t)
{
    cout << "handle remaining";
}

return 0;
}