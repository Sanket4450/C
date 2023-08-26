// Making a Calculator...

#include <stdio.h>

int main() {

    char op;
    double first, second;
    int choice;

    printf("Enter an operator (+, -, *, /) : ");
    scanf("%c", &op);
    printf("Enter two operands : ");
    scanf("%lf %lf", &first, &second);

    switch (op) {

        case '+':
        printf("%.2lf + %.2lf = %.2lf \n", first, second, first + second);
        break;

        case '-':
        printf("%.2lf - %.2lf = %.2lf \n", first, second, first - second);
        break;

        case '*':
        printf("%.2lf * %.2lf = %.2lf \n", first, second, first * second);
        break;

        case '/':
        if (second == 0) {printf("%.2lf / %.2lf = undefined \n", first, second);}
        else {printf("%.2lf / %.2lf = %.2lf \n", first, second, first / second);}
        break;
        
        default: // when operator doesn't match any case constant
        printf("not valid operator! \n");
    }

    return 0;
}