
#include <iostream>

using namespace std;


class A{
    private:
    
    int a;
    int b;
   protected:
   int c;
    public :
    
    int d;
   
};
class D: private A{
    public:
    void print(){
        d=89;
        c=76;
        cout<< c<<"    "<< d;
    }
};
class B :protected A{

public:
int getc(){
    c=908;
    return c;
}
};
class C :public B{
   public:
int getc(){
    c=908;
    return c;
} 
};



int main()
{
    D obj;
    //obj.d=90;
   obj.print();
// B obj;
// obj.d=90;
// cout<<obj.getc();
    return 0;
}
