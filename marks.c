#include <stdio.h>

int main()
{
    int physics;
    int chemistry;
    
    scanf("%d%d",&physics,&chemistry);
    
    int total=physics+chemistry;
    
    if(physics >=80){
        if(chemistry>=80){
            if(total>=170){
                printf("you do qualify");
            }
            else{
                printf("you dont qualify");
            }
        }
        else{
        printf("you dont qualify");
    }
    }
    else{
        printf("you dont qualify");
    }
    
    // if(physics >=80 && chemistry>=80 && total>=170 ){
    //     printf("you qualify");
    // }
    // else{
    //     printf("you dont qualify");
    // }
    
    
    return 0;
}
