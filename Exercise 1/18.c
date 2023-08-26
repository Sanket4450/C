# include <stdio.h>

int main(){

    // Write a C program to find the third angle of a triangle if two angles are given.

    float a, b, c;

    printf("Enter two angles of a triangle : ");
    scanf("%f %f", &a, &b);

    c = 180 - (a + b);
    printf("Third angle of the triangle is : %.2f° \n", c);

    return 0;
}