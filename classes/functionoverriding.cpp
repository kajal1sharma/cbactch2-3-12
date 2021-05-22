//function overrriding
#include <iostream>

using namespace std;

class A{
  public:
  void dosomething(){
      cout<<"I do something\n";
  }
};

class B: public A{
  public:
  void dosomething(){
      cout<<"I do a lot of thing\n";
  }
};

int main()
{
    // A a;
    // a.dosomething();
    B b;
    b.dosomething();
    

    return 0;
}
