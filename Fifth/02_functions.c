# include <stdio.h>
# include <math.h>

int sum(int a, int b);

int main(){

    int c;
    c = sum(7, 5);  // 7 & 5 are arguments

    printf("The value of c is %d \n", c);

    // Calculating area of a square using pow funtion

    int side;
    printf("Enter the side : ");
    scanf("%d", &side);

    printf("Area of the square is : %f \n", pow(side, 2));  // We need to include <math.h> for pow function

    return 0;
}

int sum(int a, int b){  // a & b are parameters
    return a + b;
}