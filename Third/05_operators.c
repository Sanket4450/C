# include <stdio.h>

int main(){

    // conditional (ternary) operators
    // if/else statement in one line

    int subs;
    printf("Enter the total number of subscribers : ");
    scanf("%d", &subs);

    (subs < 1000) ? printf("Your channel isn't eligible for monetisation \n") :
    printf("Your channel is eligible for monetisation \n");

    // multi statements in ternary operators

    int income;
    printf("Enter your yearly income : ");
    scanf("%d", &income);

    (income >= 0 && income < 500000) ? printf("You don't have to pay tax \n") :
    (income >= 500000 && income < 700000) ? printf("You have to pay 5 percent tax \n") :
    (income >= 700000 && income < 1000000) ? printf("You have to pay 10 percent tax \n") :
    printf("You have to pay 15 percent tax \n");

    // Program to check which youtube play button a youtuber have using ternary operator

    int subscribers;
    printf("Enter the total number of subscribers you have : ");
    scanf("%d", &subscribers);

    (subscribers >= 0 && subscribers < 100000) ? printf("You don't have any play button \n") :
    (subscribers >= 100000 && subscribers < 1000000) ? printf("You have a silver play button \n") :
    (subscribers >= 1000000 && subscribers < 10000000) ? printf("You have a silver & a gold play button \n") :
    (subscribers >= 10000000 && subscribers < 50000000) ? printf("You have a silver, a gold & a diamond play button \n") :
    (subscribers >= 50000000 && subscribers < 100000000) ? printf("You have a silver, a gold, a diamond & a ruby play button \n") :
    printf("You have all youtube play buttons \n");

    return 0;
}