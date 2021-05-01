
#include <stdio.h>

void dostuff(int *a){//address catch by argument converted into pointer
    //now a has the address
    
    printf("%d",*a);
    //*a=>value
    //a=>address/reference
    
    *a=*a+100;
    printf("%d",*a);
}

int main()
{
   int a=10;
   
   dostuff(&a);//address of address
    //scanf("%d",&a)
    printf("%d",a);
    return 0;
}
