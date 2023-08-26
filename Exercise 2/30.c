# include <stdio.h>

int main(){

    // Write a C program to display the n terms of odd natural numbers and their sum.

    int n, sum = 0;

    printf("Enter a number : ");
    scanf("%d", &n);

    printf("the odd numbers are : ");

    for (int i = 1; i <= n; i++){

        if (i % 2 != 0){  // (!(i % 2 == 0))

            printf("%d, ", i);
            sum += i;
        }
    }
    printf("\nSum of the odd numbers is : %d \n", sum);

    return 0;
}