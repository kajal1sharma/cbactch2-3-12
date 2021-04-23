#include <stdio.h>
int  add(){
    int sum=0;
    
    for(int i=1;i<=10;i++)
    {
       sum=sum+i; 
    }
    
    return sum;
    
}

int main()
{
    int a=add();
    printf("%d",a);
    return 0;
}
