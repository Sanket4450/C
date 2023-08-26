# include <stdio.h>

int main(){

    // Write a C program to print 3 numbers on a line, starting with 1 and printing n lines\
    Accept the number of lines (n, integer) from the user.

    int lines, x = 1, j = 1;
    printf("Enter number of lines : ");
    scanf("%d", &lines);

    for (int i = 1; i <= lines; i++){

        while(x <= 3){

            printf("%d", j++);
            x++;
        }
        x = 1;
        printf("\n");
    }

    return 0;
}