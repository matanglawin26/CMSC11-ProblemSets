#include <stdio.h>

#include <stdio.h>

int main(){
    int i, a, b,n;
    n = 37;

    for (i=0; i<=n; i++){
        if (i%2 == 0){ // for even places, a is used
            if (i==0)
                a=0;
            else a = a+b;

            if (i==n)
                printf("OUT: %d\n",a);
        }
        else { // for odd places, b is used
            if (i==1)
                b=1;
            else b = a+b;

            if (i==n)
                printf("OUT: %d\n",a);
        }
    }
    return 0;
}
// int main(){
//     int i, j, end, sum;

//     /* Input upper limit to print perfect number */
//     printf("Enter upper limit: ");
//     scanf("%d", &end);

//     printf("All Perfect numbers between 1 to %d:\n", end);
    
//     /* Iterate from 1 to end */
//     for(i=1; i<=end; i++){
//         sum = 0;
//         /* Check whether the current number i is Perfect number or not */
//         for(j=1; j<i; j++){
//             if(i % j == 0){
//                 sum += j;
//             }
//         }
 
//         /* If the current number i is Perfect number */
//         if(sum == i){
//             printf("%d, ", i);
//         }
//     }

//     return 0;
// }