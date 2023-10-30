#include <iostream>
#include <string>

using namespace std;

class person {
    private:
    string name;
    int age;

    public:
        person(string name , int age)
        {
            this->name = name;
            this->age = age;
        }
        void setName(string name)
        {
            this->name = name;
        }
        string getName()
        {
            return name;
        }
        void setAge(int age)
        {
            this->age = age;
        }
        int getAge(){
            return age;
        }
};
int main()
{
    person p("anish", 19);
    cout << "name: " << p.getName() << endl;
    cout << "Age: " << p.getAge() << endl;

    p.setName("sneha");
    p.setAge(22);
    cout << "Name:" << p.getName() << endl;
    cout << "Age: " << p.getAge() << endl;

    return 0;
}