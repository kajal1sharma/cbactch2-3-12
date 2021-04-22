#include <iostream>

using namespace std;
int  add(){
    cout<<"Add function\nenter two numbers\n";
    int a;
    int b;
    cin>>a>>b;
    int c=a+b;
    return c;
}

int main()
{
    
    int a=add();
    cout<<a;
    return 0;
}
