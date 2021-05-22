//unique

#include <stdio.h>

int search(int ele,int arr[],int len){
    int rep=0;
    for(int i=0;i<len;i++){
        if(ele==arr[i]){
            rep++;
        }
    }
    return rep;
}
int main()
{

int arr[5];

for(int i=0;i<5;i++){
    scanf("%d",&arr[i]);
}

for(int i=0;i<5;i++){
    
    int rep=search(arr[i],arr,5);
    if(rep==1){
        printf("unique : %d ",arr[i]);
    }
    // else{
    //     printf("repeated : %d ",arr[i]);
    // }
    
}
    return 0;
}


// //unique elements
// #include <stdio.h>

// int main()
// {
//     int arr[5]={1,2,3,3,5};
    
//     for(int i=0;i<5;i++){
//         int ele=arr[i];
//         int rep=0;
//         for(int j=0;j<5;j++){
//             if(arr[j]==ele){
//                 rep=rep+1;
//             }
//         }
//         if(rep==1){
//             printf("%d ",ele);
//         }
        
//     }
    
//     return 0;
// }
