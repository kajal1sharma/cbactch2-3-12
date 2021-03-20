//use of climits header file
#include <iostream>
#include <climits>  
using namespace std;

int main()
{
    int a=10;
    int b=20;
    
    //swapping
    int c=b;
    b=a;
    a=c;
    //without third variable
    a=a+b;
    b=a-b;
    a=a-b;
    return 0;
}
