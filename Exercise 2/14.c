# include <stdio.h>

int main(){

    // Program to find sum of digits of a number.

    int num, sum = 0;
    printf("Enter a number : ");
    scanf("%d", &num);

    while (num != 0) // repeat till number becomes 0
    {
        sum += num % 10; // finding last digit of number & add to sum
        num /= 10; // remove last digit from number
    }
    printf("The sum of all digits of the number is : %d \n", sum);

    return 0;
}