# include <stdio.h>

int main(){

    // Write a C program to display the pattern as a pyramid using asterisks, with each row containing an odd number of asterisks.

    int row;

    printf("Enter number of rows : ");
    scanf("%d", &row);

    for (int i = 1; i <= row; i++){

        for (int j = 1; j <= row - i; j++){

            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++){

            printf("*");
        }
        printf("\n");
    }

    return 0;
}