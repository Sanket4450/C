# include <stdio.h>

int b = 35; // global variable is declared outside of any function so it can be accessed anywhere in the program

int main(){

    // M11 --> changing value of a constant via pointers

    const int sk = 15;
    printf("Initial value of constant is : %d \n", sk);

    int *ptr = &sk;
    *ptr = 60;
    printf("Final value of the constant is : %d \n \n", *ptr);

    // M12 --> global variable can be accessed at everywhere

    int a = 14; // local variable is declared in main function so it cannot run outside the main function

    printf("%d \n", a); // this is declared in main function
    printf("%d \n", b); // this is declared outside of the main function
    
    return 0;
}