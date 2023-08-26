# include <stdio.h>

int main(){

    // Write a program to display factors of a number

    int number;
    printf("Enter a number : ");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++){

        if (number % i == 0){
            printf("%d ", i);
        }
    }   printf("\n");

    return 0;
}