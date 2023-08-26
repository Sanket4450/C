# include <stdio.h>

int main(){

    FILE *fptr;

    int num = 45, num2 = 88;

    fptr = fopen("generated.txt", "w"); // writing file can generate automatically

    fprintf(fptr, "The number is : %d \n", num); // fprintf function is used to write statements on another file
    fprintf(fptr, "The number is : %d \n", num2);
    fprintf(fptr, "We can write like this \n"); // we just need to add fptr at the front

    fclose(fptr);

    return 0;
}