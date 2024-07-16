#include <stdio.h>
int main(){
    int secretnumber = 16;
    int guess;
    int guesslimit = 3;
    int guesscount = 0;
    int hint;

    while(guess != secretnumber && guesscount < guesslimit){
        if(guesscount != guesslimit){
            printf("\nguess the number you have 3 guesses:");
            scanf("%d", &guess);
            guesscount++;
            if (guess == secretnumber){
                break;}


            do{
                    printf("\nneed a hint? (1 for yes, 0 for no): ");
            scanf("%d", &hint);
                if(hint == 1){
                    printf("\nits between 12 to 18.\n");
                }
                    else if(hint == 0){
                        printf("\nokay, continue.\n");
                    }
                        else{
                            printf("\nwrong value, please provide 1 or 0\n");
                        }
            }while(hint != 1 && hint != 0);
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
