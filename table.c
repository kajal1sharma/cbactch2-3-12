#include <stdio.h>

int main()
{
    int n;
    printf("which table\n");
    scanf("%d",&n);//5
    //cout<<
    //cin >> ;
    for(int i=1;i<=10;i++){
        
        for(int j=1;j<=n;j++){
            int table=j*i;
            printf("%d * %d = %d\t",j, i,table);
            //cout<<j<<" * "<<i<<" = "<<table; 
        }
    printf("\n");
    }
    return 0;
}
