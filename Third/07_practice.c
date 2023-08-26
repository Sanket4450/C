# include <stdio.h>

int main(){

    // Program to find out whether a student is pass or fail; if it requires total 40% and 33% in each subject

    int physics;
    printf("Enter your Physics marks : ");
    scanf("%d", &physics);

    int chemistry;
    printf("Enter your Chemistry marks : ");
    scanf("%d", &chemistry);

    int maths;
    printf("Enter your Maths marks : ");
    scanf("%d", &maths);

    float percentage = (physics + chemistry + maths) / 3;

    if(percentage >= 40 && physics >= 33 && chemistry >= 33 && maths >= 33)
        printf("Your percentage is %f & you are PASS! \n", percentage);

    else printf("Your percentage is %f & you are FAIL! \n", percentage);

    // Calculate income tax paid by an employee to the government as per the slabs

    float income, tax = 0;
    printf("Enter your yearly income : ");
    scanf("%f", &income);

    if (income >= 250000 && income <= 500000){
        tax = tax + 0.05 * (income - 250000);    // 5% income tax
    }

    if (income >= 500000 && income <= 1000000){
        tax = tax + 0.20 * (income - 500000);    // 20% income tax
    }

    if (income >= 1000000){
        tax = tax + 0.30 * (income - 1000000);    // 30% income tax
    }

    printf("Your net income tax to be paid is : %f \n", tax);

    // Program to find whether a year entered by the user is a leap year or not

    int year;
    printf("Enter a year : ");
    scanf("%d", &year);

    if (year % 4 == 0){
        if (year % 100 == 0){
            if (year % 400 == 0) {
                printf("The year you entered is a leap year \n");
            }   else {
                printf("The year you entered isn't a leap year \n");
            }
        }   else {
            printf("The year you entered is a leap year \n");
        }
    }   else {
        printf("The year you entered isn't a leap year \n");
    }

    // Program to determine whether a character entered by the user is lowercase or not

    char ch;
    printf("Enter a character : ");
    scanf("%s", &ch);

    if (ch >= 'a' && ch <= 'z') {    // or if (ch >= 97 && ch <= 122)
        printf("The character is lowercase \n");
    }   else {
        printf("The character isn't lowercase \n");
    }

    // Program to find greatest of four numbers entered by the user

    int num1, num2, num3, num4;

    printf("Enter any four number : \n");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    if(num1 >= num2 && num1 >= num3 && num1 >= num4)
        printf("%d is the greatest number \n", num1);

    else if(num2 >= num1 && num2 >= num3 && num2 >= num4)
        printf("%d is the greatest number \n", num2);

    else if(num3 >= num1 && num3 >= num2 && num3 >= num4)
        printf("%d is the greatest number \n", num3);

    else if(num4 >= num1 && num4 >= num2 && num4 >= num3)
        printf("%d is the greatest number \n", num4);

    return 0;
}