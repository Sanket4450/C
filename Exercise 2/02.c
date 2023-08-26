# include <stdio.h>

int main(){

    // Write a C program that prints all even numbers between 1 and 50 (inclusive).

    // 1st way to make this...

    for (int i = 1; i <= 50; i++){

        if (i % 2 == 0)
            printf("%d ", i);
    }   printf("\n \n");

    // 2nd way to make this...

    for (int i = 2; i <= 50; i += 2)
        printf("%d ", i);
        printf("\n");

    return 0;
}