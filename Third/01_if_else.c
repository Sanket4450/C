# include <stdio.h>

int main(){

    // if, else statement
    // Program to check whether a number is even or odd

    int a;
    printf("Enter a number : ");
    scanf("%d", &a);

    if (a % 2 == 0){
        printf("%d is an even number \n", a);
    }

    else {
        printf("%d is an odd number \n", a);
    }   // else statement isn't necessary

    return 0;
}