// C++ program to demonstrate the execution of constructor
// and destructor when multiple objects are created

#include <iostream>
using namespace std;
class Test {
public:
	// User-Defined Constructor
	Test() { cout << "\n Constructor executed"; }

	// User-Defined Destructor
	~Test() { cout << "\n Destructor executed"; }
};

main()
{
	// Create multiple objects of the Test class
	Test t, t1, t2, t3;
	return 0;
}
