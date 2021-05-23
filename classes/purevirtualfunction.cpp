//pure virtual fiunction 
#include <iostream>

using namespace std;
class Person{
    public:
    virtual void doprint()=0;
    void read(){
        cout<<"hi iam  reading\n";
    }
};

class Student: public Person{
     public:
    // void doprint(){
    //     cout<<"hi iam  printing in student\n";
    // }
    void read(){
        cout<<"hi iam  reading in student\n";
    }
};

class A:public Student{
    public :
    void doprint(){
        cout<<"hi iam  printing in student\n";
    }
};
int main()
{
   // Person p;
    //Student s;
    // s.doprint();
    A a;
    a.doprint();
    
    return 0;
}
