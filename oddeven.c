
#include <stdio.h>

void oddeven(int a){
    if(a%2==0){
        printf("number is even");
    }
    else{
        printf("number is odd");
    }
}

int main()
{
 //   2=>2*2
//5=>5*5

int n;
printf("enter the number ...\n");
scanf("%d",&n);
oddeven(n);

    return 0;
}
