// C++ program to demonstrate 
// protected access modifiers 

#include <iostream>
using namespace std;

//base class

class parent
{
    // protected data members
    protected:
    int id_protected;
};

//sub class or derived class from public base class

class child : public parent
{
    public:
    void setId(int id)
    {
        //Child class is able to access the inherited
        // protected data members of base class
        id_protected = id;
    }

    void displayId()
    {
        cout  << "Protected id is: " << id_protected<< endl ;
    }

};

//main function
int main()
{
    child obj;

    // member function of the derived class can 
    // access the protected data members os the base class

    obj.setId(93);
    obj.displayId();
    return 0;
}
