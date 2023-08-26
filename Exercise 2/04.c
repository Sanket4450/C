# include <stdio.h>
# include <stdbool.h>

int main(){

    // Write a program to check positive negative or zero using switch case

    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    switch (num > 0){

        case 1 : printf("The number is positive \n");
            break;

        case 0 :

        switch (num < 0){

            case 1 : printf("The number is negative \n");
                break;

            case 0 : printf("The number is zero \n");
                break;
        }
    }

    return 0;
}