# include <stdio.h>

int main(){

    // Program to count number of digits in an integer

    long long int number;
    int count = 0;

    printf("Enter a number : ");
    scanf("%lld", &number);

    do {
        number /= 10;
        count++;
    } while (number != 0);

    printf("There are total %d digits in this number \n", count);

    return 0;
}