#include <stdio.h>

int main(){
    int num1, denom1, num2, denom2, newNum, newDenom;
    printf("Enter 1st numerator and denominator: ");
    scanf("%d %d",&num1,&denom1);
    printf("Enter 2nd numerator and denominator: ");
    scanf("%d %d",&num2,&denom2);

    newDenom = denom1 * denom2;
    num1 *= (newDenom/denom1);
    num2 *= (newDenom/denom2);

    newNum = num1 - num2;


    printf("%d/%d",newNum,newDenom);
    
    return 0;
}