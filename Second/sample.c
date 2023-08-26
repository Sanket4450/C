# include <stdio.h>

int main() {

    // arithmetic operators

    // addition operator (+)
    printf("12 + 10 = %d \n", 12 + 10);

    // subtraction operator (-)
    printf("12 - 10 = %d \n", 12 - 10);

    // multiplication operator (*)
    printf("12 * 10 = %d \n", 12 * 10);

    // division operator (/)
    printf("12 / 10 = %.2f \n", 12.0 / 10);

    // modulus operator (%)
    printf("12 modulus 10 = %d \n", 12 % 10);

    // assignment operators

    // assignment operator
    int a;
    a = 24;
    printf("%d \n", a);

    int x, y, z;
    y = 12, z = 30;
    x = y;
    printf("%d %d %d \n", x, y, z);

    // addition assignment operator
    int number1 = 10;
    number1 += 5; // number1 = number1 + 5;
    printf("%d \n", number1);

    // subtraction assignment operator
    int number2 = 10;
    number2 -= 5; // number2 = number2 - 5;
    printf("%d \n", number2);

    // multiplication assignment operator
    int number3 = 10;
    number3 *= 5; // number3 = number3 * 5;
    printf("%d \n", number3);

    // division assignment operator
    int number4 = 10;
    number4 /= 5; // number4 = number4 / 5;
    printf("%d \n", number4);

    // modulus assignment operator
    int number5 = 10;
    number5 %= 5; // number5 = number5 % 5;
    printf("%d \n", number5);

    // comparison operators

    // equal to operator
    int number6 = 15;
    int number7 = 15;
    printf("%d \n", number6 == number7);

    int number8 = 10;
    int number9 = 5;
    printf("%d \n", number8 == number9);

    // not equal operator
    int number10 = 10;
    int number11 = 5;
    printf("%d \n", number10 != number11);

    int number12 = 10;
    int number13 = 10;
    printf("%d \n", number12 != number13);

    // greater than operator
    int number14 = 20;
    int number15 = 10;
    printf("%d \n", number14 > number15);

    // less than operator
    int number16 = 20;
    int number17 = 10;
    printf("%d \n", number16 < number17);

    // greater than or equal to operator
    int number18 = 20;
    int number19 = 20;
    printf("%d \n", number18 >= number19);

    // less than or equal to operator
    int number20 = 20;
    int number21 = 20;
    printf("%d \n", number20 <= number21);

    // logical operators

    // logical and operator
    printf("%d \n", (12 == 12) && (20 > 18));
    printf("%d \n", (12 == 10) && (20 > 18));
    printf("%d \n", (12 == 12) && (20 > 25));
    printf("%d \n", (12 == 10) && (20 > 25));

    // logical or operator
    printf("%d \n", (12 == 12) || (20 > 18));
    printf("%d \n", (12 == 10) || (20 > 18));
    printf("%d \n", (12 == 12) || (20 > 25));
    printf("%d \n", (12 == 10) || (20 > 25));

    // logical not operator
    printf("%d \n", !((12 == 12) && (20 > 18)));
    printf("%d \n", !((12 == 10) || (20 > 18)));
    printf("%d \n", !(12 == 12) || (20 > 25));
    printf("%d \n", !((12 == 10) && (20 > 25)));

    // practice

    int num1 = 25;
    int num2 = 30;
    int num3 = 40;
    int num4 = 100;
    int num5 = 120;

    int num = (!(num1 == num2) && (num4 <= num5)) && !((num5 > num4) && !(num4 == num5));

    return 0;
}