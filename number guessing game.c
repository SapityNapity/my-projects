#include <stdio.h>
#include <time.h>
int main(){
    srand(time(0));
    int secretnumber = rand() % 20 +1;
    int guess;
    int guesslimit = 3;
    int guesscount = 0;
    int hint;

    while(guess != secretnumber && guesscount < guesslimit){
            printf("\nguess the number you have %d guesses:", guesslimit - guesscount);
            scanf("%d", &guess);

                if(guess < 0 || guess > 20){
                printf("please stay between 1 to 20.");
                continue;
                }

                guesscount++;


                if(guess < secretnumber) {
            printf("The secret number is higher than your guess.\n");
        } else if(guess > secretnumber) {
            printf("The secret number is lower than your guess.\n");
        }
        }
             if(guess != secretnumber){
            printf("\nout of guesses");
        }
        else {
            printf("You win!\n");
        }
        getch();
            }


