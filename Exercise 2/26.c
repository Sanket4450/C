# include <stdio.h>

int main(){

    // Write a C program to check whether a character is an alphabet, digit or special character.

    char ch;
    printf("Enter a character : ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
        printf("This is an alphabet \n");

    else if (ch >= 48 && ch <= 57)
        printf("This is a digit \n");

    else printf("this is a special character \n");

    return 0;
}