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
        void total_price( int plate) 
        {
            //Member function can access private
            // data member plate
            double total=  plate * 120 ;
            cout  << "Total is:" << total << endl ; 
        }   
};

//main function 
int main()
{

// Creating object of the class 
Momo order;

//trying to access private data member
// directly outside the class
order.total_price(3); 

return 0;
}

