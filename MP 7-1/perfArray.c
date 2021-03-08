#include <stdio.h>
int perf(int n);
int main(){
    int n,output, count =0 ,obj=6;
    printf("Enter n: ");
    scanf("%d",&n);

    int list[n];

    while(count < n){
        output = perf(obj);

        if(output){
            list[count] = output;
            count++;
        }
        obj+=2;
    }
    printf("The first n perfect number(s) is/are: ");
    for(int i=0;i<n;i++){
        printf("%d ",list[i]);
    }
    perf(6);
    return 0;
}
int perf(n){
    int sum=0;
    // printf("Enter n: ");
    // scanf("%d",&n);

    for(int i = 1 ; i < n ; i++){   
        if(n % i == 0){
            sum = sum + i ;   
        }
    }    
    if (sum==n){
        return n;
    }
    else{
        return 0;
    }
}


    // while (initial*initial<=n){
    //     sum =initial;
    //     while (sum<n){
    //         sum =sum+initial;
    //     }
    //     if (sum==n){
    //         ans = ans+initial+n/initial;
    //     }
    //     initial++;
    // }
    // if (ans==n){
    //     printf("Yes, %d is a perfect number.",n);   
    // }
    // else{
    //     printf("No, %d is not a perfect number.",n);
    // }