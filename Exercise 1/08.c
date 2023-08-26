# include <stdio.h>

int main(){

    // Write a C program that reads 5 numbers and sums all odd values between them.

    int num1, num2, num3, num4, num5;

    printf("Enter five numbers : ");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

    int sum = 0;

    if (!(num1 % 2 == 0)) sum = sum + num1;
    if (!(num2 % 2 == 0)) sum = sum + num2;
    if (!(num3 % 2 == 0)) sum = sum + num3;
    if (!(num4 % 2 == 0)) sum = sum + num4;
    if (!(num5 % 2 == 0)) sum = sum + num5;

    printf("The sum of all odd numbers is : %d \n", sum);

    return 0;
}