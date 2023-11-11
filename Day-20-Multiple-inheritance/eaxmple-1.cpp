#include <iostream>
using namespace std;

class Father
{
    public:
    Father(){
        cout << "Father constructor called " << endl;
    }
};

class Mother
{
    public:
    Mother()
    {
        cout << "Mother Constructor called " << endl;
    }
};

class Child: public Father, public Mother // Note the order
{
    public:
    Child()
    {
        cout << "Child Constructor called " << endl;
    }
};

int main()
{

Child child;

return 0;
}