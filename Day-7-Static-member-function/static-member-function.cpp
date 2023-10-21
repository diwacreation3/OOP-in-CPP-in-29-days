// C++ progra, to show the working of 
// static member functions 

#include <iostream>

using namespace std;

class Box{
        private:
        static int length;
        static int breadth;
        static int height;

        public:
        static void print()
        {
            cout << "Length: " << length <<endl;
            cout << "Breadth: " << breadth << endl;
            cout << "Height: " << height << endl;

        }
};

// initilize the static data members

int Box::length = 10;
int Box::breadth = 20;
int Box::height = 30;

//main code 
int main()
{
    Box box;

    cout << "Static member function is called through object name: " << endl;
    box.print();

    cout << "Static member function is called throught Class name: " << endl;
    Box::print();

    return 0;
}