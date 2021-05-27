
struct Student{
    int rollno;
    float marks;
    char grade;
};


#include <stdio.h>

int main()
{
    int a=90;
    //data type
    struct Student  stu1;
    stu1.rollno=78;
    stu1.marks=78.98;
    stu1.grade='A';
    printf("%c",stu1.grade);
    printf("%f", stu1.marks);
    return 0;
}
/*


struct Student{
    int rollno;
    float marks;
    char grade;
};


#include <stdio.h>

int main()
{
    int a=90;
    //data type
    //initialization
    struct Student  stu1={12,45.5,'F'};
    struct Student  stu1={.grade='h',.marks=78.9,.rollno=89};
    scanf("%d%f %c",&stu1.rollno,&stu1.marks,&stu1.grade);
    printf("%d  %f   %c",stu1.rollno,stu1.marks,stu1.grade);
    return 0;
}
*/