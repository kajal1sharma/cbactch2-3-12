#include <stdio.h>

int main()
{
    int a=90;
    int b=78;
    
    //sizeof operator can tell the size of variables and data types

    int bytes= sizeof(int);
    bytes= sizeof(float);
    bytes=sizeof(char);
    bytes=sizeof(a);
    printf("%d",bytes);
    return 0;
}