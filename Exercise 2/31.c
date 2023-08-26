# include <stdio.h>

int main(){

    // Write a C program to calculate the factorial of a given number.

    int num;
    long long fact = 1;

    printf("Enter a number : ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++){
        fact *= i;
    }
    printf("Factorial of %d is %lld \n", num, fact);

    return 0;
}