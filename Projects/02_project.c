// Number Guessing Game...

# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main(){

    // 1st --> randum number generator --> includes <stdlib.h> and <time.h>

    int number, guess, n = 1;

    srand(time(0));             // Generates a diffrent number everytime 
    number = rand() % 100 + 1;    // Generates a randum number between 1 to 100
    
    // printf("The number is %d \n", number); --> shows the number on screen

    // keep running the loop until the number is guessed

    do{
        printf("Guess the number between 1 to 100 : ");
        scanf("%d", &guess);

        if (guess > number)
            printf("Lower number please! \n");

        else if (guess < number)
            printf("Higher number please! \n");
            
        else 
            printf("You guessed it in %d attempts \n", n);
            n++;

    }   while(guess != number);

    return 0;
}