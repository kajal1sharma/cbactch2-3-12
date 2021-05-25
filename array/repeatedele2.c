//{ 1,1 ,4,2,2,2, 6, 6,7,3}=>1,2,6
//3 repeat
#include <stdio.h>

int main()
{
    int arr[]={ 1,1 ,4,2,2,2, 6, 6,7,3,8,8,8,8,8,8,8};
    //ele size
    int length=sizeof(arr)/sizeof(int);//40/4=10\
    
    for(int i=0;i<length-1;i++){
        for(int j=0;j<length-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    
    //one by one pick element
  for(int i=0;i<length;i++){
      
      //comparing with other elements
      int count =0;
      for (int j=0;j<length;j++){
          if(arr[i]==arr[j]){
              count++;
          }
      }
      
      if(count>1){
           printf("%d  ",arr[i]);
           i=i+count;
      }
  }
    return 0;
}
