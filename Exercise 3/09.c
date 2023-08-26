# include <stdio.h>

int main(){

    // Write a program in C to print Floyd's Triangle.

    int row, p, q;
    printf("Enter number of rows : ");
    scanf("%d", &row);

    for (int i = 1; i <= row; i++){

        if (i % 2 == 0){
            p = 1, q = 0;
        }
        else {
            p = 0, q = 1;
        }

        for (int j = 1; j <= i; j++){

            if (j % 2 == 0){
                printf("%d ", p);
            }
            else {
                printf("%d ", q);
            }
        }printf("\n");
    }

    return 0;
}