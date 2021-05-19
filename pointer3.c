#include <stdio.h>

int main()
{
    char c='a';
  char* a=&c;
  
  char** ad=&a;
  printf("%c\n",  **ad); 
  printf("%p",  *ad);
//   printf("%p\n",&a);
//   printf("%p\n",ad);
  //variable type
    return 0;
}
