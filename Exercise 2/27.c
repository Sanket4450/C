# include <stdio.h>

int main(){

    // Write a C program to compute the sum of the first 10 natural numbers.

    int n,sum = 0;

    printf("Enter a number : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
        sum += i;  // sum = sum + i;
    }
    printf("Sum of first %d natural numbers is : %d \n", n, sum);

    return 0;
}