#include <stdio.h>

int main()
{
   int arr[5]={1,2,3,4,5};
   printf("%p\n",arr);
   printf("%p\n",&arr[0]);
   printf("%p\n",&arr[1]);
   printf("%p\n",&arr[2]);
   
   printf("%d\n",arr[2]);
   printf("%d\n",*arr);
    printf("%d\n",*arr+4);
    printf("%d\n",*arr+2);
    return 0;
}
