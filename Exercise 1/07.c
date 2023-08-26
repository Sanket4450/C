# include <stdio.h>

int main(){

    // Write a C program to convert a given integer (in seconds) to hours, minutes and seconds.

    int second;
    printf("Enter time in seconds : ");
    scanf("%d", &second);

    int hours, minutes, seconds;

    hours = second / 3600;
    minutes = (second % 3600) / 60;
    seconds = ((second % 3600) % 60) / 1;

    printf("%d hours, %d minutes & %d seconds \n", hours, minutes, seconds);
    
    return 0;
}