# include <stdio.h>

int main(){

    // Program to create an array of 10 integers & store multiplication table of a number entered by the user

    int multi[10];
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++){
        multi[i] = n * i;
    }

    for (int i = 1; i <= 10; i++){
        printf("%d X %d = %d \n", n, i, multi[i]);
    }   printf("\n");

    // Create a 3-dimensional array & print the adress of its element increasing order

    int arr[2][3][4];

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            for (int k = 0; k < 4; k++){
                printf("The adress of arr[%d][%d][%d] is : %u \n", i, j, k, &arr[i][j][k]);
            }
        }
    }

    return 0;
}