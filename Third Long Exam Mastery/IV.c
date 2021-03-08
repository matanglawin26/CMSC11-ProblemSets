#include <stdio.h>

int main(){
    unsigned int cf,sum,n;
    scanf("%u",&n);

    for(cf=2,sum=1; cf*cf<=n;cf++){
        if(n%cf==0){
            if(cf*cf!=n)
                sum = sum + cf + n/cf;
            else
                sum = sum + cf;
        }
    if(sum == n && sum != 1)
        printf("%d is a perfect number.\n",n);
    else
        printf("%d is not a perfect number.\n",n);
    }
return 0;
}