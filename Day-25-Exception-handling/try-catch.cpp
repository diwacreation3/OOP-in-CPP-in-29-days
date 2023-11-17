// C++ program to demonstrate 
// try/catch in C++

#include <iostream>
using namespace std;

int main()
{

int x = -1;

//some code 
cout << "Before try \n";
try{
    cout << "Inside try \n";

    if(x<0)
        {
            throw x;
            cout << "Sfter throw (never executed) \n";

        }
}
catch(int x){
    cout << "Exception Caught \n";
}

cout << "After catch (will be executed) \n";

return 0;
}