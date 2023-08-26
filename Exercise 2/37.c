# include <stdio.h>

int main(){

    // Write a C program to check whether a given number is an Armstrong number or not.

    int num, sum = 0, r, temp;

    printf("Enter a number : ");
    scanf("%d", &num);
    temp = num;

    while (num > 0){

        r = num % 10;
        sum += (r * r * r);
        num = num / 10;
    }
    if (sum == temp)
        printf("%d is an armstrong number \n", temp);

    else printf("%d isn't an armstrong number \n", temp);

    return 0;
}