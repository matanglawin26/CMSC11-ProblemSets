#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    srand((unsigned int)time(NULL));  

    int c = 5, r, guess;

    r = rand() % 100 + 1;
    
    while(c){
        printf("Guess the random number: ");
        scanf("%d",&guess);

        if(guess>r){
            printf("Lower!\n",c);
        }else if(guess<r){
            printf("Higher!\n",c);
        }else{
            break;
        }
        printf("Tries left: %d\n",c-1);
        
        c--;        
    }
    printf("\n");
    if(c){
        printf("Congratulations! You guessed it correctly.\n");
    }else{
        printf("The magic number is %d! Try again.",r);
    }

    return 0;
}