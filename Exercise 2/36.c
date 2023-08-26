# include <stdio.h>

int main(){

    // Write a C program to check whether a given number is a 'Perfect' number or not.

    int n, sum = 0;

    printf("Enter a number : ");
    scanf("%d", &n);

    for (int i = 1; i <= (n / 2); i++){

        if (n % i == 0){
            sum += i;
        }
    }
    
    if (sum == n)
        printf("%d is a perfect number \n", n);

    else printf("%d isn't a perfect number \n", n);

    return 0;
}