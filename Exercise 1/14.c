# include <stdio.h>

int main(){

    // Write a program to check whether a year is leap year or not

    int year;
    printf("Enter a year : ");
    scanf("%d", &year);

    if (year % 400 == 0)
        printf("This is a leap year \n");

    else if (year % 100 == 0)
        printf("This isn't a leap year \n");

    else if (year % 4 == 0)
        printf("This is a leap year \n");

    else printf("This isn't a leap year \n");

    return 0;
}