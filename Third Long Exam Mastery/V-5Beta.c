#include <stdio.h>

typedef struct{
    int num,denom;
}frac;
frac add(frac,frac);

int main(){
    int arr[4] = {0,0,0,0}, i;
    frac f1,f2,out,new;

    for(i = 0; i<4;i++){
        do{
            printf("Enter a positive integer: ");
            scanf("%d",&arr[i]);
        }while(arr[i]==0);
        // printf("arr[i]: %d\n",arr[i]);
    }
    arr[i] = '\0';

    f1.num = arr[0];
    f1.denom = arr[1];
    f2.num = arr[2];
    f2.denom = arr[3];


    // new.denom = f1.denom*f2.denom;

    // f1.num = (new.denom/f1.denom);
    // f2.num = (new.denom/f2.denom);

    // new.num = f1.num+f2.num;
    out = add(f1,f2);

    // if(new.num % 2 == 0 && new.denom % 2==0){
    //     new.num/=2;
    //     new.denom/=2;
    // }  

    // printf("Output: %d/%d",f2.num,f2.denom);
    // printf("Output: %d/%d",new.num,new.denom);
    printf("Output: %d/%d",out.num,out.denom);
    return 0;
}

frac add(frac f1,frac f2){
    frac new;

    new.denom = f1.denom*f2.denom;

    f1.num *= (new.denom/f1.denom);
    f2.num *= (new.denom/f2.denom);
    
    printf("New F1: %d\n",f1.num);
    printf("New F2: %d\n",f2.num);

    new.num = f1.num+f2.num;

    if(new.num % 2 == 0 && new.denom % 2==0){
        new.num/=2;
        new.denom/=2;
    }  
    printf("New Denom: %d\n",new.denom);

    return new;
}