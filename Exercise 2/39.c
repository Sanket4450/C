# include <stdio.h>

int main(){

    // Write a program in C to display the number in reverse order.

    int num, i, r, sum = 0;

    printf("Enter a number : ");
    scanf("%d", &num);

    for(i = num; num != 0; num /= 10){

        r = num % 10;
        sum = sum * 10 + r;
    }
    printf("\nOriginal : %d \n", i);
    printf("Reversed : %d \n", sum);

    return 0;
}