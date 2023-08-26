# include <stdio.h>

int main(){

    // Write a program to check whether a triangle is equilateral, isosceles or scalene triangle

    float a, b, c;
    printf("Enter three sides of triangle : ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == b && a == c && b == c){  // a == b == c isn't allowed
        printf("This is an equilateral triangle \n");
    }

    else if (a == b || a == c || b == c){
        printf("This is an isosceles triangle \n");
    }

    else {
        printf("This is a scalene triangle \n");
    }

    return 0;
}