#include <iostream>
using namespace std;

int main()
{
    int n;
    
    cout<<"which table\n";
    cin >>n ;
    for(int i=1;i<=10;i++){
        
        for(int j=1;j<=n;j++){
            int table=j*i;
            cout<<j<<" * "<<i<<" = "<<table<<"\t"; 
        }
    cout<<"\n";
    }
    return 0;
}
