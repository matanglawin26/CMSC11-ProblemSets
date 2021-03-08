#include <stdio.h>

int main(){
    int month, day;
    printf("Enter birth month and day (separated by space): ");
    scanf("%d %d",&month, &day);
    char fortunes[12][100] = {
        "Someone whom you reject today, will reject you tomorrow.",
        "You are number 6! Who is number one?",
        "This will be a memorable month -- no matter how hard you try to forget it.",
        "Today is the tomorrow you worried about yesterday.",
        "Tomorrow will be canceled due to lack of interest.",
        "Tonight you will pay the wages of sin; Don't forget to leave a tip.",
        "What happened last night can happen again.",
        "You are a very redundant person, that's what kind of person you are.",
        "Write yourself a threatening letter and pen a defiant reply.",
        "You are confused; but this is your normal state.",
        "You are going to have a new love affair.",
        "You are not dead yet. But watch for further reports."
    };

    if(day<0 || day>31){
        printf("Please enter a valid day!");
        return 0;
    }

    // The set dates will be based on the 2021 zodiac sign dates by http://bit.ly/3hEANZs
    
    switch (month){
    case 1:
        if(day<=19){            
            printf("Your Zodiac Sign is Capricorn.\n");
            printf("Your fortune is: %s",fortunes[0]);
        }else{            
            printf("Your Zodiac Sign is Aquarius.\n");
            printf("Your fortune is: %s",fortunes[1]);
        }
        break;
    case 2:
        if(day<=18){
            printf("Your Zodiac Sign is Aquarius.\n");
            printf("Your fortune is: %s",fortunes[1]);
        }else{
            printf("Your Zodiac Sign is Pisces.\n");
            printf("Your fortune is: %s",fortunes[2]);
        }
        break;
    case 3:
        if(day<=20){
            printf("Your Zodiac Sign is Pisces.\n");
            printf("Your fortune is: %s",fortunes[2]);
        }else{
            printf("Your Zodiac Sign is Aries.\n");
            printf("Your fortune is: %s",fortunes[3]);
        }
        break;
    case 4:
        if(day<=19){
            printf("Your Zodiac Sign is Aries.\n");
            printf("Your fortune is: %s",fortunes[3]);
        }else{
            printf("Your Zodiac Sign is Taurus.\n");
            printf("Your fortune is: %s",fortunes[4]);
        }
        break;
    case 5:
        if(day<=20){
            printf("Your Zodiac Sign is Taurus.\n");
            printf("Your fortune is: %s",fortunes[4]);
        }else{
            printf("Your Zodiac Sign is Gemini.\n");
            printf("Your fortune is: %s",fortunes[5]);
        }
        break;
    case 6:
        if(day<=20){
            printf("Your Zodiac Sign is Gemini.\n");
            printf("Your fortune is: %s",fortunes[5]);
        }else{
            printf("Your Zodiac Sign is Cancer.\n");
            printf("Your fortune is: %s",fortunes[6]);
        }
        break;
    case 7:
        if(day<=22){
            printf("Your Zodiac Sign is Cancer.\n");
            printf("Your fortune is: %s",fortunes[6]);
        }else{
            printf("Your Zodiac Sign is Leo.\n");
            printf("Your fortune is: %s",fortunes[7]);
        }
        break;
    case 8:
        if(day<=22){
            printf("Your Zodiac Sign is Leo.\n");
            printf("Your fortune is: %s",fortunes[7]);
        }else{
            printf("Your Zodiac Sign is Virgo.\n");
            printf("Your fortune is: %s",fortunes[8]);
        }
        break;
    case 9:
        if(day<=22){
            printf("Your Zodiac Sign is Virgo.\n");
            printf("Your fortune is: %s",fortunes[8]);
        }else{
            printf("Your Zodiac Sign is Libra.\n");
            printf("Your fortune is: %s",fortunes[9]);
        }
        break;
    case 10:
        if(day<=23){
            printf("Your Zodiac Sign is Libra.\n");
            printf("Your fortune is: %s",fortunes[9]);
        }else{
            printf("Your Zodiac Sign is Scorpio.\n");
            printf("Your fortune is: %s",fortunes[10]);
        }
        break;
    case 11:
        if(day<=21){
            printf("Your Zodiac Sign is Scorpio.\n");
            printf("Your fortune is: %s",fortunes[10]);
        }else{
            printf("Your Zodiac Sign is Sagittarius.\n");
            printf("Your fortune is: %s",fortunes[11]);
        }
        break;
    case 12:    
        if(day<=21){
            printf("Your Zodiac Sign is Sagittarius.\n");
            printf("Your fortune is: %s",fortunes[11]);
        }else{
            printf("Your Zodiac Sign is Capricorn.\n");
            printf("Your fortune is: %s",fortunes[0]);
        }
        break;        
    default:
        printf("Please enter a valid month!");
        break;
    }
    
    return 0;
}