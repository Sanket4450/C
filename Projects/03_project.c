// Rock, Paper, Scissor Game...

# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int rockPaperScissor(char you, char com);

int main(){

    // We have to make a randum number generator

    int num, result;
    char you, com;

    srand(time(0));
    num = rand() % 99 + 1; // Generates a diffrent number evertime between 1 to 99

    if (num >= 0 && num <= 33){
        com = 'r';
    }

    else if (num > 33 && num <= 66){
        com = 'p';
    }

    else {
        com = 's';
    }

    printf("\nEnter 'r' for Rock, 'p' for Paper & 's' for Scissor : ");
    scanf("%c", &you);

    result = rockPaperScissor(you, com);

    printf("You chose %c & computer chose %c. \n", you, com);

    if (result == 1){
        printf("You Won! \n\n");
    }

    else if (result == -1){
        printf("You Lost! \n\n");
    }

    else {
        printf("Game Draw! \n\n");
    }

    return 0;
}

int rockPaperScissor(char you, char com){

    if (you == com){
        return 0;  // returns 0 if game draws
    }

    if (you == 'r' && com == 's'){
        return 1;  // returns 1 if you wins
    }
    else if (you == 's' && com == 'r'){
        return -1; // returns -1 if com wins
    }

    if (you == 'p' && com == 'r'){
        return 1;
    }
    else if (you == 'r' && com == 'p'){
        return -1;
    }

    if (you == 's' && com == 'p'){
        return 1;
    }
    else if (you == 'p' && com == 's'){
        return -1;
    }
}