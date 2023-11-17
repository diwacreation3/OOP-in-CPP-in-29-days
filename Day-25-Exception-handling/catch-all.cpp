// C++ program to demonstrate 
// catch all 

#include <iostream>
using namespace std;

int main()
{

try{
    throw 9;

}
catch (char *excp){
    cout << "Caught " << excp;
}
catch(...){
    cout << "Default Exception \n";
}

return 0;
}