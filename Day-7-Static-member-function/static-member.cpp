// C++ Program to demonstrate 
// Static member in a class

#include <iostream>
using namespace std;

class Student{
    public:
    //static member
    static int total;

    //Constructor called 
    Student() { total += 1;}
};

int Student::total = 0;

int main()
{
    //Student 1 declared 
    Student s1;
    cout << "Number of students: " << s1.total << endl;

    //student 2 declared
    Student s2;
    cout << "Number of students: " << s2.total <<endl;

    //student 3 declared
    Student s3;
    cout << "Number of students: " << s3.total <<endl;

    return 0;

}