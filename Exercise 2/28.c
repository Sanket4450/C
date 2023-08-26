# include <stdio.h>

int main(){

    // Write a program in C to read 10 numbers from the keyboard and find their sum and average.

    int num[10], sum = 0;
    float average;

    for (int i = 0; i < 10; i++){

        printf("Enter number : ");
        scanf("%d", &num[i]);

        sum += num[i];
    }
    printf("Sum is     : %d \n", sum);

    average = (float)sum / 10;
    printf("Average is : %.2f \n", average);

    return 0;
}