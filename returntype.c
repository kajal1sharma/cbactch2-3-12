#include <stdio.h>
int  add(){
    printf("Add function\nenter two numbers\n");
    int a;
    int b;
    scanf("%d%d",&a,&b);
    int c=a+b;
    return c;
}

int main()
{
    
    int a=add();
    printf("%d",a);
    return 0;
}
