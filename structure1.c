
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