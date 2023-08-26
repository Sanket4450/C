# include <stdio.h>

int main(){

    // logical operators (&&, ||, !)

    // Program to check whether a person is an adult or not

    int age;
    printf("Enter your age : ");
    scanf("%d", &age);

    if (age >= 18 && age <= 35)    // && --> and
        printf("You are an adult \n");

    else printf("You aren't an adult \n");

    // Program to check whether a customer won a scratch card or not

    int model;
    printf("Enter your model number : ");
    scanf("%d", &model);

    if (model % 7 == 0 || model % 15 == 0)    // || --> or
        printf("Congratulations! You won a scratch card \n");

    else printf("Oops! You didn't win any scratch card \n");

    // Program to check whether a number is odd or not

    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    if (!num % 2 == 0)    // ! --> not
        printf("This is an odd number \n");

    else printf("This isn't an odd number \n");

    return 0;
}