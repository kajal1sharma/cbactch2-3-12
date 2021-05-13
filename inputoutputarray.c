
#include <stdio.h>

int main()
{
   
//   int arr2[10];
//   char arr3[10];
//   float arr4[10];
   
  int arr[5];
  
  arr[0]=90;
  arr[1]=78;
  arr[3]=24;
  arr[2]=12;
  arr[4]=78;
  
  scanf("%d%d%d%d%d",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4]);
  //printf();
  for(int i=0;i<5;i++){
      printf("%d   :  ",arr[i]);
  }
  for(int i=0;i<5;i++){
      scanf("%d",&arr[i]);
  }
  for(int i=0;i<5;i++){
      printf("%d  : ",arr[i]);
  }
  
  
    return 0;
}
