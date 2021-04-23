
#include <stdio.h>
//break =>loop break
int main()
{
int i=0;
 while(1){//infinite loop
        i++;
        if(i==3){
            break;
        }
        
        printf("hello\n");
 }
 
 printf("out of the loop\n");
    return 0;
}
