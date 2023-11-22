// C++ program to demonstrate use of 
// / class in a namespace


#include <iostream>
using namespace std;

namespace tsn
{
    // a class in a namespace
    class Bicte
    {
        public:
        void display()
        {
            cout << "tsn::Bicte::display()" << endl;
        }
    };
}

int main()
{

// creating Object of geek class
tsn::Bicte bicte;
bicte.display();

return 0;
}