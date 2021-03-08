#include <stdio.h>

int main() {
    int num, input;
    char ch;
    scanf("%d %c %d", &num, &ch, &input);
    printf("%d %c %d", num, ch, input);
    if(num == 10)
        ch = 45;
    else
        ch = 90;
    while(input < -3){
        printf("num: %d", input);
        input++;
    }
    for(int x = 0,y = 1; x<y; x++,input++,ch++){
        x++;
    }
    return 0;
}