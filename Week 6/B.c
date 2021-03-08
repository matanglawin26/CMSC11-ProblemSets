#include <stdio.h>

int main(){
    float euro, rate, pesos;

    printf("Enter euros: ");
    scanf("%f",&euro);
    printf("Enter exchange rate: ");
    scanf("%f",&rate);

    pesos = euro*rate;

    printf("%.2f euro/s with exchange rate %.2f is %.2f pesos", euro, rate, pesos);
    
    return 0;
}