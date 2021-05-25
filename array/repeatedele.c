//{ 1,1 ,4,2,2,2, 6, 6,7,3}=>1,2,6
//3 repeat
#include <stdio.h>

int main()
{
    int arr[]={ 1,1 ,4,2,2,2, 6, 6,7,3};
    //ele size
    int length=sizeof(arr)/sizeof(int);//40/4=10\
    
    //sorting
    //cycle
    for(int i=0;i<length-1;i++){
    //comparsions
        for(int j=0;j<length-1;j++){
            if(arr[j]>arr[j+1]){
                //swapping
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    
     printf("sorted array \n");
    for(int i=0;i<length;i++){
        printf("%d ",arr[i]);
    }
    printf("\nrepeated elements : :  ");
int count=0;
    //elements repeated
    for(int i=0;i<length;i++){
         if(arr[i]==arr[i+1]){
             count++;
            
         }       
         else{
             if(count>0){
                 printf("%d ",arr[i]);
             }
             count=0;
         }
    }

    return 0;
}
