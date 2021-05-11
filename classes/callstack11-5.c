#include <stdio.h>


void read(int a){
    printf("read function  %d  \n", a);
}
void print(int a){
    printf("print function %d\n",a);
    
    read(20);
    
    printf("print function 2\n");
}

int main()
{
    int a=30;
    printf("main 1\n");
    print(a);//function call =>push/insert into the stack
    printf("main 2\n");
    return 0;//pop out of the stack
    printf("main 3\n");
}
