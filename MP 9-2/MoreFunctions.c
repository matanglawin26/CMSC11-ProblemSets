#include <stdio.h>
#include <math.h>

void perfect();
void power();
int fact(int n);
int fib(int n);
int sum(int n);
int oct(int n);

int main(){
    int n, output;

    printf("1. Perfect Number or Not\n");
    printf("2. X Raised to Y\n");
    printf("3. Factorial\n");
    printf("4. Fibonacci\n");
    printf("5. Summation\n");
    printf("6. Decimal to Octal\n");
    printf("7. Exit\n\n");
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
    
        printf("The %dth element in the Fibonacci sequence is %d.",n,fib(n));
        break;
    case 5:        
        printf("\"Summation\"\n");
        printf("Enter n: ");
        scanf("%d",&n);

        printf("\nSum: %d",sum(n));
        break;
    case 6:
        printf("\"Decimal to Octal\"\n");
        do{
            printf("Enter positive decimal number: ");
            scanf("%d",&n);
        }while(n<=0);
        printf("\nOctal Equivalent: %d", oct(n));
        break;
    case 7:
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
    int base, exp, result=1,flag=1;
    printf("Enter base: ");
    scanf("%d",&base);
    printf("Enter exponent: ");
    scanf("%d",&exp);
    
    if(exp<0){
        exp*=-1;
        flag = 0;
    }
    for(int i = 0;i<exp;i++){
        result*=base;
    }    

    if(flag){        
        printf("\n%d raised to the power of %d is: %i.",base,exp,result);
    }else{
        if(result>0)
            printf("\n%d raised to the power of %d is: 1/%i.",base,exp,result);
        else
            printf("\n%d raised to the power of %d is: -1/%i.",base,exp,result*-1);
    }
}

int fact(n){
    if(n==1||n==0)
        return 1;    
    return n*fact(n-1);
}

int fib(n){
    if(n==1)
        return 0;
    if(n==2 || n==3)
        return 1;

    return fib(n-1)+fib(n-2);
}

int sum(int n){
    if(n==1) 
        return 1;
    return n+sum(n-1);
}

int oct(int n){
    if(n == 0)
        return 0;    
    return (n%8) + 10*oct(n / 8);
}


