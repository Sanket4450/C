# include <stdio.h>

int main(){

    // pointer to an integer

    int i = 24;  // --> *j = i and j = &i <--
    int *j;
    j = &i;  // j now stored the adress of i

    printf("The value of i is : %d \n", i);
    printf("The value of i is : %d \n \n", *j);

    printf("The adress of i is : %p \n", &i);
    printf("The adress of i is : %p \n \n", j);
    
    printf("The adress of j is : %p \n \n", &j);

    printf("The value of j is : %p \n \n", *(&j));

    // pointer to a pointer

    int **k = &j;  // k now stored the adress of j

    printf("The adress of j is : %p \n", k);
    printf("The value of j is : %d \n \n", **k);

    printf("The adress of k is : %p \n", &k);
    printf("The value of k is : %p \n \n", **(&k));

    return 0;
}