# include <stdio.h>

int main(){

    // Write a program to print fibonacci series for n terms

    int n, first = 0, second = 1, result;

    printf("Enter number of terms : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){

        if (i <= 1){
            result = i;
        }
        else {
            result = first + second;
            first = second;
            second = result;
        }
        printf("%d, ", result);
    }   printf("\n");

    return 0;
}