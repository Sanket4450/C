# include <stdio.h>

int main(){

    // Write a program in C to find the sum of the series 1 + 11 + 111 + 1111 + .. n terms.

    int n;
    long t = 1, sum = 0;

    printf("Enter number of terms : ");
    scanf("%d", &n);
    printf("\n");

    for (int i = 1; i <= n; i++){

        printf("%ld + ", t);
        sum += t;
        t = t * 10 + 1;
    }
    printf("\nThe Sum is : %ld \n", sum);

    return 0;
}