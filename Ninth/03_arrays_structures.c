# include <stdio.h>
# include <string.h>

struct employee{

    char name[20];
    int rollno;
    float salary;
};

int main(){

    // we can make array of structure variable like this...

    struct employee facebook[50]; // we made an array of 50 employees

    strcpy(facebook[0].name, "Mohan Dubey");
    facebook[0].rollno = 32;
    facebook[0].salary = 2543.54;

    strcpy(facebook[1].name, "Shekhar Joshi");
    facebook[1].rollno = 40;
    facebook[1].salary = 2108.97;

    strcpy(facebook[2].name, "Sanjay Mishra");
    facebook[2].rollno = 25;
    facebook[2].salary = 2385.40;

    return 0;
}