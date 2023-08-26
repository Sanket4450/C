# include <stdio.h>

int main(){

    // Write a program to print all natural numbers from 1 to n

    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    int i = 1;

    while (i <= n){

        printf("%d ", i);
        i++;
    }
    
    return 0;
}