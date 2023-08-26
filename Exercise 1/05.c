# include <stdio.h>

int main(){

// Write a C program that accepts three integers and finds the maximum of three.

    int a, b, c;

    printf("Enter three numbers : ");
    scanf("%d %d %d", &a, &b, &c);

    if(a >= b && a >= c)
        printf("%d is the maximum number \n", a);

    else if(b >= a && b >= c)
        printf("%d is the maximum number \n", b);

    else if(c >= a && c >= b)
        printf("%d is the maximum number \n", c);

        return 0;

}