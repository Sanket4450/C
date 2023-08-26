# include <stdio.h>

int main(){

    char name[30];  // up to 30 letters can be stored in this string
    printf("Enter your name : ");
    scanf("%s", name);  // don't need to write '&' as the adress is already stored via strings
    printf("Hello! %s \n", name);

    // scanf doesn't get multiple words with spaces, for that we need to use gets() and puts()

    return 0;
}