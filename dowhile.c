
#include <stdio.h>

int main()
{
    int n;
    
    scanf("%d",&n);
    // int i=1;
    // while(i<=10){
    //     int table=i*n;
    //     printf("%d\n",table);
    //     i++;
    // }
    int i=1;
    do{
        int table=i*n;
        printf("%d\n",table);
        i++;
    }while(i<=10);
    
    return 0;
}
