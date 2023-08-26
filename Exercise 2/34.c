# include <stdio.h>

int main(){

    // Write a C program that displays the n terms of square natural numbers and their sum.

    int n, k, sum = 0;
    printf("Enter number of terms : ");
    scanf("%d", &n);
    printf("\n");

    for (int i = 1; i <= n; i++){

        printf("%d, ", i * i);
        sum += i * i;
    }
    printf("\nThe sum of all square numbers is : %d \n", sum);

    return 0;
}