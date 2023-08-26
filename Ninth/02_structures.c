# include <stdio.h>
# include <string.h>

// Write a program to store the details of 3 employees from user defined data using structures

struct employee{

    int rollno;
    char name[20];
    float salary;
};

int main(){

    struct employee e1, e2, e3;

    // details of employee 1

    printf("Enter name of employee 1 : ");
    scanf("%s", e1.name);

    printf("Enter roll no of employeee 1 : ");
    scanf("%d", &e1.rollno);

    printf("Enter salaray of employee 1 : ");
    scanf("%f", &e1.salary);

    printf("\n");

    // details of employee 2

    printf("Enter name of employee 2 : ");
    scanf("%s", e1.name);

    printf("Enter roll no of employeee 2 : ");
    scanf("%d", &e1.rollno);

    printf("Enter salaray of employee 2 : ");
    scanf("%f", &e1.salary);

    printf("\n");

    // details of employee 3

    printf("Enter name of employee 3 : ");
    scanf("%s", e1.name);

    printf("Enter roll no of employeee 3 : ");
    scanf("%d", &e1.rollno);

    printf("Enter salaray of employee 3 : ");
    scanf("%f", &e1.salary);

    printf("\n");

    return 0;
}