# include <stdio.h>

int main(){

    // increment opeartor (i++, ++i)

    int a = 5;
    
    printf("The value of a is : %d \n", a++);   // a++ --> first print then increase
    printf("The value of a is : %d \n", a);

    int b = 10;

    printf("The value of b is : %d \n", ++b);   // ++a --> first increase then print
    printf("The value of b is : %d \n", b);

    // decrease operator (i--, --i)

    int c = 15;

    printf("The value of c is : %d \n", c--);   // a-- --> first print then decrease
    printf("The value of c is : %d \n", c);

    int d = 20;

    printf("The value of d is : %d \n", --d);   // --a --> first decrease then print
    printf("The value of d is : %d \n", d);

    return 0;
} 