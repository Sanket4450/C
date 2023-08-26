# include <stdio.h>

int main(){

    // for loop

    for (int i = 1; i <= 10; i++){
        printf("%d \n", i);
    }

    // Program to print first n natural numbers using for loop

    int n;
    printf("Enter n : ");
    scanf("%d", &n);

    for (int a = 1; a <= n; a++){
        printf("%d \n", a);
    }

    // decrementing for loop

    for (int b = 8; b >= 1; b--){
        printf("%d ", b);
    }

    return 0;
}