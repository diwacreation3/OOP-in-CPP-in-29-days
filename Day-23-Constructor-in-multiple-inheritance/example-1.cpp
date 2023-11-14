// C++ program to implement 
// constructor in Multiple 
// inheritance 

#include <iostream>
using namespace std;

class Tree
{
    public:
    Tree()
    {
        cout << "I'm base of every furniture bro! \n "; // base class Tree
    }
};
class Nail
{
    public:
    Nail()
    {
        cout << "i join every furniture bro !! \n"; //base class Nail
    }
};

class Wood: public Tree, virtual Nail
{
    public:
        Wood(): Tree(), Nail()
        {
            cout << "i can make any thing bro! \n"; // derived class Wood
        }
};

// main Code 
int main()
{
    Wood furniture;
    return 0;
}