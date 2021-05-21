
#include <iostream>

using namespace std;


class A{
    private:
    
    int a;
    int b;
    
    public :
    
    int c;
    void seta(int data){
        a=data;
    }
    void setb(int data){
        b=data;
    }
    int geta(){
        return a;
    }
    
    int getb(){
        return b;
    }
    void print(){
        a=90;
        cout<<a;
        // c=78;
        // cout<<c;
    }
};

class B :private A{
    public :
    void setc(int data){
        c=data;
    }
    int get_c(){
        return c;
    }
    void print(A obj){
        cout<<get_c()+obj.geta()+obj.getb();
        // // a=90;
        // // cout<<a;
        // c=78;
        // cout<<c;
    }
};


int main()
{
 A obj1;
 obj1.seta(3);
 obj1.setb(2);
 
B obj;
obj.setc(1);
obj.print(obj1);
// obj.c=90;
// cout<<obj.c<<endl;

// obj.a=89;
// cout<<obj.a<<endl;
    return 0;
}
