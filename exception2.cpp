#include <iostream>

using namespace std;

int main()
{
    //system generated exception
  //  int a=90/0;
    
    try{
       
        
        int num=0;
        cin>>num;
        int *t=NULL;
        if(num==45){
            throw(t);
        }
        else{
            num=num+10;
            cout<<num;
        }
    }
    // catch(int *t){
    //     cout<<"it is null";
        
    // }
    catch(int e){
        cout<<"integer type exception";
    }
    catch(char c){
        cout<<"char type exception";
    }
    // catch(...){
    //     cout<<"it is an exception";
    // }
    
    cout<<"\nand here iam running normally";

    return 0;
}
