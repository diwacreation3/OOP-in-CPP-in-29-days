#include <iostream>
using namespace std;

void add(int a, int b)
{
    cout << "sum = "<< (a+b) << endl;
}

void add(int a, int b , int c )
{
    cout << "sum = " << (a+b+c);
}

//main code
int main()
{

add(6,3);
add(4,4,1);

return 0;
}