# include <stdio.h>

int main(){

    // Write a program to find LCM of two numbers

    int num1, num2, gcd, lcm;
    printf("Enter two numbers : ");
    scanf("%d %d", &num1, &num2);

    for (int i = 1; i <= num1 && i <= num2; i++){

        if (num1 % i == 0 && num2 % i == 0){
            gcd = i;
        }
    }
    lcm = (num1 * num2) / gcd; // equation to convert gcd into lcm
    
    printf("L.C.M. of %d & %d is %d \n", num1, num2, lcm);

    return 0;
}