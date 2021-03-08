#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int logBase10Estimate(int n);
int floor(float x);
int ceiling(float x);
int isAlNum(char ch);
int isAlpha(char ch);
int isUpper(char ch);
int isLower(char ch);
char toUpper(char ch);
char toLower(char ch);
int isPunctuation(char ch);
int toInteger(char st[]);
int power(int n);
float toFloat(char st[]);
int abs(int x);
void stringCopy(char src[], char dest[]);
bool substring(char s1[], char s2[]);
int stringCompare(char s1[], char s2[]);
void camelCase(char st[]);
void reverse(char st[]);
bool humbleNumber(int x);
int reverse2(int x);

int main(){
    int n = 456789;
    // printf("ans = %d\n",logBase10Estimate(n));

    // float x = 1.1;
    int x = 12326;
    // printf("ans = %d\n",floor(x));
    // printf("ans = %d\n",ceiling(x));
    // printf("ans = %d\n",abs(x));
    // printf("ans = %d\n",humbleNumber(x));
    // printf("%s",humbleNumber(x)==1? "It is a humble number.":"It is not a humble number.");
    // printf("ans = %d\n",reverse2(x));
    

    char ch = '!';
    // printf("ans = %d\n",isAlNum(ch));
    // printf("ans = %d\n",isAlpha(ch));
    // printf("ans = %d\n",isUpper(ch));
    // printf("ans = %d\n",isLower(ch));
    // printf("ans = %c\n",toUpper(ch));
    // printf("ans = %c\n",toLower(ch));
    // printf("ans = %d\n",isPunctuation(ch));

    // char st[32] = "20355503.25";
    char st[32] = "apples";
    // printf("ans = %d\n",toInteger(st));
    // printf("ans = %f\n",toFloat(st));
    // camelCase(st);
    // reverse(st);

    char dest[64],str[64]="Hello World!";
    // stringCopy(str,dest);

    // char s1[64]="happy",s2[64]="ppy";
    char s1[64]="hair",s2[64]="happy";
    // printf("ans = %d\n",substring(s1,s2));
    // printf("ans = %d\n",stringCompare(s1,s2));    

    return 0;
}

int logBase10Estimate(int n){
    int count=0;
	while(n>=10){
		n/=10;
		count++;
    }
	return count;
}
int floor(float x){
    if((int)x==x || x>=0)            
        return (int)x;
    return (int)x-1;   
}
int ceiling(float x){
    if(x>0)            
        return (int)x+1;
    return (int)x; 
}
int isAlNum(char ch){
    if ((ch>=48 && ch<=57) || (ch>=65 && ch<=90) || (ch>=97 && ch<=122))
        return 1;
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
int isPunctuation(char ch){
    switch(ch){
        case 33:
        case 46: 
        case 44:
        case 58:
        case 59:
        case 63:
            return 1;
        default:
            return 0;
    }
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
        printf("Not an integer and numerical string!\n");
        return 0;
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
float toFloat(char st[]){    
    int x = 0,checker=0,size,div=0;
    float res;

    size = strlen(st);

    for(int i = 0;i<size-1;i++){
        if(isPunctuation(st[i]))
            checker = 1;        
        if(checker){
            st[i]=st[i+1];
            div++;
        }
        x+=power(size-i-2)*(st[i]-48);
    }
    res = power(div);
    return x/res;
}
int abs(int x){
    if(x<0)
        return -1*x;
    return x;
}
void stringCopy(char src[], char dest[]){
    int size,i;
    size = strlen(src);
    for(i = 0; i<size;i++){
        dest[i] = src[i];
    }
    dest[i]='\0';

    printf("Dest: %s\n",dest);
}
bool substring(char s1[], char s2[]){
    int size1,size2,test = 0;

    size1 = strlen(s1);
    size2 = strlen(s2);

    for(int j = 0;j<size1;j++){
        if(test)
            break;
        test = 1;
        for(int i = 0;i<size2;i++){    
            if(s2[i]!=s1[i+j]){
                test = 0;
            }
        }        
    }
    if(test)
        return true;
    return false;
}
int stringCompare(char s1[], char s2[]){
    int size1, size2,max;
    size1 = strlen(s1);
    size2 = strlen(s2);

    if(size1<size2)
        max = size1;
    else
        max = size2;
    
    for(int i=0;i<max;i++){
        if(toLower(s1[i])>toLower(s2[i]))
            return 1;        
        else if(toLower(s1[i])<toLower(s2[i]))
            return -1;
        else
            continue;
    }
    return 0;
}
void camelCase(char st[]){
    int i;
    for(i=0;i<strlen(st);i++){
        if(i%2==0)
            st[i]=toUpper(st[i]);
        else
            st[i]=toLower(st[i]);
    }
    st[i] ='\0';

    printf("output = %s\n",st);
}
void reverse(char st[]){
    int lim = strlen(st);
    char a;
    for(int i=0; i<lim/2; i++){
        a = st[i];
        st[i] = st[lim-1-i];
        st[lim-1-i] = a;
    }
    
    printf("Output: %s\n",st);
}
bool humbleNumber(int x){
    while(x>=1){        
        if(x==1) return true;
        else if(x%2==0) x/=2;
        else if(x%3==0) x/=3;
        else if(x%5==0) x/=5;
        else if(x%7==0) x/=7;
        else break;        
    }
    return false;
}
int reverse2(int x){
    int copy = x,size = 0,output=0;
    while(copy>=1){
        copy/=10;
        size++;
    }
    for(int i = size-1; i>=0;i--){
        output += (x%10)*power(i);
        x = floor(x/10);
    }
    return output;
}