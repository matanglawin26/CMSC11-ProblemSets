#include <stdio.h>
#include <math.h>

void perfect();
void power();
int fact(int n);
int fib(int n);

int main(){
    int n, output;
    printf("1. Perfect Number or Not\n");
    printf("2. X Raised to Y\n");
    printf("3. Factorial\n");
    printf("4. Fibonacci\n");
    printf("5. Exit\n\n");
    printf("Select a task: ");
    fflush(stdin);
    scanf("%d",&n);
    printf("\n");
    switch(n){
    case 1:
        printf("\"Perfect Number or Not\"\n");
        perfect();
        break;
    case 2:
        printf("\"X Raised to Y\"\n");
        power();
        break;
    case 3:
        printf("\"Factorial\"\n");
        printf("Enter n: ");
        scanf("%d",&n);

        printf("\n%d! is %d.",n,fact(n));
        break;
    case 4:
        printf("\"Fibonacci\"\n");
        printf("Enter n: ");
        scanf("%d",&n);

        printf("\nThe %dth element in the Fibonacci sequence is %d.",n,fib(n));
        break;
    case 5:
        break;
    default:
        printf("Please enter a valid option.\n");
        main();
        break;
    }
    return 0;
}

void perfect(){
    int n, initial = 2, sum=0;
    printf("Enter n: ");
    scanf("%d",&n);

    for(int i = 1 ; i < n ; i++){   
        if(n % i == 0){
            sum = sum + i ;   
        }
    }    
    if (sum==n){
        printf("Yes, %d is a perfect number.",n);   
    }
    else{
        printf("No, %d is not a perfect number.",n);
    }

}

void power(){
    int base, exp, result;
    printf("Enter base: ");
    scanf("%d",&base);
    printf("Enter exponent: ");
    scanf("%d",&exp);
    
    result = pow(base,exp);

    printf("\n%d raised to the power of %d is: %i.",base,exp,result);
}

// int fact(n){
//     if(n==1)
//         return 1;
    
//     return n*fact(n-1);
// }
int fact(n){
    int total=1;
    if(n>0){
        for(int i = 1;i<=n;i++){
            total*=i;
        }
    }
    return total;
}
// int fib(n){
//     if(n==1 || n==2)
//         return 1;

//     return fib(n-1)+fib(n-2);
// }
int fib(n){
    int x,y,temp;
    x = 0;
    y = 1;
    while(n--){
        temp = x;
        x = y;
        y = x+temp;
    }
    return temp;
}