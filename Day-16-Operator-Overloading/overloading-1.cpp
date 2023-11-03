// C++ program to demonstrate 
// Operator Overloading 

#include <iostream>
using namespace std;

class Complex{
    private:
        int real, imge;

    public:
    Complex(int r =0 , int i = 0)
    {
        real = r;
        imge = i;
    }

    // this is sutomatically called when '+' is used with
    // betwwen teo complex objects 

    Complex operator+(Complex const& obj)
    {
        Complex res;
        res.real = real + obj.real;
        res.imge = imge + obj.imge;
        return res;
    }    

    void print() {cout << real << " + i" << imge << "\n";}

};

int main()
{
Complex c1(10,5), c2(2,6);
Complex c3 = c1+ c2;
c3.print();


return 0;
}