# include <stdio.h>

int main(){

    // Write a C program that reads 5 numbers, counts the number of positive numbers\
    and prints out the average of all positive values.

    int numbers[5], count = 0, total = 0, avg;

    printf("Enter any 5 numbers : ");
    scanf("%d %d %d %d %d", &numbers[0], &numbers[1], &numbers[2], &numbers[4], &numbers[5]);

    for (int i = 0; i < 5; i++){

        if (numbers[i] > 0){
            count++;
            total += numbers[i];
        }
    }   
    avg = total / count;

    printf("Count of all postive numbers is : %d \n", count);
    printf("Average of all positive numbers is : %d \n", avg);

    return 0;
}