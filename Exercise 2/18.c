# include <stdio.h>

int main(){

    // Write a C program to calculate the sum of all numbers not divisible by 6 between two given integer numbers.

    int num1, num2, sum = 0;
    printf("Enter two numbers : ");
    scanf("%d %d", &num1, &num2);

    for (int i = num1; i <= num2; i++) {

        if (i % 6 != 0){
            sum += i;
        }
    }   printf("The sum of all numbers not divisible by 6 is : %d \n", sum);

    return 0;
}