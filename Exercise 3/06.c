# include <stdio.h>

int main(){

    // Write a C program to make such a pattern as a pyramid with an asterisk.

    int row, space;

    printf("Enter number of rows : ");
    scanf("%d", &row);
    space = row + 5; // it isn't mandatory to use +5

    for (int i = 1; i <= row; i++){

        for (int k = space; k >= 1; k--){

            printf(" ");
        }
        for (int j = 1; j <= i; j++){

            printf("* ");
        }
        printf("\n");
        space--;

    }

    return 0;
}