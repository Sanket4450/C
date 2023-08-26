# include <stdio.h>

int main(){

    // Write a program in C to make such a pattern like a right angle triangle with the number increased by 1.

    int row, k = 1;
    printf("Enter number of rows : ");
    scanf("%d", &row);

    for (int i = 1; i <= row; i++){

        for (int j = 1; j <= i; j++){

            printf("%d ", k++);
        }
        printf("\n");
    }

    return 0;
}