# include <stdio.h>

int main(){

    // two ways to declare strings

    char s1[20] = "Sanket";
    char *s2 = "Talaviya";  // *variable = variable[]

    printf("%s %s", s1, s2);

    char s3[20] = "XYZ";
    char *s4 = "XYZ";

    return 0;
}