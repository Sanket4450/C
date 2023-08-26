// Quiz Game...

# include <stdio.h>

int main(){

    int i, points, n;
    int a1, a2, a3, a4, a5, a6, a7, a8, a9, a10;

    printf("\n\"Welcome to the quiz game\" \n");
    printf("Here, You will be asked 10 questions & You will get points by each correct answer. \n\n");

    start :

    points = 0;

    printf("--> Press 1 to start the game \n");
    printf("--> Press 0 to end the game \n");
    scanf("%d", &i);
    printf("\n");

    if (i == 1){
        printf("The game has started... \n\n");
    }
    else if (i == 0){
        printf("The game has ended... \n\n");
    }
    else {
        printf("Invalid! \n\n");
    }

    if (i == 1){

        printf("Q1. Which is the largest country in the world by area? \n");
        printf("    1) U.S.A. \t\t 2) China \n    3) Russia \t\t 4) India \n\n");
        printf("\t\t\t Ans: ");
        scanf("%d", &a1);

        if (a1 == 3){
            points += 10;
            printf("\n    Correct! You got 10 points \n\n");
        }
        else {
            printf("\n    Incorrect! Correct answer is : 3) Russia \n\n");
        }

        again1 :
        printf("   1) Next \t 2) Restart \t 0) End : ");
        scanf("%d", &n);

        if (n == 1){
            printf("\n");
        }
        else if (n == 2){
            printf("\n");
            goto start;
        }
        else if (n == 0){
            printf("\n");
            goto end;
        }
        else {
            printf("not valid! try again... \n\n");
        }

        printf("Q2. Which is the most populated city in the world? \n");
        printf("    1) Tokyo \t\t 2) London \n    3) Paris \t\t 4) Delhi \n\n");
        printf("\t\t\t Ans: ");
        scanf("%d", &a2);

        if (a2 == 1){
            points += 10;
            printf("\n    Correct! You got 10 points \n\n");
        }
        else {
            printf("\n    Incorrect! Correct answer is : 1) Tokyo \n\n");
        }

        again2 :
        printf("   1) Next \t 2) Restart \t 0) End : ");
        scanf("%d", &n);

        if (n == 1){
            printf("\n");
        }
        else if (n == 2){
            printf("\n");
            goto start;
        }
        else if (n == 0){
            printf("\n");
            goto end;
        }
        else {
            printf("not valid! try again... \n\n");
        }

        printf("Q3. Which is the most downloaded mobile game in the world? \n");
        printf("    1) Subway Surfers \t\t 2) Clash of Clans \n    3) Candy Crush Saga \t 4) Free Fire \n\n");
        printf("\t\t\t\t Ans: ");
        scanf("%d", &a3);

        if (a3 == 1){
            points += 10;
            printf("\n    Correct! You got 10 points \n\n");
        }
        else {
            printf("\n    Incorrect! Correct answer is : 1) Subway Surfers\n\n");
        }

        again3 :
        printf("   1) Next \t 2) Restart \t 0) End : ");
        scanf("%d", &n);

        if (n == 1){
            printf("\n");
        }
        else if (n == 2){
            printf("\n");
            goto start;
        }
        else if (n == 0){
            printf("\n");
            goto end;
        }
        else {
            printf("not valid! try again... \n\n");
        }

        printf("Q4. Which company has the highest employees? \n");
        printf("    1) Volkswagen \t 2) Tata Consultancy Services \n    3) Walmart \t\t 4) McDonald's \n\n");
        printf("\t\t\t Ans: ");
        scanf("%d", &a4);

        if (a4 == 3){
            points += 10;
            printf("\n    Correct! You got 10 points \n\n");
        }
        else {
            printf("\n    Incorrect! Correct answer is : 3) Walmart \n\n");
        }

        again4 :
        printf("   1) Next \t 2) Restart \t 0) End : ");
        scanf("%d", &n);

        if (n == 1){
            printf("\n");
        }
        else if (n == 2){
            printf("\n");
            goto start;
        }
        else if (n == 0){
            printf("\n");
            goto end;
        }
        else {
            printf("not valid! try again... \n\n");
        }

        printf("Q5. Who is currently the richest person on earth? \n");
        printf("    1) Elon Musk \t\t 2) Bill Gates \n    3) Jeff Bezos \t\t 4) Bernard Arnault \n\n");
        printf("\t\t\t\t Ans: ");
        scanf("%d", &a5);

        if (a5 == 4){
            points += 10;
            printf("\n    Correct! You got 10 points \n\n");
        }
        else {
            printf("\n    Incorrect! Correct answer is : 4) Bernard Arnault \n\n");
        }

        again5 :
        printf("   1) Next \t 2) Restart \t 0) End : ");
        scanf("%d", &n);

        if (n == 1){
            printf("\n");
        }
        else if (n == 2){
            printf("\n");
            goto start;
        }
        else if (n == 0){
            printf("\n");
            goto end;
        }
        else {
            printf("not valid! try again... \n\n");
        }

        printf("Q6. Which is the highest grossing movie of all time? \n");
        printf("    1) Titanic \t\t 2) Avengers: Endgame \n    3) Avatar \t\t 4) Jurassic World \n\n");
        printf("\t\t\t Ans: ");
        scanf("%d", &a6);

        if (a6 == 3){
            points += 10;
            printf("\n    Correct! You got 10 points \n\n");
        }
        else {
            printf("\n    Incorrect! Correct answer is : 3) Avatar \n\n");
        }

        again6 :
        printf("   1) Next \t 2) Restart \t 0) End : ");
        scanf("%d", &n);

        if (n == 1){
            printf("\n");
        }
        else if (n == 2){
            printf("\n");
            goto start;
        }
        else if (n == 0){
            printf("\n");
            goto end;
        }
        else {
            printf("not valid! try again... \n\n");
        }

        printf("Q7. Which of the following is the oldest invantion? \n");
        printf("    1) Telephone \t\t 2) Bicycle \n    3) Airplane \t\t 4) Light Bulb \n\n");
        printf("\t\t\t\t Ans: ");
        scanf("%d", &a7);

        if (a7 == 2){
            points += 10;
            printf("\n    Correct! You got 10 points \n\n");
        }
        else {
            printf("\n    Incorrect! Correct answer is : 2) Bicycle \n\n");
        }

        again7 :
        printf("   1) Next \t 2) Restart \t 0) End : ");
        scanf("%d", &n);

        if (n == 1){
            printf("\n");
        }
        else if (n == 2){
            printf("\n");
            goto start;
        }
        else if (n == 0){
            printf("\n");
            goto end;
        }
        else {
            printf("not valid! try again... \n\n");
        }

        printf("Q8. Which language has the most native speakers? \n");
        printf("    1) English \t\t 2) Chinese Mandarin \n    3) Spanish \t\t 4) Hindi \n\n");
        printf("\t\t\t Ans: ");
        scanf("%d", &a8);

        if (a8 == 2){
            points += 10;
            printf("\n    Correct! You got 10 points \n\n");
        }
        else {
            printf("\n    Incorrect! 2) Chinese Mandarin \n\n");
        }

        again8 :
        printf("   1) Next \t 2) Restart \t 0) End : ");
        scanf("%d", &n);

        if (n == 1){
            printf("\n");
        }
        else if (n == 2){
            printf("\n");
            goto start;
        }
        else if (n == 0){
            printf("\n");
            goto end;
        }
        else {
            printf("not valid! try again... \n\n");
        }

        printf("Q9. Which is the largest empire throughout history? \n");
        printf("    1) British Empire \t\t 2) Roman Empire \n    3) Russian Empire \t\t 4) Mongol Empire \n\n");
        printf("\t\t\t\t Ans: ");
        scanf("%d", &a9);

        if (a9 == 1){
            points += 10;
            printf("\n    Correct! You got 10 points \n\n");
        }
        else {
            printf("\n    Incorrect! Correct answer is : 1) British Empire \n\n");
        }

        again9 :
        printf("   1) Next \t 2) Restart \t 0) End : ");
        scanf("%d", &n);

        if (n == 1){
            printf("\n");
        }
        else if (n == 2){
            printf("\n");
            goto start;
        }
        else if (n == 0){
            printf("\n");
            goto end;
        }
        else {
            printf("not valid! try again... \n\n");
        }

        printf("Q10. How old is the earth in human years? \n");
        printf("    1) 8.6 billion \t\t 2) 13.8 million \n    3) 4.5 billion \t\t 4) 9.8 million \n\n");
        printf("\t\t\t\t Ans: ");
        scanf("%d", &a10);

        if (a10 == 3){
            points += 10;
            printf("\n    Correct! You got 10 points \n\n");
        }
        else {
            printf("\n    Incorrect! Correct answer is : 3) 4.5 billion \n\n");
        }

        again0 :
        printf("   1) Done \t 2) Restart \t 0) End : ");
        scanf("%d", &n);

        if (n == 1){
            printf("\n");
        }
        else if (n == 2){
            printf("\n");
            goto start;
        }
        else if (n == 0){
            printf("\n");
            goto end;
        }
        else {
            printf("not valid! try again... \n\n");
        }

        end :

        printf("The game has ended... \n\n");

        if (points >= 50)
        printf("Congrats! You've scored %d points \n", points);
        
        else printf("You've scored %d points \n", points);
    }

    return 0;
}