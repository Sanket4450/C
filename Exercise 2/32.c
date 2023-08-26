# include <stdio.h>

int main(){

    // Write a program in C to display the n terms of a harmonic series and their sum.

    int n;
    float sum = 0;
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("\n");

    for (int i = 1; i <= n; i++){

        printf("1/%d + ", i);
        sum += (1 / (float)i);
    }
    printf("\nSum is : %f \n", sum);

    return 0;
}