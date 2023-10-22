// C++ program to demonstrate 
// local variable same as a members name

#include <iostream>
using namespace std;

class Test
{
    private:
        int x;

    public: 
        void setX(int x)
        {
            // the 'this' pointer is used to retrieve the object x
            // hidden by the local variable x

            this->x = x;
        }
        void print(){ cout << "X= " << x << endl;}  

};

int main()
{
    Test obj;
    int x = 20;
    obj.setX(x);
    obj.print();
    return 0;
}
