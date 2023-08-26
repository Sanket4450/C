# include <stdio.h>

// Two dimensional vector using structures

struct vector{

    float x;
    float y;
};

int main(){

    struct vector v1, v2, sum;

    v1.x = 34.5;
    v1.y = 45.3;
    printf("X dim is : %.2f & Y dim is : %.2f \n", v1.x, v1.y); // dim for dimension

    v2.x = 47.8;
    v2.y = 32.3;
    printf("X dim is : %.2f & Y dim is : %.2f \n", v2.x, v2.y);

    return 0;
}