# include <stdio.h>

int main(){

    // array input

    int _marks[5];
    printf("Enter marks for student 1 : ");
    scanf("%d", &_marks[0]);

    printf("Enter marks for student 2 : ");
    scanf("%d", &_marks[1]);

    printf("Enter marks for student 3 : ");
    scanf("%d", &_marks[2]);

    printf("Enter marks for student 4 : ");
    scanf("%d", &_marks[3]);

    printf("Enter marks for student 5 : ");
    scanf("%d", &_marks[4]);

    printf("You have entered %d, %d, %d, %d & %d \n", _marks[0], _marks[1], _marks[2], _marks[3], _marks[4]);

    // array input using loops

    int marks[10];

    for (int i = 0; i < 10; i++){
        printf("Enter marks for student %d : ", i + 1);
        scanf("%d", &marks[i]);
    }
    printf("You've entered %d, %d, %d, %d, %d, %d, %d, %d, %d, %d \n", marks[0], marks[1], marks[2],marks[3],
    marks[4], marks[5], marks[6], marks[7], marks[8], marks[9]);

    return 0;
}