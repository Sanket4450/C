# include <stdio.h>

int main(){
    
    // relational operators (==, <=, >=, !=)

    // Program to check whether a person is eligible to vote & drive or not

    int age;
    printf("Enter your age : ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("You can vote \n");
        printf("You can drive \n");
    }   else {
        printf("You are below 18 therefore you can't vote & drive \n");
    }

    // Program to check whether a student is pass or not

    int percent;
    printf("Enter your percentage out of 100 : ");
    scanf("%d", &percent);

    if (percent >= 33)
        printf("PASS! \n");

    else printf("FAIL! \n");

    // for one statement curly bracketes doesn't required in if/else
    
    return 0;
}