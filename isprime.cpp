//prime nnumbers
#include <iostream>

using namespace std;

int main()
{
    int n=5;
    int flag=0;
    //i id divider
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            flag=1;
            break;
        }
    }
    if(flag==1){
        cout<<"the number is not prime ";
    }
    else if(flag==0){
        cout<<"the number is prime ";
    }
    return 0;
}
