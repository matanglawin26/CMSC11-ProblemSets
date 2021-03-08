#include <stdio.h>

int main(){
    int n,sum=0;
    
    do{
        printf("Enter a positive integer: ");
        scanf("%d",&n);
    }while(n<0);

    for(int i = 1;i<=n;i++)
        sum+=i;

    printf("\nSum from 1 to %d: %d",n,sum);
    
    return 0;
}