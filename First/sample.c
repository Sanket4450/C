# include <stdio.h>

int main(){

    printf("Sanket Talaviya \n"); // printing Sanket Talaviya

    int a = 24;
    int b = 50;

    printf("%d \n", a); // printing a = 24

    float c = 2.6;
    float d = -45.0;

    printf("%f \n", d); // -45.0

    char e = '@';
    char f = 'f';

    printf("%c \n", e); // @

    char h[] = "Sanket";

    printf("%s \n", h); // Sanket (this is a string)

    int i;
    i = 45;
    printf("%d \n", i); // 45
    printf("%d \n", i); // 45

    i = 50;
    printf("%d \n", i); // 50
    printf("%d \n", i); // 50

    int x = 20;
    int y = 10;
    int sum = x + y;
    printf("%d \n", sum); // 20 + 10

    printf("%d \n", x - y); // 20 - 10

    printf("%d %d %d \n", x, y, x * y); // 20 10 200

    int j, k;
    printf("Enter first value : ");
    scanf("%d", &j);

    printf("Enter second value : ");
    scanf("%d", &k);

    printf("Sum is : %d \n", j + k);

    char ch;
    
    printf("Enter first character of your name : ");
    scanf("%c", &ch);

    printf("Your name starts with : %c \n", ch);

    // xycdkffnf
    // cbbcjhdfv

    int number1;
    int number2 = 50;

    number1 = number2;
    // number2 = number1;
    printf("%d \n", number1);

    int p, q, r; // declaring multiple variables
    p = q = r = 50; // assigning multiple variables
    printf("%d \n", p + q + r);

    // 6 decimals after .(point)
    float num1 = 25.1234567890;
    printf("%f \n", num1);

    double num2 = 25.1234567890;
    printf("%lf \n", num2);

    int num3 = 24.999;
    printf("%d \n", num3);

    float num4 = 45;
    printf("%f \n", num4); // 45.000000

    // 5 / 2 = 2 because of int
    printf("5 / 2 = %d \n", 5 / 2);

    // 5 / 2 = 2.500000 because of float
    printf("5 / 2 = %f \n", 5 / 2.00);

    // %.2f = 2 numbers (decimal) after .(point)
    printf("5 / 2 = %.2f \n", 5 / 2.00);

    int a1 = 20;
    
    a1 = 25;
    printf("%d \n", a1);

    // constants

    const int a2 = 23;
    // a2 = 30 (can not be re-assigned)

    printf("%d \n", a2);

    return 0;
}