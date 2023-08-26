# include <stdio.h>

int main(){

    // Write a program in C to display the sum of the series [ 9 + 99 + 999 + 9999 ...].

    int n;
    long t = 9, sum = 0;

    printf("Enter number of terms : ");
    scanf("%d", &n);
    printf("\n");

    for (int i = 1; i <= n; i++){

        printf("%ld + ", t);
        sum += t;
        t = t * 10 + 9;
    }
    printf("\nThe Sum is : %ld \n", sum);

    return 0;
}