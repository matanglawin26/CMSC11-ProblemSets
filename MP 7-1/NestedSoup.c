#include <stdio.h>
void perf();
int operation(int n);
int fact(int n);
void prime();

int main(){
    int n, output;

    printf("1. First n Perfect Numbers\n");
    printf("2. Factorial without using the multiplication operator\n");
    printf("3. Primality Check without using the modulo operator\n");
    printf("4. Exit\n");
    printf("Select a task: ");
    fflush(stdin);
    scanf("%d",&n);
    printf("\n");
    
    switch(n){
    case 1:
        printf("\"First n Perfect Numbers\"\n");               
        perf();
        break;
    case 2:
        printf("\"Factorial without using the multiplication operator\"\n");

        printf("Enter n: ");
        scanf("%d",&n);

        output = fact(n);

        printf("\n%d! is %d.",n,fact(n));
        break;
    case 3:
        printf("\"Primality Check without using the modulo operator\"\n");

        prime();
        break;
    case 4:
        break;
    default:
        printf("Please enter a valid option.\n");
        main();
        break;
    }
    return 0;
}

void perf(){
    int n,output, count =0 ,obj=6;
    printf("Enter n: ");
    scanf("%d",&n);

    int list[n];

    while(count < n){
        output = operation(obj);

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
    return 0;
}

int operation(n){
   int sum=0;
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

int fact(n){
    int tmp = 1,tmpans,counter, ans = 1;
    while (tmp <= n){
        tmpans = 0;
        counter = 0;
        while (counter != tmp){
            tmpans += ans;
            counter++;
        }
        ans = tmpans;
        tmp++;
    }
    return ans;
}

void prime(){
    int n,checker=0;
    printf("Enter n: ");
    scanf("%d",&n);

    for(int i=2;i<n;i++){
        if(n-(i*(n/i))==0){
            checker++;
            break;
        }else{
        }
    }
    if(checker){
        printf("%d is not prime.",n);
    }else{
        printf("%d is prime.",n);
    }
}