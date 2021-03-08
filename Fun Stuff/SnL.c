#include <stdio.h>
#include <time.h>
#include <stdlib.h>
const int N = 10;

typedef struct{
    int board[10][10];
}arr;
typedef struct{
    int pos;
}player;


arr makeBoard(arr game);
void printGame(arr game,player p,int n);
arr play(arr game,int roll);
int stat(player p,int roll);

int main(){
    srand((unsigned int)time(NULL));  
    arr game,board;
    int n, i, r, flag=0, pos;
    char a;

    char players[4][2] = {"p1","p2","p3","p4"};
    char snakesH[3][2] = {"1S","2S","3S"};
    char snakesT[3][2] = {"1s","2s","3s"};
    char laddersT[3][2] = {"1L","2L","3L"};
    char laddersB[3][2] = {"1l","2l","3l"};

    // printf("How many players?\n");
    // scanf("%d",&n);    
    // player arr[n];
    player arr[1];

    arr[0].pos = 0;
    // for(i = 0;i<n;i++){
    //     arr[i].pos = 0;
    // }
    // arr[i].pos = '\0';

    while(1){
        // if(flag)
        //     break;

        // for(int i = 0;i<1;i++){ // n
            fflush(stdin);
            printf("Player %d, press enter to roll the die...",1);
            // printf("Player %d, press enter to roll the die...",i+1);
            scanf("%[^\n]",&a);

            r = rand() % 6 + 1;
            board = makeBoard(game);
            printf("R: %d\n",r);
            // pos = stat(arr[0],r);
            arr[0].pos += r;
            // arr[0].pos = stat(arr[0],r);
            printGame(board,arr[0],1);
            // printGame(board,pos,n);
            printf("\n");
        // }
    }
    return 0;
}

arr makeBoard(arr game){
    for(int i = 0;i<10;i++){
        for(int j=0;j<10;j++){
            game.board[i][j] = j+1+(i*10);
        }
    }
    return game;
}

void printGame(arr game,player p,int n){    
    printf("\n");
    for(int i = 0;i<10;i++){
        for(int j=0;j<10;j++){
            printf("%d\t",game.board[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(int i = 0;i<n;i++){
        printf("Player %d's current position: %d \n",i+1,p.pos);
    }
}

arr play(arr game,int roll){
    
}

int stat(player p,int roll){
    printf("R: %d\n",roll);
    p.pos+=roll;
    return p.pos;
}