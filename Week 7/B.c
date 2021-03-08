#include <stdio.h>

int main(){
    float rf;
    printf("Enter rainfall (in mm): ");
    scanf("%f",&rf);

    if(rf<2.5){
        printf("Light rain.");
    }else if(rf>=2.5 && rf<=7.5){
        printf("Moderate rain.");
    }else if(rf>7.5 && rf<=15){
        printf("Heavy rain.\n");
        printf("Yellow warning!\n");
        printf("Flooding is Possible!");
    }else if(rf>15 && rf<=30){
        printf("Intense rain.\n");
        printf("Orange warning!\n");
        printf("Flooding is Threatening!");
    }else{
        printf("Torrential rain.\n");
        printf("Red warning!\n");
        printf("Flooding is Serious!\n");
        printf("Residents in low lying areas are advised to evacuate.");
    }
    return 0;
}