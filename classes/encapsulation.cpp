
#include <iostream>

using namespace std;
class Teacher{
    public :
    //getter setter 12 function
    void display(){
        cout<<"teacher"<<endl;
    }
};

//it provides encapsulation
class Student{
    //data members
    private:
    string name;
    int rollno;
    int mobile;
    string address;
    int percentages;
    
    
    //member funtion
    public :
    //getter setter 12 function
    void display(){
        cout<<"student "<<endl;
    }
    
    
    
};

int main()
{
    Teacher t;
    Student s;
    s.display();
    t.display();
    return 0;
    
}
