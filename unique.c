//unique elements
#include <stdio.h>

int main()
{
    int arr[5]={1,2,3,3,5};
    
    for(int i=0;i<5;i++){
        int ele=arr[i];
        int rep=0;
        for(int j=0;j<5;j++){
            if(arr[j]==ele){
                rep=rep+1;
            }
        }
        if(rep==1){
            printf("%d ",ele);
        }
        
    }
    
    return 0;
}
