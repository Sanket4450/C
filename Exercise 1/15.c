# include <stdio.h>

int main(){

    // write a program to find GCD of two numbers

    int num1, num2, gcd;
    printf("Enter two numebrs : ");
    scanf("%d %d", &num1, &num2);

    for (int i = 1; i <= num1 && i <= num2; i++){

        if (num1 % i == 0 && num2 % i == 0){
            gcd = i;
        }
    }   printf("G.C.D. of %d & %d is %d \n", num1, num2, gcd);

    return 0;
}