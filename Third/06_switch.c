# include <stdio.h>

int main(){

    // A switch case program to rate KGF: Chapter 2 film

    int rating;
    printf("Rate KGF: Chapter 2 out of 5 : ");
    scanf("%d", &rating);

    switch(rating){ 
        case 1:
            printf("TOO BAD! \n");
            break;
        case 2:
            printf("BAD! \n");
            break;
        case 3:
            printf("AVERAGE! \n");
            break;
        case 4:
            printf("GOOD! \n");
            break;
        case 5:
            printf("TOO GOOD! \n");
            break;
        default:
            printf("not valid rating! \n");
            break;
    }

    return 0;
}