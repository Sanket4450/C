# include <stdio.h>
# include <stdbool.h>  // for using boolean variables

int main(){

    // M1 --> double can print 15 desimal

    double pi = 3.1415926535897932384623;
    printf("The value of pi is : %.15lf \n \n", pi);

    // M2 --> we can change data type like this
    
    int a = 5, b = 6;
    int sum = a + b;
    printf("Average is : %f \n \n", (float) sum / 2);

    // M3 --> constant can't be changed

    int num = 10;
    num = 15;  // redefination of variable
    printf("The number is : %d \n", num);

    const int number = 625;
    // int number = 725;  const can't be changed or redefined
    printf("The number is : %d \n \n", number);

    // M4 --> %= and &=

    int num1 = 60;
    num1 %= 7;
    printf("%d ", num1);

    int num2 = 50;
    num2 &= 7;
    printf("%d \n \n", num2);

    // M5 --> sizeof operator shows the size of variable

    int myInt;
    float myFloat;
    double myDouble;
    char myChar;

    printf("%lu  ", sizeof(myInt));
    printf("%lu  ", sizeof(myFloat));
    printf("%lu  ", sizeof(myDouble));
    printf("%lu  ", sizeof(myChar));

    printf("\n \n");

    // M6  --> to use boolean variables we need to include <stdbool.h> library

    // Create boolean variables
    bool isProgrammingFun = true;
    bool isFishTasty = false;

    // Return boolean values
    printf("%d \n", isProgrammingFun);   // Returns 1 (true)
    printf("%d \n \n", isFishTasty);        // Returns 0 (false)

    // M7 --> string is used to print more than one character

    char character1[] = "SANKET TALAVIYA";  // we need to write number of character in []

    printf("%s \n \n", character1);

    // M8 --> \" \" is used to print double quote sentence

    printf("\"MY NAME IS KHAN\" \n \n");

    // M9 --> loop inside a loop called nested loop

    // Outer loop
    for (int i = 1; i <= 3; ++i) {
        printf("Outer : %d \n", i);  // Executes 3 times

    // Inner loop
    for (int j = 1; j <= 5; ++j) {
        printf("  Inner : %d \n", j);  // Executes 15 times (2 * 3)
    }
    }   printf("\n");

    // M10 --> using fgets() we can get multiple words as input

    char fullName[30];

    printf("Type your full name : ");
    fgets(fullName, sizeof(fullName), stdin);

    printf("\tHello %s", fullName);

    return 0;
}