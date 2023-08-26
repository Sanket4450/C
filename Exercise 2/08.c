# include <stdio.h>

int main(){

    // Write a C program to check whether a number entered by the user is even or odd.

    int number;
    printf("Enter a number : ");
    scanf("%d", &number);

    switch (number % 2){

        case 0 : printf("This is an even number \n");
            break;

        case 1 : printf("This is an odd number \n");
            break;

        case -1 : printf("This is an odd number \n");
            break;
    }

    return 0;
}