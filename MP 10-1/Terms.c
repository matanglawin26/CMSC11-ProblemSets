#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct{
    int cofnt,exp;
} term;

void display(term);
int coef(char s[]);
int degree(char s[]);

int main(){
    term num1,num2,prod;
    char s1[64],s2[64];
    int t,size;
    printf("Enter number of test cases: ");
    scanf("%d",&t);

    // size = t;
    term list[t];

    for(int i = 0;i<t;i++){
        scanf("%s %s",s1,s2);        
        prod.cofnt = coef(s1)*coef(s2);
        prod.exp = degree(s1)+degree(s2);
        list[i] = prod;
    }    
    printf("\nOutput:\n");
    for(int i = 0;i<t;i++){       
        display(list[i]); 
    }
    return 0;
}

int coef(char s[]){
    int len = strlen(s),i;
    char temp[10];
    for(i = 0; i < len;i++){
        if(s[i]=='x'){
            if(s[i-1]=='-')
                return -1;
            if(i==0)
                return 1;            
            break;
        }
        temp[i] = s[i];
    }
    temp[i] = '\0';
    return atoi(temp);
}
int degree(char s[]){
    int len = strlen(s), i, checker = 0, count,index=0;
    char temp[10];    
    
    if(s[len-1]=='x')
        return 1;    

    for(i = 0;i<len;i++){
        if(checker){
            temp[index]=s[i];
            index++;
        }
        if(s[i] == '^')
            checker = 1;        
    }
    temp[index] = '\0';
    if(index)
        return atoi(temp);
    else
        return 0;
}
void display(term prod){    

    if(prod.cofnt){
        if((prod.cofnt==1 || prod.cofnt==-1)&& prod.exp == 0)
            printf("\n%d",prod.cofnt);
        else if(prod.cofnt==1)
            printf("\n");
        else if(prod.cofnt==-1)
            printf("\n-");
        else
            printf("\n%d",prod.cofnt);
        
        if(prod.exp==1)
            printf("x\n");
        else if(prod.exp==0)
            printf("\n");
        else        
            printf("x^%d\n",prod.exp);
    }else
        printf("\n0\n");

    // printf("%d exp: %d\n",prod.cofnt,prod.exp);
}