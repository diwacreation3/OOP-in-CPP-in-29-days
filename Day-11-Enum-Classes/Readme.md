# Enum Class in C++

Enums or Enumerated type(enumeration) is a user-defined data type that can be assigned some limited values. These values are defined by the programmer at the time of declaring the enumerated type.

## Need for Enum Class Over Enum type:
Below are some of the reason as to what are the limitions of Enum type and why we need Enum Class to cover them.

1. Enum is a collection of named integer constant means it's each element is assigned by integer value.
1. it is declared with enum keyword.

```c++
#include <iostream>
using namespace std;

enum roll_no {
    sneha = 10,
    anish = 11,
    diwakar = 12,
    shreesma = 13,
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
```

two enumerations cannot share the same names 

```c++
#include <iostream>
using namespace std;

enum roll_no {
    sneha = 10,
    anish = 11,
    diwakar = 12,
    shreesma = 13,
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

output Compilation Error
```bash
prog.cpp:13:20: error: redeclaration of 'Male'
     enum Gender2 { Male,
                    ^
prog.cpp:8:19: note: previous declaration 'main()::Gender Male'
     enum Gender { Male,
                   ^
prog.cpp:14:20: error: redeclaration of 'Female'
                    Female };
                    ^
prog.cpp:9:19: note: previous declaration 'main()::Gender Female'
                   Female };
                   ^
prog.cpp:18:23: error: cannot convert 'main()::Gender' 
to 'main()::Gender2' in initialization
     Gender2 gender2 = Female;
                       ^
```

No variable can have a name whuch is already is some enumeration:

```c++
#include <bits/stdc++.h>
using namespace std;

int main()
{
	// Defining enum1 Gender
	enum Gender { Male,
				Female };

	// Creating Gender type variable
	Gender gender = Male;

	// creating a variable Male
	// this will throw error
	int Male = 10;

	cout << gender << endl;

	return 0;
}

```
Output: Compilation Error

```bash
prog.cpp: In function 'int main()':
prog.cpp:16:9: error: 'int Male' redeclared as different kind of symbol
     int Male = 10;
         ^
prog.cpp:8:19: note: previous declaration 'main()::Gender Male'
     enum Gender { Male,
                   ^
```

# Enum Class
C++ 11 has introduced enum classes (also called scoped enumerations ) that makes enumeration both stringly types and strongly scoped. Class enum dosent allow implicit conversion to int, also dosen't compare enumerators from different enumerations.
To define enum class we use keyword after enum keyword.

syntax:
```c++
// Declaration
enum class EnumName{ Value1, Value2, ... ValueN};

// Initialisation
EnumName ObjectName = EnumName::Value;
```

Example
```c++
// Declaration
enum class Color{ Red, Green, Blue};

// Initialisation
Color col = Color::Blue;
```
Below is an implemention to show Enum Class

```c++
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
        cout << "Ït's Blue \n";
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
```