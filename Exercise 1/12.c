# include <stdio.h>

int main(){

    // Write a program to check whether an alphabet is vowel or consonant.

    char alpha;
    printf("Enter an alphabet : ");
    scanf("%c", &alpha);

    if ((alpha == 'a' && alpha == 'e' && alpha == 'i' && alpha == 'o' && alpha == 'u') || 
    (alpha == 'A' && alpha == 'E' && alpha == 'I' && alpha == 'O' && alpha == 'U'))

        printf("The alphabet is a vowel \n");

    else printf("The alphabet is a consonant \n");

    return 0;
}