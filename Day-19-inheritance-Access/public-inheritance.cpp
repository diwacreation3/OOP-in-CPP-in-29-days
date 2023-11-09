// C++ program to demonstrate the
// working of public inheritance  

#include <iostream>
using namespace std;

class Base{
    private:
    int pvt =1;

    protected:
    int prot =2 ;

    public:
    int pub  = 3;

    //function to access private member
    int getPVT(){return pvt;}
};

class PublicDerived : public Base{
    public:
    //function to access protected memebr from base 
    int getProt() {return prot;}
};

int main()
{

PublicDerived obj;
cout << "Private: " << obj.getPVT() << endl;
cout << "Protected: " << obj.getProt() << endl;
cout << "Public: " << obj.pub << endl;
return 0;
}

