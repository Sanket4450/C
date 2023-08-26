# include <stdio.h>

int main(){

    // We can write multiple characters using strings

    char ch = 'S'; // can store only one character

    char str[] = {'S', 'A', 'N', 'K', 'E', 'T', '\0'}; // can store multiple characters
    char str1[] = "SANKET"; // easier way to write strings

    printf("%s \n", str);
    printf("%s \n \n", str1); // %s is used to print strings

    // printing strings using loop

    char *ptr = str;
    while (*ptr != '\0'){
        printf("%c", *ptr); // in order to print strings in loops, we use %c instead of %s
        ptr++;
    }   printf("\n \n");

    char *string = "I AM INEVITABLE"; // *string and string[] are the same
    printf("%s \n", string);

    return 0;
}