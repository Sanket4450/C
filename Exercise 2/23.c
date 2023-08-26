# include <stdio.h>

int main(){

    // Write a program to reverse a number.

    int number, reverse = 0;
    printf("Enter a number : ");
    scanf("%d", &number);

    printf("\nOriginal Number : %d \n", number);

    while (number != 0){

        reverse = reverse * 10 + number % 10;
        number /= 10;
    }
    printf("Reversed Number : %d \n", reverse);

    return 0;
}