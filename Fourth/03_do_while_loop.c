# include <stdio.h>

int main(){

    // do while loop --> executes the code & then checks the condition

    int i = 1;

    do{
        printf("The value of i is : %d \n", i);
        i++;
    }   while (i <= 8);

    // Program to print first n natural numbers using do-while loop

    int n, a = 1;
    printf("Enter n : ");
    scanf("%d", &n);

    do{
        printf("%d \n", a);
        a++;
    }   while (a <= n);

    return 0;
}