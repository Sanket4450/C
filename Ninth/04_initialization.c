# include <stdio.h>

struct employee{

    char name[20];
    int rollno;
    float salary;
};

int main(){

    // shortcut way to initialize structures

    struct employee sagar = {"Sagar", 12, 2045.45}; // must be in declaration order

    printf("Name is    : %s \n", sagar.name);
    printf("Roll No is : %d \n", sagar.rollno);
    printf("Salary is  : %f \n", sagar.salary);

    return 0;
}