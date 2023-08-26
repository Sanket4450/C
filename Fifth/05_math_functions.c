# include <stdio.h>
# include <math.h>  // need to include this library for math functions

int main(){

    // sqrt function is used to get a number's square root

    int a;
    printf("Enter a number : ");
    scanf("%d", &a);

    printf("Square root of %d is : %f \n \n", a, sqrt(a)); // square root of a

    // // cbrt function is used to get a number's cube root

    int b;
    printf("Enter a number : ");
    scanf("%d", &b);

    printf("Cube root of %d is : %f \n \n", b, cbrt(b)); // cube root of b

    // pow funtion is used to give power to a number

    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    int p;
    printf("Enter power of the number : ");
    scanf("%d", &p);

    printf("%d to the power of %d is : %f \n \n", n, p, pow(n, p)); // n to the power of p

    // ceil and floor functions are used to round a number

    printf("%f \n", ceil(2.4));  // rounds a number upwards to its nearest integer
    printf("%f \n", floor(2.4)); // rounds a number downwards to its nearest integer

    return 0;
}