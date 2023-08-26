# include <stdio.h>

int main(){

    // Area of a rectangle

    int l = 13, b = 7;
    int area = l * b;

    printf("Area of the rectangle is : %d \n", area);

    // Area of a rectangle by using inputs supplied by the user

    int l1, b1;

    printf("Enter length : ");
    scanf("%d", &l1);

    printf("Enter breadth : ");
    scanf("%d", &b1);

    int area1 = l1 * b1;
    printf("Area of the rectangle is : %d \n", area1);

    // Area of a circle & Volume of a cylinder

    int radius = 4;
    float pi = 3.1416;

    printf("Area of the circle is : %f \n", pi * radius * radius);

    float height = 8;

    printf("Volume of the cylinder is : %f \n", pi * radius * radius * height);

    // Program to convert temperature from °C to °F

    float celsius = 37, fahrenheit = celsius * 9 / 5 + 32;

    printf("The temperature in °F is : %f°F \n", fahrenheit);

    // Program to calculate simple interest

    int p = 1000, r = 12, n = 2, si;
    si = (p * r * n) / 100;

    printf("The value of simple interest is : %d \n", si);

    return 0;
}