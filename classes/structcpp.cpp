//operator overloading

#include <iostream>

using namespace std;

struct Teacher{
    int data;
    void print(){
        cout<<data;
    }
};

class Person{
    public:
    int data;
};
int main()
{
  
  Person p;
  p.data=90;
//   Teacher t;
//   t.data=90;
//   t.print();
    return 0;
}
