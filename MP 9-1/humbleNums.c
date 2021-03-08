#include <stdio.h>

int main(){
    int y = 50, start = 1,index=0;
    int out[y];
    while(index<=50){
        // printf("item: %d, ans = %d\n",arr[i],humbleNumber(arr[i]));
        if(humbleNumber(start)){
            out[index] = start;
            printf("%d ",out[index]);
            index++;
        }
        start++;
    }
    int find = 19;
    printf("\nSpef: %d",out[find-1]);
    return 0;
}