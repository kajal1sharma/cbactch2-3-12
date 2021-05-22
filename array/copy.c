#include <stdio.h>

int main()
{
//    int arr[5]={1,2,3,4,5};
int arr[5];
for(int i=0;i<5;i++){
    scanf("%d",&arr[i]);
}

int brr[5];

// brr[0]=arr[0];
// brr[1]=arr[1];
// brr[2]=arr[2];
// brr[3]=arr[3];
// brr[4]=arr[4];

for(int i=0;i<5;i++){
    brr[i]=arr[i];
}

for(int i=0;i<5;i++){
    printf("%d  ",brr[i]);
}


    return 0;
}
