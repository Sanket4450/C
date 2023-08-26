# include <stdio.h>

int main(){

    // Write a C program that accepts two item's weight and number of purchases (floating point values)\
    and calculates their average value.

    float weight1, weight2;
    int soap, shampoo;

    printf("Enter the weight of the soap : ");
    scanf("%f", &weight1);

    printf("Enter total pieces of soap : ");
    scanf("%d", &soap);

    printf("Enter the weight of the shampoo : ");
    scanf("%f", &weight2);

    printf("Enter total pieces of shampoo : ");
    scanf("%d", &shampoo);

    float a1 = weight1 * soap, a2 = weight2 * shampoo;
    float average = (a1 + a2) / (soap + shampoo);

    printf("The average is : %.2f \n \n", average);

    return 0;
}