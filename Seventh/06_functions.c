# include <stdio.h>

// arrays to functions

void printArray(int *ptr, int n){ // we can write ptr[] instead of *ptr
    for (int i = 0; i < n; i++){
        printf("The value of element %d is : %d \n", i + 1, *(ptr + i));
    }   // we can write ptr[i] instead of *(ptr + i)
}

int main(){

    int arr[] = {10, 25, 65, 150, 375, 900};
    printArray(arr, 6);

    return 0;
}