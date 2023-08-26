# include <stdio.h>

int main(){

    // Write a C program to compute the perimeter and area of a rectangle with a height of 7 inches and width of 5 inches.

    int height = 7, width = 5;

    int perimeterR = 2 * (height + width);
    int areaR = height * width;

    printf("Perimeter of the rectangle is : %d \n", perimeterR);
    printf("Area of the rectangle is : %d \n \n", areaR);

    // Write a C program to compute the perimeter and area of a circle with a given radius.

    float radius;
    printf("Enter radius of the circle : ");
    scanf("%f", &radius);

    float pi = 3.14;
    float perimeterC = 2 * pi * radius;
    float areaC = pi * radius * radius;

    printf("Perimeter of the circle is : %.2f \n", perimeterC);
    printf("Area of the circle is : %.2f \n \n", areaC);

    return 0;
}