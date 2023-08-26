# include <stdio.h>

void display();  // function prototype

void goodMorning();  // void function returns 0 value
void goodAfternoon();
void goodNight();

void apple();
void google();
void microsoft();

int main(){

    int a;

    display();  // function call

    goodMorning();
    goodAfternoon();
    goodNight();

    apple();  // indirect function call

    return 0;
}

// function definition

void display(){
    printf("This is display \n");
}

void goodMorning(){
    printf("Good Morning! \n");
}

void goodAfternoon(){
    printf("Good Afternoon! \n");
}

void goodNight(){
    printf("Good Night! \n");
}

void apple(){
    printf("APPLE! \n");
    google();
}

void google(){
    printf("GOOGLE! \n");
    microsoft();
}

void microsoft(){
    printf("MICROSOFT! \n");
}