# Exception handling in C++

one of the advantages of C++ over C is Exception Handling. Exceptions are runtime anomalies or abnormal condition that a program encounters during its execution. There are two types of exceptions.

- Synchronous
- Asynchronous 

i.e exceptions which are beyound the program control, such as disc failure, keyboard interrupts etc. C++ provides the following specilized keyword for this purpose:

- **try:** Represents a block of code that can throw an exception.

- **catch:** represents a block of code that is executed when a particullar exception is thrown.

- **throw:** Used to throw an exception. Also used to list the execeptions that a function throws but dosen't handle itself.

### Why Exception Handling ?

The following are the main advantages of exception handling over traditional error handling:

1. **Sepration of Error handling code from Normal Code:** In traditional error handling codes, there are always if-else conditions to handle errors. these conditions to handle errors. these conditions and the code to handle errors get mixed up with the normal flow. this makes the code less readable and maintainable. With try/catch blocks, the code for error handling becomes seprated from normal flow.

1. **Functions/Methods can handle only the exceptions they choose:** A function can throw many exceptions, but may choose to handle some of them. The other exceptions, which are thrown but not caught, can be handled by the caller. If the caller chooses not to catch them, then the exceptions are handled by the caller of the caller. 

1. **Grouping of Error types:** in C+=, both basic types and objects can be thrown as exceptions. We can create a hierarchy of exception objects, groups exceptions in namespaces or classes and categorize them according to their types


## Exception Handling in C++
1. The following is a simple example to show exception handling in C++. the output of the program explains the flow of execution of try/catch blocks.

```c++

// C++ program to demonstrate 
// try/catch in C++

#include <iostream>
using namespace std;

int main()
{

int x = -1;

//some code 
cout << "Before try \n";
try{
    cout << "Inside try \n";

    if(x<0)
        {
            throw x;
            cout << "Sfter throw (never executed) \n";

        }
}
catch(int x){
    cout << "Exception Caught \n";
}

cout << "After catch (will be executed) \n";

return 0;
}
```

2. There is a special catch block called the ‘catch all’ block, written as catch(…), that can be used to catch all types of exceptions. For example, in the following program, an int is thrown as an exception, but there is no catch block for int, so the catch(…) block will be executed. 

```c++
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
```

3. implict type converion dosen't happen for primitive types. For example in the following program 'a' isnot implicitly converted to int.

```c++
#include <iostream>
using namespace std;

int main()
{
	try {
	throw 'a';
	}
	catch (int x) {
		cout << "Caught " << x;
	}
	catch (...) {
		cout << "Default Exception\n";
	}
	return 0;
}

```

4. in C++ try/catch blocks can be nested. Also, an exception can be re-throen using "throw".

```c++
// C++ program to demonstrate 
// nested try/catch

#include <iostream>
using namespace std;

int main()
{

try{
    try{
        throw 3;
    }
    catch (int t)
    {
        cout << "handle partially ";
        throw; // re-throwing an exception
    }
}
catch (int t)
{
    cout << "handle remaining";
}

return 0;
}
```

# Stack unwinding in C++

stack unwinding is the process or removing functions entries from function call stach at run time. the local objects are destroyed in reverse order in which they were constructed. 
Stack Unwinding is generally related to Exception Handling. In C++, when an exception occurs, the function call stack is linearly searched for the exception handler, and all the entries before the function with exception handler are removed from the function call stack. So, exception handling involves Stack Unwinding if an exception is not handled in the same function (where it is thrown). Basically, Stack unwinding is a process of calling the destructors (whenever an exception is thrown) for all the automatic objects constructed at run time. 

```c++
// C++ program to demonstrate Stack unwinding

#include <iostream>
using namespace std;


// A sample function f1() that throws an int exception 

void f1()
{
    cout << "\n f1() Start ";
    throw 99;
    cout << "\nf1() End ";

}

// Another sample function f2() that calls f1()
void f2() 
{
    cout << "\n f2() start ";
    f1();
    cout << "\n f2() End";
}

// Another sample function f3() that calls f2() and handles 
// exception thrown by f1() 
void f3() 
{ 
    cout << "\n f3() Start "; 
    try { 
        f2(); 
    } 
    catch (int i) { 
        cout << "\n Caught Exception: " << i; 
    } 
    cout << "\n f3() End"; 
} 

int main()
{
f3(); 
  
    getchar();


return 0;
}
```
