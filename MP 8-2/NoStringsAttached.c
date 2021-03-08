#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void hexToDec();
int conv(char c);
void substr();
void count();

int main(){
    int n, output;
    printf("1. Hexadecimal to Decimal\n");
    printf("2. Substring\n");
    printf("3. Count Words\n");
    printf("Select a task: ");
    fflush(stdin);
    scanf("%d",&n);
    printf("\n");

    switch(n){
    case 1:
        printf("\"Hexadecimal to Decimal\"\n");
        hexToDec();
        break;
    case 2:
        printf("\"Substring\"\n");
        substr();
        break;
    case 3:
        printf("\"Count Words\"\n");
        count();
        break;
    default:
        printf("Please enter a valid option.\n");
        main();
        break;
    }
    return 0;
}

void hexToDec(){
    char hex[16];
    int size,dec = 0,output,checker = 0,convert, new;
    int temp;
    while(1){
        printf("Enter Hex: ");
        scanf("%s",&hex);

        size = strlen(hex)-1; 

        for(int i=0;i<=size;i++){
            if(hex[i]>=65&&hex[i]<=90)
                hex[i]=hex[i]+32;
        }
        for(int i = size; i>=0;i--){
            convert = hex[i];
            new = convert-48;
            if(new<10){
                dec += pow(16,size-i)*new;
            }
            else{            
                if(conv(hex[i])){
                    dec += pow(16,size-i)*conv(hex[i]);
                }else{
                    dec = 0;
                    break;
                }
            }
        }

        if(dec==0){
            printf("\nPlease enter a valid hexadecimal number.\n");
        }else{
            break;
        }
    }
    printf("Decimal Equivalent: %d",dec);
}
int conv(char c){    
    int d = c;
    char lower;

    if(d>=65&&d<=90)
        d+=32;
    lower = d;

    switch(lower){
        case 'a':
            return 10;
        case 'b':
            return 11;
        case 'c':
            return 12;
        case 'd':
            return 13;
        case 'e':
            return 14;
        case 'f':
            return 15;
        default:
            return 0;
    }
    
}

void substr(){
    int flag=0,size1,size2;
    char st1[64],st2[64];
    
        printf("Enter valid string: ");
        scanf("%s",&st2);
        printf("Enter substring you want to find: ");
        scanf("%s",&st1);

        size1 = strlen(st1);
        size2 = strlen(st2);

        if(size2>=size1){
            for(int j = 0;j<size2;j++){
                if(flag)
                    break;
                flag = 1;
                for(int i = 0;i<size1;i++){    
                    if(st1[i]!=st2[i+j]){
                        flag = 0;
                    }
                }
            }
        }
        if(flag){
            printf("\nYes, %s is a substring of %s.\n",st1,st2);
        }else{
            printf("\nNo, %s is not a substring of %s.\n",st1,st2);
        }

}

void count(){
    int size,count=0;
    char string[256],copy[256];

    fflush(stdin);

    printf("Enter a string: ");
    scanf("%[^\n]",&string);

    size = strlen(string);

    for(int i = 0; i<size;i++){
        copy[i]=string[i];
    }
    
    for (int i=0; string[i]!='\0'; i++){ 
        if(string[i]==' ' && (string[i+1]>32 && string[i+1]<=126)) 
            count++; 
        else if (i==0)
            if (string[0]>32 && string[0]<=126) 
                count++;
    }

    printf("\"%s\" has %d words.\n",copy,count);
}