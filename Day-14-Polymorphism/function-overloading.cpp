// C++ program to demonstrate
// function overloading or
 // compile time polymorphism

 #include <bits/stdc++.h>

 using namespace std;

 class stupa{
        public:
        //Function with 1 int parameter
        void func(int x)
        {
            cout << "value of x is " << x << endl;

        }

        // Function with same name but
        // 1 double parameter 
        void func (double x)
        {
            cout << "Value of x is " << x << endl;

        }

        //Function with same name 
        // 2 int parameters
        void func(int x, int y)
        {
            cout << "value of x and y is " << x << ", " << y << endl;

        }

 };

// main code 
int main()
{
    stupa obj;

    // Function being called depends 
    // on the parameters passed 
    // func() is called with int value
    obj.func(3);

    //func() is called with double value
    obj.func(9.369);

    //func() is called with 2 int values 
    obj.func(33.93);

    return 0;
}