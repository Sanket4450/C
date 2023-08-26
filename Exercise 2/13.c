# include <stdio.h>

int main(){

    // Write a program to find sum of first and last digit of a number.

    int num, firstDigit, lastDigit;

    printf("Enter a number : ");
    scanf("%d", &num);

    lastDigit = num % 10;

    while (num >= 10){

        num /= 10;
    }   firstDigit = num;

    printf("The sum of first and last digit is : %f \n", (float)(firstDigit + lastDigit) / 2);

    return 0;
}