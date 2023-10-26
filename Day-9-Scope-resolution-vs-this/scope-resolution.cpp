// C++ program to show that scope resolution operator can be 
// used to access static members when there is a local 
// variable with same name 
#include <iostream> 
using namespace std; 

class Test { 
	static int a; 

public: 
	// Local parameter 'a' hides class member 
	// 'a', but we can access it using :: 
	void func(int a) { cout << Test::a; } 
}; 

// In C++, static members must be explicitly defined 
// like this 
int Test::a = 1; 

// Driver code 
int main() 
{ 
	Test obj; 
	int k = 3; 
	obj.func(k); 
	return 0; 
}
