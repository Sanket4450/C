# include <stdio.h>

int main(){

    // Write a C program to print all numbers between 1 and 100 which are divided by a specified number\
    and the remainder will be 3.

    int number;
    printf("Enter a number : ");
    scanf("%d", &number);

    for (int i = 1; i <= 100; i++){

        if (i % number == 3){

            printf("%d ", i);
        }
    }
    return 0;
}