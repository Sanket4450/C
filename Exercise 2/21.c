# include <stdio.h>

int main(){

    // Write a C program to print a number, its square and cube, starting with 1 and printing n lines\
    Accept the number of lines (n, integer) from the user.

    int lines;
    printf("Enter number of lines : ");
    scanf("%d", &lines);

    for (int i = 1; i <= lines; i++){

        printf("%d %d %d \n", i, i * i, i * i * i);
    }

    return 0;
}