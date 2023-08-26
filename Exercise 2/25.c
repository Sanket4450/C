# include <stdio.h>

int main(){

    // Write a C program to read the roll no, name and marks of subjects and calculate the total, percentage and division.

    char name[20], division;
    int rollno, acc, stat, ba, sp, eco, eng, guj, total;
    float percent;

    printf("Enter roll no : ");
    scanf("%d", &rollno);

    printf("Enter name : ");
    scanf("%s", name);

    printf("Enter marks in Account : ");
    scanf("%d", &acc);

    printf("Enter marks in Statistics : ");
    scanf("%d", &stat);

    printf("Enter marks in B.A. : ");
    scanf("%d", &ba);

    printf("Enter marks in S.P. : ");
    scanf("%d", &sp);

    printf("Enter marks in Economics : ");
    scanf("%d", &eco);

    printf("Enter marks in English : ");
    scanf("%d", &eng);

    printf("Enter marks in Gujarati : ");
    scanf("%d", &guj);

    total = acc + stat + ba + sp + eco + eng + guj;

    printf("\nTotal : %d \n", total);

    percent = (float)total / 7;

    printf("\nPercentage : %f \n", percent);

    if (percent >= 80)
        division = 'A';

    else if (percent >= 60 && percent < 80)
        division = 'B';

    else if (percent >= 40 && percent < 60)
        division = 'C';

    else if (percent >= 20 && percent < 40)
        division = 'D';

    else if (percent < 20)
        division = 'E';

    printf("\nDivision : %c \n", division);

    return 0;
}