# include <stdio.h>

int main(){

    // Write a program to print multiplication table of n

    int n, i = 1;
    printf("Enter a number : ");
    scanf("%d", &n);

    do {
        int table = n * i;
        printf("%d X %d = %d \n", n, i, table);
        i++;

    } while (i <= 10);

    return 0;
}