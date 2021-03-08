#include <stdio.h>
#include <math.h>

void rev();
void palindrome();
void binSearch();
void digits();

int main(){
    int n, output;
    printf("1. Reverse\n");
    printf("2. Palindromic\n");
    printf("3. Search\n");
    printf("4. Count n-digit numbers\n");
    printf("5. Exit\n\n");
    printf("Select a task: ");
    fflush(stdin);
    scanf("%d",&n);
    printf("\n");

    switch(n){
    case 1:
        printf("\"Reverse\"\n");
        rev();
        break;
    case 2:
        printf("\"Palindromic\"\n");
        palindrome();
        break;
    case 3:
        printf("\"Search\"\n");
        binSearch();
        break;
    case 4:
        printf("\"Count n-digit numbers\"\n");
        digits();
        break;
    case 5:
        break;
    default:
        printf("Please enter a valid option.\n");
        main();
        break;
    }
    
    return 0;
}

void rev(){
    int arr[10];
    printf("Enter 10 positive integers (separated by space): ");

    for(int i = 9;i>=0;i--){
            scanf(" %d",&arr[i]);
        }   

    printf("\nOutput: ");
    for(int i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
    
}

void palindrome(){
    int checker = 1;
    int arr[10],pal[10];
    printf("Enter 10 positive integers (separated by space): ");

    for(int i = 9;i>=0;i--){
            scanf(" %d",&arr[i]);
        }   

    for(int i=0;i<10;i++){
        pal[i] = arr[9-i];
        if(arr[i]!=pal[i]){
            checker = 0;
        }
    }

    if(checker){
        printf("\nOutput: Palindromic");
    }else{
        printf("\nOutput: Not Palindromic");
    }
}

void binSearch(){
    int index = 0, high, low, mid,n,checker = 0;
    int arr[10];    
    
    while(1){        
        int test = 1;
        printf("\nEnter 10 positive integers in ascending order (Separated by space): ");

        for(int i = 0;i<10;i++){
            scanf(" %d",&arr[i]);
        }        

        for(int j = 0; j < 9; j++){
            if(arr[j + 1] < arr[j]){
                printf("Please enter a valid input.\n");
                test = 0;
                break;
            }
        }
        if(test){
            break;
        }
    }
    printf("Enter an integer that you want to find: ");
    scanf("%d",&n);

    high = 9;
    low = 0;

    while(1){
        if(high>=low){
            mid = floor((high+low)/2);
            if(arr[mid]>n){
                high = mid - 1;
            }else if(arr[mid]<n){
                low = mid + 1;
            }else{
                checker = mid+1;
                break;
            }
        }else{
            break;
        }
    }

    if(checker){
        printf("\n%d is in the array. Its index is %d.",n,checker-1);
    }else{
        printf("\n%d is not in the array.",n);
    }
}

void digits(){
    int arr[20], n, s=0,track=0,max,min,maxI,minI;
    int counter[10] = {0,0,0,0,0,0,0,0,0,0};

    printf("Enter 20 positive integers (separated by space): ");

    for(int i = 0;i<20;i++){
            scanf(" %d",&arr[i]);            
            if(arr[i]==0){
                arr[i]++;
            }
            int n = floor(log10(abs(arr[i]))) + 1;
            counter[n-1]++;
        }   

    max = counter[0];
    min = counter[0];    

    for(int i=0;i<9;i++){
        if(counter[i] > 0){
            if(counter[i]>=max){
                // printf("I: %d, counter[i]: %d > counter[i+1]: %d?\n",i,counter[i],counter[i+1]);
                max=counter[i];
                maxI=i+1;
            }
            if(counter[i]<=min){
                printf("i: %d, min: %d\n",i,counter[i]);
                min=counter[i];
                minI=i+1;
            }   
           s++;
        }
    }

    printf("\nThere are: ");
    for(int i=0;i<10;i++){
        if(counter[i] > 0){
            printf("%d %d-digit number(s)",counter[i],i+1);
            if(track<s-2){
                printf(", ");
            }else if(track == s-2){
                printf(", and ");
            }
            track++;
        } 
    } 
    printf("\nThe n-digit numbers that appeared the most: %d-digit number(s)",maxI);     
    printf("\nThe n-digit numbers that appeared the least: %d-digit number(s)",minI);     
}//10 9 131 09 23 90909 152151 1092849 8848 1241 998 124 0909 5156743 88818 09 5235 8 123 88885