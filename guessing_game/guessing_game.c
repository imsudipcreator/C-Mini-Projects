#include <stdio.h>

int main(){
    int user_guess, comp_guess, no_of_attempt;

    while(user_guess != comp_guess){
        printf("Please enter your guess between(1 to 100): ");
        scanf("%d", &user_guess);

        if(user_guess > comp_guess){
            printf("\nGuess a smaller number.");
        }else if(user_guess < comp_guess){
            printf("\nGuess a bigger number.");
        }
    }
    return 0;
}