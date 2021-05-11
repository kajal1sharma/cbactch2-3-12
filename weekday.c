#include <stdio.h>


//switch case

int main()
{
  
  //1->sunday  2->monday.....7->saturday
  //invalid input
  
  int a;
  printf("enter the number\n");
  scanf("%d",&a);
  
  switch(a){
      case 1:printf("sunday");
                break;
    case 2:printf("monday");
                break;
    case 3:printf("tuesday");
                break; 
    case 4:printf("wednesday");
                break;
    case 5:printf("thursday");
                break;
    case 6:printf("friday");
                break;
    case 7:printf("saturday");
                break;
    default: printf("invalid choice ");
                break;
                
  }
  
}
