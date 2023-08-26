# include <stdio.h>
# include <string.h>

// struct is used to make custom data-type

struct employee{

    int rollno;
    float salary;
    char name[20];
};  // semicolon is important

int main(){

    struct employee e1; // we need to write struct before variable
    e1.rollno = 28;
    e1.salary = 934.56;

    // a.name = "Nilesh Sharma"; --> won't work
    strcpy(e1.name, "Nilesh Sharma"); // we need to include <string.h> tp use this function

    printf("Name    : %s \n", e1.name);
    printf("Roll No : %d \n", e1.rollno);
    printf("Salary  : %.2f \n", e1.salary);
    
    return 0;
}