
//  file handling with fstream class object 
// to write the content in file
// then to read the content of file 
#include <fstream>
#include <iostream>
using namespace std;

//main code 
int main()
{

//creating of fstream class object 
fstream file;
string line;

// by default openmode = ios::in | ios:: out mode 
// automatically overwrites the conent file 
// the content open in ios::app
// fio.open("sample.txt", ios::in|ios::out|ios::app)
// ios::trunc mode delete all content before open


file.open("data.txt", ios::trunc | ios::out | ios::in);

//Execute a loop if file sucessfully opened 
while(file)
{
    //read a lie from standard input 
    getline(cin,line);

    //press 3 to exit
    if(line == "3")
        break;

        //write line in file 
        file << line << endl;
}

//Execute a loop until EOF (end of file)
// point read pointer at beginning of file 

file.seekg(0, ios::beg);

while(file)
{
    // read line from file 
    getline(file,line);

    //print line in console 
    cout << line << endl;
}
file.close();

return 0;
}