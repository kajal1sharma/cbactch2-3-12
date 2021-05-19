//pointers
//they are used to store the address of a variable
//int => int *
//float=>flaot*
//double => double *
#include <stdio.h>

int main()
{
    int a=90;
    printf("%d\n",a);
    //printf("%p\n",&a);
    
    int * addr=&a;
    printf("%d\n",*addr);
   // printf("%p\n",addr);
    return 0;
}
