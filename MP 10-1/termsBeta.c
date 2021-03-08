#include <stdio.h>
#include <string.h>

void display(term);
int coef(char s[]);
int degree(char s[]);
int toInteger(char st[]);
int power(int n);
typedef struct{
    int cofnt,exp;
} term;

int main(){
    term num1,num2,prod;
    char s1[64],s2[64];
    // x 4x^3
    // 45 2x^3
    int t,size;
    scanf("%d",&t);
    size = t;
    term list[size];

    while(t--){
        fflush(stdin);
        scanf("%s %s",s1,s2);        
        prod.cofnt = coef(s1)*coef(s2);
        prod.exp = degree(s1)+degree(s2);
        list[t] = prod;
    }    
    printf("Output:");
    for(int i = size-1;i>=0;i--){        
        display(list[i]); 
        // if(prod.exp){
        //     printf("\n%dx^%d\n",prod.cofnt,prod.exp);
        // }else{        
        //     printf("\n%d\n",prod.cofnt);
        // }        
    }
    // char try[] = "40x^5";
    // printf("out1 c: %d\n",coef(try));
    // printf("out1 e: %d\n",degree(try));
    // printf("out2: %d\n",num2.cofnt);
    // num1.cofnt = coef(s1);
    // num2.cofnt = coef(s2);
    // num1.exp = degree(s1);
    // num2.exp = degree(s2);
    // printf("out1: %d\n",num1.exp);
    // printf("out2: %d\n",num2.exp);

    // printf("Prod cofnt: %d\n",prod.cofnt);
    // printf("Prod exp: %d\n",prod.exp);

    return 0;
}

int coef(char s[]){
    int len = strlen(s),i;
    char temp[10];
    for(i = 0; i < len;i++){
        if(s[i]=='x'){
            if(i==0)
                return 1;            
            break;
        }
        temp[i] = s[i];
    }
    temp[i] = '\0';
    return toInteger(temp);
}
int toInteger(char st[]){
    int x = 0,size;
    size = strlen(st);
    for(int i=0;i<size;i++){
        if(!(st[i]>=48 && st[i]<=57)){
            x = 0;
            break;
        }
        x+=power(size-i-1)*(st[i]-48);
    }
    if(x){
        return x;
    }else{
        return ;
    }
}
int power(int n){
    int net = 1;
    if(n){
        while(n--){
            net*=10;
        }
        return net;
    }
    return 1;
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
        return toInteger(temp);
    else
        return 0;
}
void display(term prod){
    if(prod.exp){
            printf("\n%dx^%d\n",prod.cofnt,prod.exp);
        }else{        
            printf("\n%d\n",prod.cofnt);
        }
}