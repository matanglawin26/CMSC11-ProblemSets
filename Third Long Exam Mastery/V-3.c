#include <stdio.h>

int isAlpha(char);
int isUpper(char);
int isLower(char);
char toUpper(char);
char toLower(char);

int main(){
    char c;

    printf("Enter a character: ");
    scanf("%c",&c);

    if(isAlpha(c)){
        if(isUpper(c))
            printf("Output: %c\n",toLower(c));
        else
            printf("Output: %c\n",toUpper(c));
    }else
        printf("The input is not a letter.");

    return 0;
}

int isAlpha(char ch){
    if ((ch>=65 && ch<=90) || (ch>=97 && ch<=122))
        return 1;
    return 0;
}
int isUpper(char ch){
    if (ch>=65 && ch<=90)
        return 1;
    return 0;
}
int isLower(char ch){
    if (ch>=97 && ch<=122)
        return 1;
    return 0;
}
char toUpper(char ch){
    if (isLower(ch))
        return (int)ch-32;
    return ch;
}
char toLower(char ch){
    if (isUpper(ch))
        return (int)ch+32;
    return ch;
}