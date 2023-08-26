# include <stdio.h>

// function call by value --> sending the values of arguments

int sum(int a, int b);

int main(){

    int x = 7, y = 5;

    printf("The values of x & y before function call are : %d & %d \n", x, y);
    printf("The value of 7 + 5 is : %d \n", sum(x, y));
    printf("The values of x & y after function call are : %d & %d \n", x, y);

    // The value of a & b remains the same after function call
    // We can't change the value of main's variables by function

    return 0;
}

int sum(int a, int b){

    int c = a + b;
    a = 4450;
    b = 865;

    return c;
}