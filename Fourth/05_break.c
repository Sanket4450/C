# include <stdio.h>

int main(){

    // break statement

    for (int i = 1; i <= 15; i++){
        printf("%d \n", i);
        if (i == 7){
            break;
        }
    }
    
    return 0;
}