# include <stdio.h>

int main(){

    // Write a program in C to make such a pattern like a right angle triangle with a number which will repeat a number in a row.

    int row;
    printf("Enter number of rows : ");
    scanf("%d", &row);

    for (int i = 1; i <= row; i++){

        for (int j = 1; j <= i; j++){

            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}