# include <stdio.h>

int main(){

    // Write a C program that reads an integer between 1 and 12 and prints the month of the year in English.

    int month;
    printf("Enter a number of month (1 to 12) : ");
    scanf("%d", &month);

    switch (month){
    
    case 1 : printf("January \n");
        break;

    case 2 : printf("February \n");
        break;

    case 3 : printf("March \n");
        break;

    case 4 : printf("April \n");
        break;

    case 5 : printf("May \n");
        break;

    case 6 : printf("June \n");
        break;

    case 7 : printf("July \n");
        break;

    case 8 : printf("August \n");
        break;

    case 9 : printf("September \n");
        break;

    case 10 : printf("October \n");
        break;

    case 11 : printf("November \n");
        break;

    case 12 : printf("December \n");
        break;
    
    default : printf("not a valid month \n");
    }

    return 0;
}