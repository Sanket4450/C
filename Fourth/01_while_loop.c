# include <stdio.h>

int main(){

    // while loop --> checks the condition & then executes the code

    int i = 1;
    
    while (i <= 10){
        printf("%d \n", i);
        i++;    // a++ --> a += 1 --> a = a + 1
    }

    // Print natural numbers from 10 to 20 when initial loop counter a is initialiged 0

    int a = 0;

    while (a <= 20){
        if (a >= 10){
        printf("%d ", a);
        }
        a++;
    }

    return 0;
}