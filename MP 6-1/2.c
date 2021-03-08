#include <stdio.h>

int main(){    
    int n,flag, x;

    printf("Enter n: ");
    scanf("%d",&n);

    flag = 0;
    
    for(int i = 2;i*i<=n;i++){
        if(n%i==0){
            flag = 1;
            break;
        }
    }
    x = (2*n)+1;

    for(int i = 2;i*i<=x;i++){
        if(x%i==0){
            flag = 1;
            break;
        }
    }

    if(flag){
        printf("%d is not Germain Prime.",n);
    }else{
        printf("%d is Germain Prime.",n);
    }
    
    return 0;
}