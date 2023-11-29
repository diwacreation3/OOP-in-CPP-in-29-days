# File Handling througn C++ Classes 

File handling is used to store data permanently in a computer. Using file handling we can store our data in secondary memory (Hard disk).
How to achieve the File Handling

For achieving file handling we need to follow the following steps:-

- STEP 1 - Naming a file 
- STEP 2 - Opening a file
- STEP 3 - Writing data into the file 
- STEP 4 - Reading data from the file 
- STEP 5 - Closing a file 

### Streams in C++ 

We give input to the executing program and the execution program gives back the output. The sequence of bytes given as input to the executing program and the sequence of bytes that comes as output from the executing program are called stream. In other words, streams are nothing but the flow of data in a sequence.

The input and output operation between the executing program and the devices like keyboard and monitor are known as “console I/O operation”. The input and output operation between the executing program and files are known as “disk I/O operation”.

### Classes for File stream operations :-

The I/O system of C++ contains a set of classes which define the file handling methods. These include ifstream, ofstream and fstream classes. These classes are derived from fstream and from the corresponding iostream class. These classes, designed to manage the disk files, are declared in fstream and therefore we must include this file in any program that uses files.

#### 1. ios
- ios stand for input output stream
- This class is the base class for other classes in this class hierarchy
- This class contains the necessary facilities that re used by all the other derived classes for input and output operations 

#### 2. istream
- istream stands for input stream
- This class is derived from the class 'ios'.
- This class handle input stream
- the extraction operator (>>) is overloaded in this class to handle input streams
- This class declared input functions such as get(), getline(), and read().

#### 3. ostream
- ostream stands for output stream.
- This class is derived from class 'ios'
- This class handle output stream
- The insertion operator(<<) is overloaded in this class to handle output streams to files from the program execution.
- This class declares output functions such as put() and write().

#### 4. streambuf
- This class contains a pointer which points to the buffer which is used to manage the input and output stream

#### 5. ifstream
- This class provides input operations.
- It contains open() function with default input mode.
- inherits the functions get(), getline(), read(), seekg(), and tellg() functions from istream

#### 6. fstreambase
- This clas provides operations cammon to the file streams. Serves as a base for fstream, ifstream abd ofstream class 

#### 7. ofstream 
- This class provides output operations 
- It contains open() function with default output mode.
- inherits the function put(), write(), seekp() and tellp() functions from the ostream

#### 8. fstream
- This class provides support for simultaneous input and output operations
- Inherits all the functions from istream and ostream classes through iostream

#### 9. filebuf
- its purpose is to set the file buffer to read and write
- We can also use the file fiel buffer memebr function to determine teh length of the file.

In C++ files are maiy dealt by using three classes fstream, ifstream, ofstream available in fstrea, headerfile.

- ofstream : Stream class to write on files 
- ifstream : Stream class to read from files 
- fstream : Stream class to both read and write from-to files.

for e.g
```c++
Open File by using constructor 
ifstream (const char* filename, ios_base::openmode mode = ios_base::in); 
ifstream fin(filename, openmode) by default openmode = ios::in 
ifstream fin(“filename”);

Open File by using open method 
Calling of default constructor 
ifstream fin;
fin.open(filename, openmode) 
fin.open(“filename”); 
```
### Modes 

| Member Constant |  Stands For | Access |
|-----------------|--------------|--------|
| in*            | input |  File open for reading: the internal stream buffer supports input operations. |
| out | output | File open for writing thr internal stream buffer supports output operations|
| binary | binary | Operations are performed in binary mode rather than text. |
| ate | at end | The output position starts at the end of the file | 
| app | append | All output operations happen at the end of the file appending to its existing contents. |
| trunc | truncate | Any contents that existed in the file before it is open are discarded |

### Default open Modes:

| ifstream | ios::in |
| ---------|---------|
| ofstream | ios::out|
| fstream | isod::in ios::out|

Below is the implementation by using ifstream & ofstream classes.

```c++
/* File Handling with C++ using ifstream & ofstream class object*/
/* To write the Content in File*/
/* Then to read the content of file*/
#include <iostream>

/* fstream header file for ifstream, ofstream, 
fstream classes */
#include <fstream>

using namespace std;

// Driver Code
int main()
{
	// Creation of ofstream class object
	ofstream fout;

	string line;

	// by default ios::out mode, automatically deletes
	// the content of file. To append the content, open in ios:app
	// fout.open("sample.txt", ios::app)
	fout.open("sample.txt");

	// Execute a loop If file successfully opened
	while (fout) {

		// Read a Line from standard input
		getline(cin, line);

		// Press -1 to exit
		if (line == "-1")
			break;

		// Write line in file
		fout << line << endl;
	}

	// Close the File
	fout.close();

	// Creation of ifstream class object to read the file
	ifstream fin;

	// by default open mode = ios::in mode
	fin.open("sample.txt");

	// Execute a loop until EOF (End of File)
	while (getline(fin, line)) {
	
		// Print line (read from file) in Console
		cout << line << endl;
	}

	// Close the file
	fin.close();

	return 0;
}

```



