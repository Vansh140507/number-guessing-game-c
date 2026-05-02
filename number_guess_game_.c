#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    int guess;
    int secret_number = rand() % 100 + 1;
    
    printf("NUMBER GUESSING GAME\n");
    printf("I have picked a number between 1 and 100\n");
    
    while(1){
        printf("Enter your guess: ");
        scanf("%d", &guess);
        
        if(guess > secret_number){
            printf("Lower! Try Again.\n");
        }
        else if(guess < secret_number){
            printf("Higher! Try Again.\n");
        }
        else{
            printf("Correct! You got it.\n");
            break;
        }
    }
    
    return 0;
}