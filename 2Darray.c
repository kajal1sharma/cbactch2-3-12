
#include <stdio.h>
//2-D matrix
int main()
{
    
   int arr[3][2]={{1,2},{3,4},{2,3}};//initialization
    // arr[0][0]=12;
    // arr[0][1]=13;
    // arr[1][0]=14;
    // arr[1][1]=15;
    // arr[2][0]=16;
    // arr[2][1]=17;
    
    //  //noumber of rows
    // for(int i=0;i<3;i++)
    // {
    //     //columns
    //     for(int j=0;j<2;j++){
    //           scanf("%d ",&arr[i][j]);          
    //     }
      
    // }
    
    //noumber of rows
    for(int i=0;i<3;i++)
    {
        //columns
        for(int j=0;j<2;j++){
              printf("%d ",arr[i][j]);          
        }
        printf("\n");
    }
    return 0;
}
