#include <stdio.h>

struct Student1{
    int a;
    int b;
};
union Student{
    int a;
   char c;
};

int main()
{
    struct Student1 s1;
    s1.a=90;
    s1.b=80;
    int size=sizeof(s1);
    printf("size of structure :: %d\n",size);
  union Student s;
  s.a=90;
   size=sizeof(s);
    printf("size of union :: %d\n",size);
  
 // printf("%d",s.a);

    return 0;
}
