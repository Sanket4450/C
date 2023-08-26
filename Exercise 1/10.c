# include <stdio.h>

int main(){

    // Write a C program to check whether a given integer is positive even, negative even, positive odd or\
    negative odd. Print even if the number is 0.

    int number;
    printf("Enter a number : ");
    scanf("%d", &number);

    if (number >= 0 && number % 2 == 0)
        printf("This is a positive even number \n");

    else if (number < 0 && number % 2 == 0)
        printf("This is a negative even number \n");

    else if (number >= 0 && number % 2 != 0)
        printf("This is a positive odd number \n");

    else if (number < 0 && number % 2 != 0)
        printf("This is a negative odd number \n");

    return 0;
}