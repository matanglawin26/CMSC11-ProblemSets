#include <stdio.h>
#include <string.h>
#include <math.h>

int conv(char c);

int main(){
    int start,end,index,test=0,size1,size2;
    char st1[10],st2[10];
    
        printf("Enter valid string: ");
        scanf("%s",&st2);
        printf("Enter substring you want to find: ");
        scanf("%s",&st1);

        size1 = strlen(st1);
        size2 = strlen(st2);
        printf("S1: %d\n",size1);
        printf("S2: %d\n",size2);

        if(size2>=size1){
            for(int j = 0;j<size2;j++){
                if(test)
                    break;
                index = j;
                test = 1;
                for(int i = 0;i<size1;i++){    
                    if(st1[i]!=st2[index]){
                        test = 0;
                    }
                    index++;
                }
            }
        }
        
        if(test){
            printf("Yes, %s is a substring of %s\n",st1,st2);
        }else{
            printf("No, %s is not a substring of %s\n",st1,st2);
        }

        // if(st1[0]==st2[0]){
        //     printf("Noice");
        // }else{
        //     printf("Nope");
        // }
    return 0;
}

// int main(){
//     // char arr[]={'H','E','L','L','O','\0'};
//     int size,count=0;
//     char arr[256],copy[256];
//     printf("Enter a string: ");
//     scanf("%[^\n]",&arr);
//     size = strlen(arr);
//     // printf("%d\n",strlen(arr));

//     for(int i = 0; i<size;i++){
//         copy[i]=arr[i];
//     }

//     //     }
//     // }
//     char *token = strtok(arr, " "); 
    
//     // Keep printing tokens while one of the 
//     // delimiters present in str[]. 
//     while (token != NULL) 
//     { 
//         token = strtok(NULL, " "); 
//         count++;
//     } 
//     // for(int i = 9;i>=0;i--){
//     //         scanf(" %s",&arr[i]);
//     //     }   
//     printf("\"%s\" has %d words.\n",copy,count);
//     // printf("Output: ");
//     // for(int i=0;i<10;i++){
//     //     printf("%s ",arr[i]);
//     // }
//     // printf(arr);
//     // printf("%s\n",arr);
//     // for(i = 0; arr[i]!='\0';i++){
//     //     printf("%c\n",arr[i]);
//     // }
//     return 0;
// }

// Substr
// int main(){
//     int start,end,index,test=0,size1,size2;
//     char st1[10],st2[10];
    
//         printf("Enter valid string: ");
//         scanf("%s",&st2);
//         printf("Enter substring you want to find: ");
//         scanf("%s",&st1);

//         size1 = strlen(st1);
//         size2 = strlen(st2);
//         printf("S1: %d\n",size1);
//         printf("S2: %d\n",size2);

//         if(size2>=size1){
//             for(int j = 0;j<size2-2;j++){
//                 printf("J: %d\n",j);
//             // while(1){
//                 // index = start;
//                 // if (test || end>size2)
//                 //     break;
//                 test = 1;
//                 // printf("Index: %d\n",index);
//                 for(int i = 0;i<size1;i++){    
//                     // printf("Start: %d, End: %d, i: %d, test: %d\n",start,end,i,test);
//                     printf("%c == %c?\n",st1[i],st2[j]);
//                     if(st1[i]!=st2[j]){
//                         test = 0;
//                     }
//                     // index++;
//                     // printf("nice\n");
//                     j++;
//                 }
//                 // start++;
//                 // end++;
//             // }
//             }
//         }if(test){
//             printf("Yes, %s is a substring of %s\n",st1,st2);
//         }else{
//             printf("No, %s is not a substring of %s\n",st1,st2);
//         }

//         // if(st1[0]==st2[0]){
//         //     printf("Noice");
//         // }else{
//         //     printf("Nope");
//         // }
//     return 0;
// }

// Hex
// int main(){
//     char hex[16];
//     int size,dec = 0,output,checker = 0,convert, new;
//     int temp;
//     // while(1){
//         printf("Enter Hex: ");
//         scanf("%s",&hex);
//         // printf("Hex: ");

//         size = strlen(hex)-1;
//         // printf("%d\n",size);    
//         for(int i=0;i<=size;i++){
//             if(hex[i]>=65&&hex[i]<=90)
//                 hex[i]=hex[i]+32;
//         }
//         for(int i = size; i>=0;i--){
//             convert = hex[i];
//             new = convert-48;
//             // printf("%d %d\n",new,convert);
//             if(new<10){
//                 dec += pow(16,size-i)*new;
//                 // printf("Dec: %d, %d\n",dec,new);
//             }
//             else{            
//                 // temp = conv(tolower(hex[i]));
//                 // dec += pow(16,size-i)*conv(tolower(hex[i]));
//                 dec += pow(16,size-i)*conv(hex[i]);
//                 // new -=7;
//                 // dec += pow(16,size-i-1)*new;
//                 // printf("Dec: %d, %d, Temp: %d\n",dec,new, temp);
//             }
//             // // printf("%s and %i\n",hex[i],change-48);
//         }

//         if(dec == 0){
//             printf("\nEnter a valid hexadecimal number\n");
//         }else{
//             // break;
//         }
//     // }
//     printf("Decimal Equivalent: %d",dec);
//     // printf("%d",output);   
//     return 0;
// }

int conv(char c){    
    int d = c;
    if(d>=65&&d<=90)
            d+=32;
    char lower = d;

    if(lower=='a'){
        return 10;
    }else if (lower=='b'){
        return 11;
    }else if (lower=='c'){
        return 12;
    }else if (lower=='d'){
        return 13;
    }else if (lower=='e'){
        return 14;
    }else if (lower=='f'){
        printf("Sud");
        return 15;
    }else{
        return 0;
    }
    
}