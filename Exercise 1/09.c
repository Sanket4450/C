# include <stdio.h>

int main(){

    // Write a C program that reads three floating-point values and checks if it is possible\
    to make a triangle with them. Determine the perimeter of the triangle if the given values are valid.

    float s1, s2, s3, perimeter;

    printf("Enter the value of side 1 : ");
    scanf("%f", &s1);

    printf("Enter the value of side 2 : ");
    scanf("%f", &s2);

    printf("Enter the value of side 3 : ");
    scanf("%f", &s3);

    if (s1 < (s2 + s3) && s2 < (s1 + s3) && s3 < (s1 + s2)){

    perimeter = s1 + s2 + s3;
    printf("\n The perimeter of the triangle is : %f \n", perimeter);
    }

    else printf("\n It isn't possible to make a triangle \n");

    return 0;
}