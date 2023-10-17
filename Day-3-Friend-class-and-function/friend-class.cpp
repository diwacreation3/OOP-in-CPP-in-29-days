// C++ program to demonstrate the 
// functioning of a friend class

#include <iostream>

using namespace std;

class Snack{

    private:
        int private_order;

    protected:
        int protected_order;

    public:
        Snack(){
            private_order = 3;
            protected_order = 6;

        } 
        //friend class declaration
        friend class food;   

};

// her class food is eclared as a friend class Snack.
// therefore food is a firend class of Snack. Class food can 
// access the private members of class snack

class food{
    public:
        void display( Snack& order)
        {
            cout  << "The value of Private Variable = " << order.private_order << endl ;
            cout  << "The vlaue of protected variable = " << order.protected_order << endl ;
        }
};

// main code 
int main(){
    Snack snack;
    food momo;
    momo.display(snack);
    return 0;
}