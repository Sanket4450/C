# include <stdio.h>

int main() {

    int a;

    // boolean
    printf("10 > 9 = %d \n", 10 > 9);
    printf("12 == 10 = %d \n", 12 == 10);
    printf("12 = 10 = %d \n", a = 12);

    int age;

    printf("Enter your age : ");
    scanf("%d", &age);

    if (age < 18) {
        printf("You are not eligible for voting. \n");
    }
    else {
        printf("You are eligible for voting. \n");
    }

    float percent;
    printf("Enter your percentage : ");
    scanf("%f", &percent);

    if (percent >= 0 && percent < 34) {
        printf("You got C grade \n");
    }
    else if (percent >= 34 && percent < 67) {
        printf("You got B grade \n");
    }
    else if (percent >= 67 && percent <= 100){
        printf("You got A grade \n");
    }
    else {
        printf("not valid marks! \n");
    }

    int standard;
    printf("Enter standard in which you are currently studing (1 to 12) : ");
    scanf("%d", &standard);

    switch (standard) {
        case 1 :
        printf("You are currently in STD 1 \n");
            break;

        case 2:
        printf("You are currently in STD 2 \n");
            break;

        case 3:
        printf("You are currently in STD 3 \n");
            break;

        case 4:
        printf("You are currently in STD 4 \n");
            break;

        case 5:
        printf("You are currently in STD 5 \n");
            break;

        case 6:
        printf("You are currently in STD 6 \n");
            break;

        case 7:
        printf("You are currently in STD 7 \n");
            break;

        case 8:
        printf("You are currently in STD 8 \n");
            break;

        case 9:
        printf("You are currently in STD 9 \n");
            break;

        case 10:
        printf("You are currently in STD 10 \n");
            break;

        case 11:
        printf("You are currently in STD 11 \n");
            break;

        case 12:
        printf("You are currently in STD 12 \n");
            break;

        default :
        printf("not a valid standard! \n");
    }

    return 0;
}