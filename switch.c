
#include <stdio.h>

int main()
{
   int a;
   printf("1=>add \t 2=>mult \t 3=>div\n");
   scanf("%d",&a);
   
   //23 4 5
   int b;
   int c;
   //1=>add 2=>mul 3=>div
   
   //switch  break  case default
   //switch(a+10){
   switch(a){
       case 1: printf("this is addition block");
                scanf("%d%d",&b,&c);
                printf("%d",c+b);
                break;
       case 2: printf("this is multiplication block");
                break;
       case 3:printf("this is div block");
                break;
       default: printf("wrong input");
                break;
   }
    return 0;
}
