# include <stdio.h>

int main(){

    // Write a C program to convert specified days into years, weeks and days.

    int day;
    printf("Enter number of days : ");
    scanf("%d", &day);

    int years, weeks, days;

    years = day / 365;
    weeks = (day % 365) / 7;
    days = ((day % 365) % 7) / 1;

    printf("%d years, %d weeks & %d days \n", years, weeks, days);

    return 0;
}