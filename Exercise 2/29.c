# include <stdio.h>

int main(){

    // Write a program in C to display the cube of the number up to an integer.

    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){

        printf("Cube of %d is %d \n", i, i * i * i);
    }

    return 0;
}