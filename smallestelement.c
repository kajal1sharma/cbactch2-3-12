
#include <stdio.h>
//2-D matrix
int main()
{
    int n;
    printf("enter the size of array\n");
    scanf("%d",&n);
    
    printf("enter elements of array\n");
 int arr[n];
 for(int i=0;i<n;i++){
     scanf("%d",&arr[i]);
 }
 int min=arr[0];
 
 for(int i=1;i<n;i++){
     if(min>arr[i]){
         min=arr[i];
     }
 }
 
 
 printf("%d",min);
 //minimum
    return 0;
}
