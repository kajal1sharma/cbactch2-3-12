
#include <stdio.h>
//Write a program in C to find the square of any number using the function

int square(int a){
    int sq=a*a;
    return sq;
}

int main()
{
 //   2=>2*2
//5=>5*5

int n;
printf("enter the number ...\n");
scanf("%d",&n);

int sq=square(n);
printf("square of %d is :: %d",n,sq);
    return 0;
}
