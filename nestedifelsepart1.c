#include <stdio.h>

int main()
{
    //nested conditional statements
    
    int amount;
    scanf("%d",&amount);
    
    if(amount<1000 )
    {
        int a ,b;
        scanf("%d%d",&a,&b);
        printf("enter amount for shoe a and b");
        if(a<b){
            printf("we will buy a");
        }
        else{
            printf("we will buy b");
        }
    }
    else if(amount<2000 && amount >=1000){
        int c ,d;
        printf("enter amount for shoe c and d");
        scanf("%d%d",&c,&d);
        if(c<d){
            printf("we will buy c");
        }
        else{
            printf("we will buy d");
        }
    }
    else if(amount >=2000 && amount<=3000){
        int e ,f;
        printf("enter amount for shoe e and f");
        scanf("%d%d",&e,&f);
        if(e<f){
            printf("we will buy e");
        }
        else{
            printf("we will buy f");
        }
    }
    else{
        printf("no amount received");
    }
    
    return 0;
}
