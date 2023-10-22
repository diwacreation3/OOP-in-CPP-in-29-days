// C++ program to demonstrate 
//Reference to the calling object can be returned

#include <iostream>

using namespace std;

class Snack
{
    private:
        int order;
        int price;

    public:
    Snack(int Order = 0, int Price = 0)
    {
        this->order = Order;
        this->price = Price;
    }
    Snack &getOrder(int a)
    {
        order = a;
        return *this;

    }
    Snack &getPrice(int b)
    {
        price = b;
        return *this;
    }
    void print()
    {
        cout << "Order= " << order << "price = " << price << endl;
    }    

};

int main()
{
    Snack food(2,100);

    // Chained function calls. All calls modify the same object 
    // as the same object returned by reference

    food.getOrder(3).getPrice(200);

    food.print();
    return 0;
}