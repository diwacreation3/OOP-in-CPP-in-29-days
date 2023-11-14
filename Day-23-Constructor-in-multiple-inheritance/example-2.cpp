// C++ program to implement 
// constructor in Multiple 
// inheritance 

#include <iostream>
using namespace std;

class add
{
    public:
    add()
    {
        int a= 20, b = 30, c;
        c = a+ b;
        cout << "Sum is: " << c << endl;
    }
};

class substract
{
    public:
        substract()
        {
            int x = 50, y = 42, z;
            z = x - y;
            cout << "Difference is: " << z << endl;
        }
};

class multiply: public add, virtual substract
{
    public:
    multiply(): add(), substract()
    {
        int r = 40, s = 8, t;
        t = r *s;
        cout << "Product is: " << t << endl;
    }
};

//main code 
int main()
{
    multiply math;
    return 0;
}