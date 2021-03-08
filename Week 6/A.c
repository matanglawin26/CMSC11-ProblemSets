#include <stdio.h>
#include <math.h>

int main(){
    int seconds, copy;
    printf("Enter seconds: ");
    scanf("%d",&seconds);
    copy = seconds;
    int l[6] = {0,0,0,0,0,0};
    for(int i=5;i>=0;i--){
        // if(i == 5 || i == 4){
		// 	l[i]=seconds%60;
		// 	seconds=floor(seconds/60);
        // }
		// if(i == 3){
		// 	l[i]=seconds%24;
		// 	seconds=floor(seconds/24);
        // }
		// if(i == 2){
		// 	l[i]=seconds%30;
		// 	seconds=floor(seconds/30);
        // }
		// if (i == 1){
		// 	l[i]=seconds%12;
		// 	seconds=floor(seconds/12);
        // }
		// if(i == 0){
		// 	l[i]+=seconds;
        // }
        switch (i)
        {
        case 5:
        case 4:
            l[i]=seconds%60;
			seconds=floor(seconds/60);
            break;
        case 3:
            l[i]=seconds%24;
			seconds=floor(seconds/24);
            break;
        case 2:
            l[i]=seconds%30;
			seconds=floor(seconds/30);
            break;
        case 1:
            l[i]=seconds%12;
			seconds=floor(seconds/12);
            break;
        case 0:
            l[i]+=seconds;
            break;
        default:
            break;
        }
    }
    printf("%d second/s is %d year/s, %d month/s, %d day/s, %d hour/s, %d minute/s, %d second/s",copy,l[0],l[1],l[2],l[3],l[4],l[5]);

    return 0;
}