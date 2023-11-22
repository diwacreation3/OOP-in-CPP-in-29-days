#include <iostream>
using namespace std;


//first namespace
namespace TSn //tsn is 369
{
    void func()
    {
        cout << "Inside first_space" << endl;
    }

//second namespace 
namespace tsN
{
    void func()
    {
        cout << "Inside second_space" << endl;
    }
}
}

using namespace TSn::tsN;
int main()
{
func();

return 0;
}