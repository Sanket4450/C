# include <stdio.h>

void printAdd(int x){  // We can write function definition here
    printf("The adress of a is : %p \n", &x);
}

// function call by reference to change the value of a variable to ten times

int tentimes(int *x){

    return (10 * *x);
}

// function to calculate the sum & average of two numbers using pointers

void sumAndavg(int a, int b, int *sum, float *avg){

    *sum = a + b;
    *avg = (float) *sum / 2;
}

int main(){

    // print the adress of a variable

    int a = 4;
    int *ptr;
    ptr = &a;

    printf("The value of variable a is : %d \n", a);
    printf("The adress of variable a is : %p \n", ptr);
    printf("The value of variable a is : %d \n \n", *ptr);

    // Will the adresses of normal variable and function variable be the same ?

    int e = 6;

    printf("The value of i is : %d \n", e);
    printAdd(e);
    printf("The adress of a is : %p \n \n", &e);  // No, the adresses are diffrent

    // change the value of a variable ten times

    int b;
    printf("Enter a value : ");
    scanf("%d", &b);

    printf("The value of 10 * %d is : %d \n \n", b, tentimes(&b));

    // sum & average of two numbers

    int i, j, sum;
    float avg;

    printf("Enter value of i : ");
    scanf("%d", &i);

    printf("Enter value of j : ");
    scanf("%d", &j);

    sumAndavg(i, j, &sum, &avg);

    printf("The sum of %d & %d is : %d \n", i, j, sum);
    printf("The average of %d & %d is : %f \n", i, j, avg);

    return 0;
}