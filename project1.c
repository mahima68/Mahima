//guess a number 

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int number, guess, nguesses =1;
    srand(time(0)); //different no
    number = rand()% 100 + 1; //generates random no
    //printf("The number is %d\n" , number);

    do{
        printf("Guess the number between 1 to 100\n");
        scanf("%d" , &guess);
        if(guess>number) {
            printf("Lower number please\n");
        }
        else if(guess<number) {
        printf("Higher number please\n");
    }
    else {
        printf("You guessed it in %d attenpts\n", nguesses);
    }
    nguesses++;
    } while(guess!=number);
    return 0;
}
 
