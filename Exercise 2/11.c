# include <stdio.h>

int main(){

    // Write a program to find sum of all odd numbers between 1 to n

    int n, i = 1, sum = 0;
    printf("Enter a number : ");
    scanf("%d", &n);

    while (i <= n){

        if (i % 2 != 0){
            sum += i;
        }   i++;    // increment and decrement are written at the outside of if statement
         
    }   printf("The sum of all odd numbers is : %d \n", sum);

    return 0;
}