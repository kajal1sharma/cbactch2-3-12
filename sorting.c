//unique

#include <stdio.h>

int main()
{

int arr[7]={1,2,4,5,2,1,2};


//sorting
for(int i=0;i<7;i++){
    
    for(int j=0;j<7;j++){
        
        if(arr[i]<arr[j]){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}

for(int i=0;i<7;i++){
    printf("%d",arr[i]);
}


    return 0;
}
