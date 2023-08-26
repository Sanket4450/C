# include <stdio.h>

int main(){

    // Write a program in C to make a pyramid pattern with numbers increased by 1.

    int row, space, l = 1;

    printf("Enter number of rows : ");
    scanf("%d", &row);
    space = row + 5; // used for allign space left

    for (int i = 1; i <= row; i++){

        for (int k = space; k >= 1; k--){

            printf(" ");
        }
        for (int j = 1; j <= i; j++){

            printf("%d ", l++);
        }
        printf("\n");
        space--;

    }

    return 0;
}