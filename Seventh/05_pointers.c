# include <stdio.h>

int main(){

    // arrays with pointers

    int marks[4];
    int *ptr = &marks[0];

    for (int i = 0; i < 4; i++){
        printf("Enter the marks for student %d : ", i + 1);
        scanf("%d", ptr);  // scanf always gets the adress of variable that's why we write '&' everytime
        ptr++;
    }

    for (int i = 0; i < 4; i++){
        printf("The marks for student %d is : %d \n", i + 1, marks[i]);
    }

    return 0;
}