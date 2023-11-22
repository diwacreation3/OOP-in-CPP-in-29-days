#include <iostream>
using namespace std;

//first name Space
namespace first_space
{
    void func()
    {
        cout << "Insdie first_insde" << endl;
    }
}

//second namespace 
namespace second_space
{
    void func()
    {
        cout << "Inside second_space" << endl;
    }
}

int main()
{

// calls function from first name space
first_space :: func();

// calls function from second namespace 
second_space::func();

return 0;
}