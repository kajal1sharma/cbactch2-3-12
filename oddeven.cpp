
#include <iostream>

using namespace std;

void oddeven(){
    int n;
    cout<<"enter a number\n";
    cin>>n;
    
    if(n%2==0){
        cout<<"number is even";
    }
    else{
        cout<<"number is odd";
    }
}

int main()
{
oddeven();
    return 0;
}
