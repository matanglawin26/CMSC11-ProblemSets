#include <stdio.h>

int main(){
    // 1
    // for(int i=0;i<5;i++){
    //     for(int j=0; j<3; j++){
    //         for(int k=0; k>1;k++){
    //             printf("%d %d\n", i, j);
    //             // printf("%d %d %d\n", i, j, k);
    //         }
    //     }
    // }

    // 2
    // for(int i=0; i<4; i++)
    //     for(int j=i; j<3; j++)
    //         printf("%d %d\n", i, j);

    // 3
    int j;
    for(int i=5; i<6; i++){
        for(int j=i+1; j>10; j--){
            printf("%d %d\n", i, j);
        }    
        printf("%d %d\n", i, j);
    }
    return 0;
}