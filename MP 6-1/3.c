#include <stdio.h>
#include <math.h>

int main(){
    int n,b,index;
    int conv[64];

    printf("Enter positive integer: ");
    scanf("%d",&n);
    printf("Enter base: ");
    scanf("%d",&b);

    index = 0;

    while(n){
        conv[index]=n%b;
        n=floor(n/b);
        index++;
    }
    
    printf("Base %d equivalent: ",b);

    for(int j=index-1;j>=0;j--){
        printf("%d",conv[j]);
    }

    return 0;
}