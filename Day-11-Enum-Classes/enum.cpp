#include <iostream>
using namespace std;

enum roll_no {
    sneha = 10,
    anish = 11,
    diwakar = 12,
    Anisha = 13,
    prasamasa = 9,
    ashish = 23,
    bishal = 1,
};

int main()
{
    enum roll_no obj;
    obj = anish;
    cout << "the roll no of variable = " << obj;
    
}
