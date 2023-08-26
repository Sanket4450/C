# include <stdio.h>

int main(){

    // int is used for integer values (...,-2,-1,0,1,2,...)
    
    // float is used for point values (4.5, 7.0, -2.3, 0.5)

    // char is used for characters ('a','A','$','*')

    int a = 5;
    float b = 6.4;
    char c = '@';

    // %d is used for int
    // %f is used for float
    // %c is used for char

    printf("The value of a is : %d \n", a);
    printf("The value of b is : %f \n", b);
    printf("The value of c is : %c \n", c); // for next line we use '\n'

    int o = 24;
    int p = 13;

    printf("The sum of o & p is : %d \n", o + p);
    
    return 0;
}