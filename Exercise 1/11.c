# include <stdio.h>

int main(){

    // Write a C program to read the coordinates (x, y) (in the Cartesian system) and\
    find the quadrant to which it belongs (Quadrant -I, Quadrant -II, Quadrant -III, Quadrant -IV).

    float x, y;
    printf("Enter the coordinates (x, y)\n");
    
    printf("x: ");
    scanf("%f", &x);

    printf("y: ");
    scanf("%f", &y);

    if (x > 0 && y > 0)
        printf("Quadrant -I(+, +)\n");

    else if (x > 0 && y < 0)
        printf("Quadrant -II(-, +)\n");

    else if (x < 0 && y < 0)
        printf("Quadrant -III(-, -)\n");

    else if (x < 0 && y > 0)
        printf("Quadrant -IV(-, +)\n");

    else printf("Noon(0, 0)\n");

    return 0;
}