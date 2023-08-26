# include <stdio.h>

int main(){

    char a;
    printf("Enter a character : ");
    scanf("%c", &a);

    printf("The ASCII value of a is : %d \n", a);

    double b[] = {32.23, 435.0, 4234.232323, 234};
    printf("The size of b is : %lu \n", sizeof(b));

    return 0;
}
