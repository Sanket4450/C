# include <stdio.h>

int main(){

    // Write a program in C to find the prime numbers within a range of numbers.

    int num, prime = 0, start, end;

    printf("Enter starting number : ");
    scanf("%d", &start);

    printf("Enter ending number : ");
    scanf("%d", &end);

    printf("Prime numbers between %d & %d are : \n", start, end);

    for (num = start; num <= end; num++){
        prime = 0;

        for (int i = 2; i <= (num / 2); i++){

            if (num % i == 0){
                prime++;
                break;
            }
        }   
            if (prime == 0 && num != 1){
                printf("%d, ", num);
            }
    }   printf("\n");

    return 0;
}