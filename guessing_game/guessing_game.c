#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int user_guess, comp_guess = (rand() % 100) + 1, no_of_attempt = 0;
    printf("\nGuess the number\n");
    printf("\n%d\n", comp_guess);

    while(1){
        printf("\nPlease enter your guess between(1 to 100): ");
        scanf("%d", &user_guess);
        no_of_attempt++;
        
        if(user_guess > comp_guess){
            printf("\nGuess a smaller number.");
        }else if(user_guess < comp_guess){
            printf("\nGuess a bigger number.");
        }else{
            printf("\n\nYou guessed it correct in %d attempt!", no_of_attempt);
            break;
        }
    }
    return 0;
}