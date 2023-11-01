// C++ program to demonstrate
// operaroe Overloading or
 // Compile-time polymorphism 

 #include <iostream>

 using namespace std;

class Complex{
    private:
    int real, imge;

    public:
    Complex(int r =0, int i = 0)
    {
        real =r;
        imge = i;
    }

    //This automatically called 
    // when + is used with between
    // to complex objects

    Complex operator+(Complex const& obj)
    {
        Complex res;
        res.real = real + obj.real;
        res.imge - imge + obj.imge;
        return res;
    }
    void print() {cout << real << "+ i" << imge << endl;}
} ;

//main code

int main()
{
    Complex c1(10,5), c2(3,6);

    // An example call to "operator+ "
    Complex c3 = c1+c2;
    c3.print();

    return 0;
}