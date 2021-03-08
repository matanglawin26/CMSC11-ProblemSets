#include <stdio.h>

int main(){
    int n,sum=0;
    
    do{
        printf("Enter a positive integer: ");
        scanf("%d",&n);
    }while(n<0);

    printf("The first %d cubes: ",n);

    for(int i = 1;i<=n;i++)
        printf("%d ",i*i*i);
    return 0;
}