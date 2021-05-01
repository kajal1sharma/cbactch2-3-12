
#include <stdio.h>

int main()
{
   int a=900;
//   if(a==90){
//       printf("a is great");
//   }
//   else{
//       printf("a is not great");
//   }
   
   //ternary operator
   
   //a==90 ? printf("a is great") : printf("a is not great") ;
    
    
    //ternary op
    //condition ? true(expr)  :  false(expr)
    int b=   a== 90 ?45:  30+90;
    printf("%d",b);
   
   
    return 0;
}
