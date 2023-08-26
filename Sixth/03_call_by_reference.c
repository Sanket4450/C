# include <stdio.h>

// function call by reference --> sending the adress of arguments

void wrong_swap(int a, int b);
void swap(int *a, int *b);

int main(){

    int x = 5, y = 3;

    printf("The values of x & y before swap are : %d & %d \n", x, y);
    
    // wrong_swap(x, y);  // will mot work due to call by value
    swap(&x, &y);  // will work due to call by reference

    printf("The values of x & y after swap are : %d & %d \n", x, y);

    return 0;
}

void wrong_swap(int a, int b){

    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swap(int *a, int *b){  // * is used for storing adress of variable
    
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}