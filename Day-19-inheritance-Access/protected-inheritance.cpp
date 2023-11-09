// C++ program to demonstrate the working 
// of protected inheritance

#include <iostream>
using namespace std;


class Base{
    private:
    int pvt =1;

    protected:
    int prot = 2;

    public:
     int pub = 3;

     //function to access private member
    int getPVT() {return pvt;}
};

class ProtectedDerived : protected Base{
    public:

    //function to access protected member from base 
    int getProt() {return prot;}

    //function to access public memebr from base 
    int getPub() {return pub;}

};

int main()
{

ProtectedDerived obj;
cout << "Private cannot be accessed. " << endl;
cout << "Protected: " << obj.getProt()
 << endl;
 cout << "Public: " << obj.getPub() << endl;
return 0;
}