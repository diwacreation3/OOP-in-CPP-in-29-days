// defining the constructor within the class

#include <iostream>

using namespace std;

class student
{
    int roll;
    char name[50];
    double fee;

    public:
        student()
        {
            cout<< "Enter roll no: ";
            cin>>roll;
            cout << "Enter name: ";
            cin>> name;
            cout << "Enter the fee: ";
            cin>> fee;
        }

        void display()
        {
            cout << endl << roll<<"\t" <<name<<"\t"<<fee;

        }
};

int main()
{

    student s; // constructor gets called automatically when we create the object of class
     s.display();
     return 0;
}