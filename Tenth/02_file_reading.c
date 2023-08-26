# include <stdio.h>

int main(){
    
    FILE *ptr;

    int num, num2;
    
    ptr = fopen("sample.txt", "r"); // reading file can't generate automatically

    fscanf(ptr, "%d", &num); // fscanf function is used to get inputs from another file
    fscanf(ptr, "%d", &num2);

    fclose(ptr); // we should close the opened file after the work has done, here the work was to get inputs

    printf("The value of num is : %d \n", num);
    printf("The value of num2 is : %d \n", num2);

    return 0;
}