#include <iostream>

using namespace std;

class parent {
	// private destructor
	~parent() { cout << "destructor called" << endl; }

public:
	parent() { cout << "constructor called" << endl; }
	void destruct() { delete this; }
};

int main()
{
	parent* p;
	p = new parent;
	// destructor called
	p->destruct();

	return 0;
}
