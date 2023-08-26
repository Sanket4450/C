# include <stdio.h>

int main(){

    // Write a C program to read an amount (integer value) and break the amount into\
    the smallest possible number of bank notes & coins.

    int amount;
    printf("Enter an amount : ");
    scanf("%d", &amount);

    int fiveh, twoh, oneh, fifty, twenty, ten, five, two, one;

    fiveh = amount / 500;
    twoh = (amount % 500) / 200;
    oneh = ((amount % 500) % 200) / 100;
    fifty = (((amount % 500) % 200) % 100) / 50;
    twenty = ((((amount % 500) % 200) % 100) % 50) / 20;
    ten = (((((amount % 500) % 200) % 100) % 50) % 20) / 10;
    five = ((((((amount % 500) % 200) % 100) % 50) % 20) % 10) / 5;
    two = (((((((amount % 500) % 200) % 100) % 50) % 20) % 10) % 5) / 2;
    one = ((((((((amount % 500) % 200) % 100) % 50) % 20) % 10) % 5) % 2) / 1;

    if (fiveh > 0) printf("%d notes of 500 Rs \n", fiveh);
    if (twoh > 0) printf("%d notes of 200 Rs \n", twoh);
    if (oneh > 0) printf("%d notes of 100 Rs \n", oneh);
    if (fifty > 0) printf("%d notes of 50 Rs \n", fifty);
    if (twenty > 0) printf("%d notes of 20 Rs \n", twenty);
    if (ten > 0) printf("%d notes of 10 Rs \n", ten);
    if (five > 0) printf("%d coins of 5 Rs \n", five);
    if (two > 0) printf("%d coins of 2 Rs \n", two);
    if (one > 0) printf("%d coins of 1 Rs \n", one);

    return 0;
}