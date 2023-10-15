//C++ program to demonstarate Public
// access modifier
#include <iostream>
using namespace std;

//Class defination
class Momo
{
    public:
        //Data member / Variable

        int plate; //your Momo order

        // methods / function
        double total_price()
        {
            return plate * 120 ; // calculating momo price based on plate:::: price from 2023 
        }
};

// main function
int main()
{

Momo order; // creating object 
order.plate = 3; // we Order 3 plate momo

cout  << "Order plate is:" << order.plate << endl ;
cout  << "Total price is: " << order.total_price()<< endl;

return 0;
}