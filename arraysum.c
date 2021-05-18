#include <stdio.h>

void add(int arr[]){
    int sum=0;
    for(int i=0;i<5;i++){
        sum=sum+arr[i];
        
    }
    
    printf("%d",sum);
}

int main()
{
    int arr[5];
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    add(arr);

    return 0;
}
