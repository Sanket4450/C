# include <stdio.h>

int main(){

    //scanf is used to get input from the user

    int a, b;

    printf("Enter the value of a : ");
    scanf("%d", &a);

    printf("Enter the value of b : ");
    scanf("%d", &b);

    printf("The sum of %d & %d is : %d \n", a, b, a + b);

    // Here, we wrote three %d where 'a' is for 1st %d, 'b' is for 2nd and 'a + b' is for 3rd

    return 0;
}