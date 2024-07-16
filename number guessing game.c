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
        if(guesscount != guesslimit){
            printf("\nguess the number you have 3 guesses:");
            scanf("%d", &guess);
            guesscount++;
                if(guess < secretnumber){
                printf("the secret number is higher than the one you provided.");
                }
                else if(guess > secretnumber){
                    printf("the secret number is lower than the one you provided");
                }
                }
                else{}
            }
                if(guess != secretnumber){
            printf("out of guesses");
        }
        else{
            printf("you win");
        }
        getch();

        }
