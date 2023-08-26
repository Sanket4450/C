# include <stdio.h>
# include <string.h> // for using string functions

int main(){

    // function 1 --> strlen

    char *string = "Sanket Talaviya";
    int a = strlen(string);  // strlen is used to print length of a string

    printf("The length of string is : %d \n", a);

    // function 2 --> strcpy

    char *str = "SK Talaviya";
    char str1[20]; // str1 should have enough capacity to store copy content
    strcpy(str1, str); // strcpy is used to copy the content of second string into first string
    
    printf("Now, the str1 is %s \n", str1);

    // function 3 --> strcat

    char st[20] = "Hello";
    char st1[] = "Sanket";
    strcat(st, st1); // strcat is used to concatenate two strings
    
    printf("Now, st is %s \n", st); // no space expected between two strings

    // function 4 --> strcmp

    char string1[] = "ABND";
    char string2[] = "ABCK";
    int sk = strcmp(string1, string2); // strcmp is used to compare two strings
    
    printf("The sk is %d \n", sk); // first mismatching character (N - C) = ASCII (78 - 67)

    char string3[] = "ABCI";
    char string4[] = "ABCS";
    int sk1 = strcmp(string3, string4);

    printf("The sk1 is %d \n", sk1); // first mismatching character (I - S) = ASCII (73 - 83)

    char string5[] = "ABCD";
    char string6[] = "ABCD";
    int sk2 = strcmp(string5, string6);

    printf("The sk2 is %d \n", sk2); // no mismatching character = 0

    char string7[] = "FGPS";
    char string8[] = "ABCD";
    int sk3 = strcmp(string7, string8);

    printf("The sk3 is %d \n", sk3); // first mismatching character (F - A) = ASCII (70 - 65)

    return 0;
}