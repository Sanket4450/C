# include <stdio.h>
# include <math.h>

int main(){

    // arithmetic instuructions

    // 1st

    int a = 4, b = 8;

    printf("The value of a + b is : %d \n", a + b);
    printf("The value of a - b is : %d \n", a - b);
    printf("The value of a * b is : %d \n", a * b);
    printf("The value of a / b is : %d \n", a / b);

    // 2nd

    int i = (6 * 4) + 5;    // +, -, *, / are the operators    // 3, 0, 1.6, -2 are operands

    // 3rd

    int z;
    z = a * b; // valid    // a * b = z is invalid!

    printf("The value of z is : %d \n", z);

    // 4th

    // modular division operator(%) gives us the remainder

    printf("If we divide 8 by 3, we will get the remainder : %d \n", 8 % 3);
    printf("If we divide -8 by 3, we will get the remainder : %d \n", -8 % 3);

    // 5th

    printf("%d \n", 4 * 5);    // 4*5 is valid, 4·5 or (4)(5) is invalid!

    // 6th

    printf("4 to the power of 5 is : %f \n", pow(4, 5));    // we need to include <math.h>

    // 7th

    printf("The value of 8 + 5 is : %d \n", 8 + 5);            // int and int —> int
    printf("The value of 8 + 5.5 is : %f \n", 8 + 5.5);        // int and float —> float
    printf("The value of 8.4 + 5.3 is : %f \n", 8.4 + 5.3);    // float and float —> float

    // Operator precedence

    int x = 8, y = 5;

    printf("The value of 3 * x - 4 * y is : %d \n", 3 * x - 4 * y);

    // BODMAS doesn't apply here, applies operator precedence & associativity
    // *, /, % have first priority, +, - have second & = has the last
    // Whenever operators of equal priority are present, the associativity rule (left to right) is applied.

    printf("The value of 4 * 5 / 2 + 13 is : %d \n", 4 * 5 / 2 + 13);

    // control instructions

    // 1. Sequence control instructions (we've already seen)
    // 2. Decision control instructions (if, else)
    // 3. Loop control instructions (for, while, do while)
    // 4. Case control instructions (switch, case)

    return 0;
}