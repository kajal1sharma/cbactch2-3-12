#include <iostream>

using namespace std;

int main()
{
    int a=112,b=19,c=20,d=12,e=34,f=45;
if(a<b){
    if(c>d){
        if(e<f){
            printf("inner most if\n");
        }
        else{
            printf("inner most else\n");
        }
        
        printf("middle if\n");
    }
    else{
        printf("middle else\n");
    }
    printf("first if\n");
}
else{
    if(12>89){
       printf("if of first else\n") ;
    }
    else{
        printf("else of first if\n");
    }
    printf("first else\n");
}

    return 0;
}
