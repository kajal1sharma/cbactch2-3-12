//inheritence
#include <iostream>

using namespace std;
//multilevel inh

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
   int rollno;
   int marks;
   
   void display(){
       cout<<age;
   }
};

class first: public student{
    //6 properties
    //1 function
};

// multiple inheritence

class a{
  public:
  int x=90;
};
class b{
  public:
  int y=89;
};
class c: public a,public b{
    public:
    void display(){
        cout<<x<< "   "<<y;
    }
};

//heirarchical inh
class d{
    public:
    int x=78;
};

class e : public d{
    public:
    void display1(){
        cout<<x;
    }
};

class f : public d{
    public:
    void display2(){
        cout<<x;
    }
};
int main()
{
    e obj1;
    obj1.display1();
    f obj2;
    obj2.display2();
    // c obj;
    // obj.display();
    // Teacher t;
    // cout<<t.age;
    // student s;
    // s.display();
    return 0;
    
}
