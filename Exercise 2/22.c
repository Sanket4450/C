# include <stdio.h>

int main(){

    // Write a program to Print sum of all odd numbers from 1 to n

    int n, sum = 0;
    printf("Enter a number : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){

        if (i % 2 != 0){

            sum += i;
        }
    }   printf("The sum of all odd numbers from 1 to %d is : %d \n", n, sum);

    return 0;
}