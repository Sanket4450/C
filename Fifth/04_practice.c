# include <stdio.h>

// function fo find average of three numbers

float average(int x, int y, int z);

// function to convert censius temperature into fahrenheit

float c2f(float x);

// function to calculate force of attraction on a body of mass m exerted by earth

float force(float m);

// recursive function to calculate the sum of first n natural numbers

int sum(int a);

// function to print the stars pattern (first n lines)

void printPattern(int n);

int main(){

    // average of three numbers

    int a, b, c;

    printf("Enter the value of a : ");
    scanf("%d", &a);

    printf("Enter the value of b : ");
    scanf("%d", &b);

    printf("Enter the value of c : ");
    scanf("%d", &c);

    printf("The average of %d, %d & %d is : %.2f \n", a, b, c, average(a, b, c));
    // don't need to write same variables, here we can see (a, b, c) instead of (x, y, z)

    // celsius into fahrenheit

    float temp;
    printf("Enter temperature in °C : ");
    scanf("%f", &temp);

    printf("The temperature is : %.2f °F \n", c2f(temp));

    // force of attraction

    float mass;
    printf("Enter mass of your body in kgs : ");
    scanf("%f", &mass);

    printf("The force of attraction on your body exerted by earth is : %.2f N \n", force(mass));

    // sum of first n natural numbers

    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    printf("The sum of %d natural numbers is : %d \n", n, sum(n));

    // print stars pattern

    int p;
    printf("How many lines do you want to print : ");
    scanf("%d", &p);

    printPattern(p);

    return 0;
}

float average(int x, int y, int z){  // both variables need to be the same
                                     // Here we can see (int x, int y, int z) and (x + y + z)

    return (float)(x + y + z) / 3;  // for accurate sum we need to write a float like this
}

float c2f(float x){

    return (x * 9 / 5) + 32;
}

float force(float m){

    float f, g = 9.8;
    f = m * g;

    return f;
}

int sum(int a){

    printf("Calling number(%d) \n", a);

    if (a == 1){
        return 1;
    }
    else {
        return a + sum(a - 1);
    }
}

void printPattern(int n){

    if (n == 1){
        printf("*\n");
        return;
    }
    printPattern(n - 1);
    
    for (int i = 0; i <(2 * n - 1); i++){
        printf("*");
    }
    printf("\n");
}