# include <stdio.h>

int main(){

    int a[] = {25, 34, 56};  // We can intialize array like this...

    printf("The value of a[0] is : %d \n", a[0]);
    printf("The value of a[1] is : %d \n", a[1]);
    printf("The value of a[2] is : %d \n", a[2]);

    float b[] = {3.2, 4.5, 47};

    printf("The value of b[0] is : %.2f \n", b[0]);
    printf("The value of b[1] is : %.2f \n", b[1]);
    printf("The value of b[2] is : %.2f \n", b[2]);

    int sk[] = {1, 3, 7, 13, 12};

    // there are two ways to print arrays
    
    for (int i = 0; i < 5; i++){ // if we want to print all elements of array we use loops
        printf("%d ", sk[i]);
    }   printf("\n");

    printf("%d %d %d %d %d \n", sk[0], sk[1], sk[2], sk[3], sk[4]); // if we want to print perticular elements of array
    
    return 0;
}