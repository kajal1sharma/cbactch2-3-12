
#include <stdio.h>
void domorestuff(int a){
    printf("do some stuff\n");
    printf("%d\n",a);
}
void dostuff(int a){

    a=a+45;
    printf("do some stuff \n");
    int b=92;
    domorestuff(b);
    printf("work done\n");
    printf("%d\n",a+b);
}


int main()
{
    printf("hello world\n");
    int a=90;
    
    dostuff(a);
  printf("main work done\n");
    return 0;
}
