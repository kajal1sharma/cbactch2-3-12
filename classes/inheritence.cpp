//inheritence
#include <iostream>

using namespace std;


class Person{
    public:
    string name;
    string address;
    string phone;
    int age=80;
    
};
//
class student : public  Person {
   public:
   void display(){
       cout<<age;
   }
};
class Teacher :public Person{
    
};
int main()
{
    Teacher t;
    cout<<t.age;
    student s;
    s.display();
    return 0;
    
}
