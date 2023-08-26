# include <stdio.h>

int main(){

    // else if clause

    // Program to check whether a student won any prize or not

    int rank;
    printf("Enter your rank (1 to 50) : ");
    scanf("%d", &rank);

    if (rank == 1)
        printf("Congratulations! You won the first prize \n");

    else if (rank == 2)
        printf("Congratulations! You won the second prize \n");

    else if (rank == 3)
        printf("Congratulations! You won the third prize \n");

    else if (rank >= 4 && rank <= 50)
        printf("Wait for the next opportunity \n");

    else printf("not a valid rank! \n");

    return 0;
}