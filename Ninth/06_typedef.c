# include <stdio.h>
# include <string.h>

typedef struct employee{ // tyepdef is a shortcut

    char name[20];
    int rollno;
    float salary;
} emp; // we can write emp instead of struct employee

int main(){

    // We can make array of structures like this...

    emp e1;
    emp *ptr; // emp = struct employee

    ptr = &e1;
    
    (*ptr).rollno = 24;  // () is important
    strcpy((*ptr).name, "Sanket Talaviya");
    (*ptr).salary = 2450.65;

    printf("Name    : %s \n", (*ptr).name); // same as e1.name
    printf("Roll No : %d \n", (*ptr).rollno); // same is e1.rollno
    printf("Salary  : %f \n", (*ptr).salary); // same as e1.salary

    return 0;
}