#include <stdio.h>

void decToBin(int);

int main(){
    int x;
    do{
        scanf("%i",&x);
        decToBin(x);
    }while(x>0);
    return 0;
}

void decToBin(int n){
    if(n>0){
        decToBin(n/2);
        printf("%i",n%2);
    }
}
