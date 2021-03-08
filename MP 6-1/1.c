#include <stdio.h>

int main(){
    int n, flip, count, m4, m7;

    count = 0;
    flip = 1;
    m4 = 0;
    m7 = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    int seq[n];

    for(int i = 0; i < n; i++){
        if(count == 2){
            if (flip)
                flip = 0;
            else
                flip = 1;
            
            count = 0;
        }
        if (flip){
            m4 += 4;
            seq[i] = m4;
        }else{
            m7 += 7;
            seq[i] = m7;
        }    
        count++;
        printf("%d ",seq[i]);
    }
    return 0;
}