# include <stdio.h>

int main(){

    // Write a program in C to find the number and sum of all integers between a specific range which are divisible by 9.

    int r1, r2, sum = 0;

    printf("Enter range from : ");
    scanf("%d", &r1);

    printf("Enter range to : ");
    scanf("%d", &r2);

    printf("The numbers are : ");

    for (int i = r1; i <= r2; i++){

        if (i % 9 == 0){

            printf("%d, ", i);
            sum += i;
        }
    }
    printf("\nThe Sum is : %d \n", sum);

    return 0;
}