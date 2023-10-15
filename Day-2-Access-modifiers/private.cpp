// C++ program to demonstrate private
// access modifier 

#include <iostream>
using namespace std;

class Momo{

        // private dat member
        private:
            // Data member / Variable
            int plate;

        //Public  member function
        public:

        // methods / function  
        double total_price() 
        {
            //Member function can access private
            // data member plate
            return plate * 120 ; 
        }   
};

//main function 
int main()
{

// Creating object of the class 
Momo order;

//trying to acces private data member 
// directly otside the class 
order.plate = 4;

cout << "Total price is: " << order.total_price() << endl;
return 0;
}

