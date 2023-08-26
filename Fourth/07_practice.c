# include <stdio.h>

int main(){

    // Print multiplication table of a number given by the user

    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    printf("Table of %d : \n", n);

    for (int a = 1; a <= 10; a++){
        printf("%d x %d = %d \n", n, a, a * n);
    }

    printf("\n");

    // Print multiplication table of 10 in reversed order

    printf("Table of 10 in reverse : \n");

    for (int b = 10; b; b--){
        printf("%d x %d = %d \n", 10, b, b * 10);
    }

    // Print sum of first ten natural numbers using while loop

    int i = 1, sum = 0;

    while (i <= 10){
        sum = sum + i;  // sum += i;
        i++;
    }
    printf("The sum of first ten natural numbers is : %d \n", sum);

    // Program to calculate the sum of the numbers occurring in the multiplication table of 8

    int sum1 = 0;

    for (int j = 1; j <= 10; j++){
        sum1 = sum1 + j * 8;
    }
    printf("The sum of the multiplication table 8 is : %d \n", sum1);

    // Program to calculate the factorial of a given number using for loop

    int factorial = 1;

    for (int k = 1; k <= 8; k++){  // factorial of 8
        factorial = factorial * k;  // factorial *= k;
    }
    printf("The factorial of 8 is : %d \n", factorial);

    // above program using while loop

    int k = 1; factorial = 1;   // redefination of factorial

    while (k <= 6){      // factorial of 6
        factorial *= k;  // factorial = factorial * k
        k++;
    }
    printf("The factorial of 6 is : %d \n", factorial);

    // above program using do-while loop

    k = 1, factorial = 1;

    do {
        factorial *= k;
        k++;
    }   while (k <= 10);
    printf("The factorial of 10 is : %d \n", factorial);

    // Program to check whether a given number is prime or not

    int n1, prime = 1;
    printf("Enter a number : ");
    scanf("%d", &n1);

    for (int l = 2; l < n1; l++){   // l <= n1; --> Wrong
        if (n1 % l == 0){
            prime = 0;
            break;
        }
    }   if (prime == 0){
            printf("This isn't a prime number \n");
        }
        else {
            printf("This is a prime number \n");
        }

    return 0;
}