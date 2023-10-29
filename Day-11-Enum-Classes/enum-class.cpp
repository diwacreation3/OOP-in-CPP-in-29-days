// C++ program to demonstrate working 
// of Enum Classes 

#include <iostream>
using namespace std;

int main()
{
    enum class Color{Red, Green, Blue};
    enum class Color1{Red, Black, White};
    enum class People {Good, Bad};

    // An Enum value can now be used 
    // create variables 

    int Green = 10;

    //Instantiating the Enum Class
    Color x = Color::Blue;

    //Comparsion now is completely type-safe

    if(x == Color::Blue)
        cout << "It's Blue \n";
    else 
        cout << "It's no red \n";

    People p = People::Good;

    if(p == People::Good)
        cout << "Good people \n";
    else 
        cout << "Bad People\n"  ;

     cout << int(x);

     return 0;             
}