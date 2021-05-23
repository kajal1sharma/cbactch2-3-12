
#include <iostream>

using namespace std;
class Person{
    public:
    virtual void doprint(){
        cout<<"hi iam  printing\n";
    }
    void read(){
        cout<<"hi iam  reading\n";
    }
};

class Student: public Person{
     public:
    void doprint(){
        cout<<"hi iam  printing in student\n";
    }
    void read(){
        cout<<"hi iam  reading in student\n";
    }
};

int main()
{
//   int a=10;
//   int* addr=&a;
//   cout<<addr;

//pointer parent class
Person* addr;
//it can hold child class obj address or parent class obj address
Person p;
Student s;
//addr=&p;
addr=&s;
//accessing data member or mem functs through pointer you have 
//to use -> symbol

addr->doprint();
addr->read();
    return 0;
}
