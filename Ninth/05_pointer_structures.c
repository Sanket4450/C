# include <stdio.h>
# include <string.h>

struct employee{

    char name[20];
    int rollno;
    float salary;
};

int main(){

    // We can make array of structures like this...

    struct employee e1;
    struct employee *ptr;

    ptr = &e1;
    
    (*ptr).rollno = 24;  // () is important
    strcpy((*ptr).name, "Sanket Talaviya");
    (*ptr).salary = 2450.65;

    // we can write above program like this...

    ptr->rollno = 24;  // -> is a shortcut to write the same statement as above
    strcpy(ptr->name, "Sanket Talaviya");
    ptr->salary = 24.65;

    printf("Name    : %s \n", (*ptr).name); // same as e1.name
    printf("Roll No : %d \n", (*ptr).rollno); // same is e1.rollno
    printf("Salary  : %f \n", (*ptr).salary); // same as e1.salary

    return 0;
}