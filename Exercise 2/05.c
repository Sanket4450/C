# include <stdio.h>
# include <math.h>

int main(){

    // Write a C program to find and print the square of all the even values from 1 to a specified value.

    int n;
    printf("Enter a value : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){

        if (i % 2 == 0){
            
            printf("%.2f \n", pow(i, 2));
        }
    }

    return 0;
}