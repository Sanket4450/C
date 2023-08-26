# include <stdio.h>

// function to calculate factorial of x

int factorial(int x);

int main(){

    int x;
    printf("Enter a number : ");
    scanf("%d", &x);

    printf("The factorial of %d is : %d \n", x, factorial(x));

    return 0;
}

int factorial(int x){

    printf("Calling factorial(%d) \n", x);

    if (x == 1 || x == 0){
        return 1;
    }
    else {
        return x * factorial(x - 1);
    }
}