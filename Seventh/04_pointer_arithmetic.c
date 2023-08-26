# include <stdio.h>

int main(){

    int i = 24;
    int *ptr = &i;

    printf("The value of ptr is : %u \n", ptr);

    ptr++;
    ptr++;  // We can increase pointer value like this

    printf("The value of ptr is : %u \n \n", ptr);

    float j = 3.5;
    float *_ptr = &j;

    printf("The value of ptr is ; %u \n", _ptr);

    _ptr--;
    _ptr--;
    _ptr--;  // We can decrease pointer value like this

    printf("The value of ptr is : %u \n \n", _ptr);

    return 0;
}