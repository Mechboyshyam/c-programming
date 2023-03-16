// Program for game . Its fun game to find a random number
    // printf("Enter your guessed number\n");
    // scanf("%d",&number);

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int number, guess=1, attempt=1;
    srand(time(0));
    number = rand()%100 + 1;
    // printf("Your random number is %d",number);
    // Up to here the program for finding a random number
    do
    {
        printf("Guess the number between 1 to 100 \n");
        scanf("%d",&guess);

        if (number<guess)
        {
            printf("Lower number please!");
        }

        else if(number>guess){
            printf("Higher number please!");
        }

        else{
            printf("You guessed the number in %d attempts",attempt);
        }
        attempt++;
    } while (guess!=number);
    
     return 0;
}