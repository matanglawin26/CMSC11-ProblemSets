#include <stdio.h>

int isPrime(int);

int main(){
    int n;
    
    do{
        printf("Enter a positive integer: ");
        scanf("%d",&n);
    }while(n<0);
    if(n>1){
        printf("The prime number(s) from 1 to %d is/are: ",n);
        for(int i = 1;i<=n;i++){
            if(isPrime(i))
                printf("%d ",i);
        }
    }
    return 0;
}

int isPrime(int n){
    int flag;

    flag = 0;
    
    for(int i = 2;i*i<=n;i++){
        if(n%i==0){
            flag = 1;
            break;
        }
    }
    if(flag || n == 1)
        return 0;
    else
        return 1;
}