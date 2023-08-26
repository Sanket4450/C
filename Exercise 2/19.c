# include <stdio.h>

int main(){

    // Write a C program that finds all integer numbers that divide by 7 and have a remainder of\
    2 or 3 between two given integers.

    int num1, num2;
    printf("Enter two numbers : ");
    scanf("%d %d", &num1, &num2);

    for (int i = num1; i <= num2; i++){

        if (i % 7 == 2 || i % 7 == 3){
            printf("%d  ", i);
        }
    }

    return 0;
}