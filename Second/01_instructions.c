# include <stdio.h>

int main(){

    // type declaration instruction

    // 1st

    int a = 4, b, c;
    b = c = a;

    printf("The value of a is : %d \n", a);
    printf("The value of b is : %d \n", b);
    printf("The value of c is : %d \n", c);

    // 2nd

    float x = 4.5;                                        //float y = x + 3;
    float y = x + 3;    // this is the right statement    //float x = 4.5;      // this is a wrong statement

    printf("The value of y is : %f \n", y);

    // 3rd

    int p, q, r, s;
    p = q = r = s = 15;

    printf("The value of p is : %d \n", p);
    printf("The value of q is : %d \n", q);
    printf("The value of r is : %d \n", r);
    printf("The value of s is : %d \n", s);

    return 0;
}