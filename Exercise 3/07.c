# include <stdio.h>

int main(){

    // Write a C program to make such a pattern like a pyramid with a number which will repeat the number in the same row.

    int row, space;

    printf("Enter number of rows : ");
    scanf("%d", &row);
    space = row;

    for (int i = 1; i <= row; i++){

        for (int k = space; k >= 1; k--){

            printf(" ");
        }
        for (int j = 1; j <= i; j++){

            printf("%d ", i);
        }
        printf("\n");
        space--;
    }

    return 0;
}