#include <stdio.h>

typedef struct{
    int num,denom;
}frac;
frac add(frac,frac);

int gcd(frac);

int main(){
    int arr[4] = {0,0,0,0}, i;
    frac f1,f2,out,new;

    for(i = 0; i<4;i++){
        do{
            printf("Enter a positive integer: ");
            scanf("%d",&arr[i]);
        }while(arr[i]==0);
    }

    f1.num = arr[0];
    f1.denom = arr[1];
    f2.num = arr[2];
    f2.denom = arr[3];

    out = add(f1,f2);
    
    if(out.num==out.denom)    
        printf("Output: 1");
    else
        printf("Output: %d/%d",out.num,out.denom);
    return 0;
}

frac add(frac f1,frac f2){
    frac new;
    int gcf;

    new.denom = f1.denom*f2.denom;

    f1.num *= (new.denom/f1.denom);
    f2.num *= (new.denom/f2.denom);

    new.num = f1.num+f2.num;

    gcf = gcd(new);

    if(gcf>1){        
        new.num/=gcf;
        new.denom/=gcf;
    }

    return new;
}

int gcd(frac f){
    int x, y, r;
    x = f.num;
    y = f.denom;

    while(y>0){
        r = x%y;
        x = y;
        y = r;
    }
    return x;
}