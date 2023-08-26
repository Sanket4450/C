# include <stdio.h>

int main(){

    // C program to check whether the given integer is a prime number or not

    int num, prime = 1;
    printf("Enter a number : ");
    scanf("%d", &num);

    for (int i = 2; i < (num/2); i++){

        if (num % i == 0){
            prime = 0;  
        }
    }
    if (prime == 1)
        printf("%d is a prime number \n", num);

    else printf("%d isn't a prime number \n", num);

    return 0;
}