//destructors
#include <iostream>

using namespace std;

class Students{
    
    public:
    int a;
    int b;
    //constructirs
    Students(){
        a=90;
        b=89;
        cout<<"values initializzed\n";
    }  
    //destructors
    ~Students(){
        cout<<"this object is destructeed\n";
    }
    
};


void read(){
    Students s;
    cout<<s.a<<" "<<s.b<<endl;
}
int main()
{
    read();
    cout<<"read function exited\n";
    return 0;
}
