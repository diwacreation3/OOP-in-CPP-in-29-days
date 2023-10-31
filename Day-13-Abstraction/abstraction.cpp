// c++ program to demonstrate the 
// working of abstraction 

#include <iostream>
using namespace std;

class implementAbstraction{
    private:
    int a,b;

    public:
    //method to set vlaues of 
    // private members 

    void set(int x, int y)
    {
        a =x;
        b =y;
    }

    void display()
    {
        cout << "a= " <<a << endl;
        cout << "b= " << b <<endl;
    }

};

int main()

{
    implementAbstraction obj;
    obj.set(36,69);
    obj.display();

    return 0;
}
