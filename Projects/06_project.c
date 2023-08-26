// Cricket Player's Stats Game...

# include <stdio.h>

struct player {

    int age;
    int height;
    int matches;
    int runs;
    int ballsF;
    int highest;
    float average;
    float sr;
    int fours;
    int sixes;
    int fifties;
    int hundreds;
    int ballsT;
    int wickets;
    float economy;
};

void rs();
void sd();
void kl();
void vk();
void sy();
void si();
void hp();
void msd();
void rj();
void ra();
void bk();
void ky();
void jb();
void ms();
void yc();

int main(){

    printf("\n\"Welcome to the Stats Game\"\n\n");
    printf("Choose a Number for a Specific Player : \n\n");

    int num, num2;

    start :

    printf("    01 — Rohit Sharma \n");
    printf("    02 — Shikhar Dhawan \n");
    printf("    03 — KL Rahul \n");
    printf("    04 — Virat Kohli \n");
    printf("    05 — Suryakumar Yadav \n");
    printf("    06 — Shreyas Iyer \n");
    printf("    07 — Hardik Pandya \n");
    printf("    08 — M.S. Dhoni \n");
    printf("    09 — Ravindra jadeja \n");
    printf("    10 — Ravichandan Ashwin \n");
    printf("    11 — Bhuvneshwar Kumar \n");
    printf("    12 — Kuldeep Yadav \n");
    printf("    13 — Jasprit Bumrah \n");
    printf("    14 — Mohammad Shami \n");
    printf("    15 — Yuzvendra Chahal \n\n");

    choose :

    printf("Enter Number for the Player : ");
    scanf("%d", &num);

    switch (num){

        case 1 : rs();
            break;

        case 2 : sd();
            break;

        case 3 : kl();
            break;

        case 4 : vk();
            break;

        case 5 : sy();
            break;

        case 6 : si();
            break;

        case 7 : hp();
            break;

        case 8 : msd();
            break;

        case 9 : rj();
            break;

        case 10 : ra();
            break;

        case 11 : bk();
            break;

        case 12 : ky();
            break;

        case 13 : jb();
            break;

        case 14 : ms();
            break;

        case 15 : yc();
            break;

        default : printf("not valid! try again... \n\n");
            goto choose;
    }

    end :

    printf("    1) More        0) Clear : ");
    scanf("%d", &num2);

    switch (num2){

        case 1 : printf("\n");
            goto start;
            break;

        case 0 : printf("\n");
            break;

        default : printf("not valid! try again... \n\n");
            goto end;

    }

    return 0;
}

void rs(){

    struct player rs;

    rs.age = 36;
    rs.height = 170;
    rs.matches = 683;
    rs.runs = 23268;
    rs.ballsF = 24497;
    rs.highest = 264;
    rs.average = 38.68;
    rs.sr = 103.82;
    rs.fours = 2162;
    rs.sixes = 783;
    rs.fifties = 133;
    rs.hundreds = 44;
    rs.ballsT = 1383;
    rs.wickets = 26;
    rs.economy = 6.68;

    printf("\n");
    printf("    Name                    : Rohit Sharma \n");
    printf("    Age                     : %d \n", rs.age);
    printf("    Height                  : %d \n", rs.height);
    printf("    Matches                 : %d \n", rs.matches);
    printf("    Runs                    : %d \n", rs.runs);
    printf("    Balls Faced             : %d \n", rs.ballsF);
    printf("    Highest                 : %d \n", rs.highest);
    printf("    Average                 : %.2f \n", rs.average);
    printf("    Strike Rate             : %.2f \n", rs.sr);
    printf("    Fours                   : %d \n", rs.fours);
    printf("    Sixes                   : %d \n", rs.sixes);
    printf("    Fifties                 : %d \n", rs.fifties);
    printf("    Hundreds                : %d \n", rs.hundreds);
    printf("    Balls Thrown            : %d \n", rs.ballsT);
    printf("    Wickets                 : %d \n", rs.wickets);
    printf("    Economy                 : %.2f \n\n", rs.economy);
}

void sd(){

    struct player sd;

    sd.age = 37;
    sd.height = 180;
    sd.matches = 486;
    sd.runs = 17483;
    sd.ballsF = 17489;
    sd.highest = 190;
    sd.average = 36.96;
    sd.sr = 102.96;
    sd.fours = 2099;
    sd.sixes = 289;
    sd.fifties = 105;
    sd.hundreds = 26;
    sd.ballsT = 102;
    sd.wickets = 4;
    sd.economy = 5.13;

    printf("\n");
    printf("    Name                    : Shikhar Dhawan \n");
    printf("    Age                     : %d \n", sd.age);
    printf("    Height                  : %d \n", sd.height);
    printf("    Matches                 : %d \n", sd.matches);
    printf("    Runs                    : %d \n", sd.runs);
    printf("    Balls Faced             : %d \n", sd.ballsF);
    printf("    Highest                 : %d \n", sd.highest);
    printf("    Average                 : %.2f \n", sd.average);
    printf("    Strike Rate             : %.2f \n", sd.sr);
    printf("    Fours                   : %d \n", sd.fours);
    printf("    Sixes                   : %d \n", sd.sixes);
    printf("    Fifties                 : %d \n", sd.fifties);
    printf("    Hundreds                : %d \n", sd.hundreds);
    printf("    Balls Thrown            : %d \n", sd.ballsT);
    printf("    Wickets                 : %d \n", sd.wickets);
    printf("    Economy                 : %.2f \n\n", sd.economy);
}

void kl(){

    struct player kl;

    kl.age = 31;
    kl.height = 184;
    kl.matches = 291;
    kl.runs = 11056;
    kl.ballsF = 12135;
    kl.highest = 199;
    kl.average = 40.78;
    kl.sr = 102.94;
    kl.fours = 2162;
    kl.sixes = 331;
    kl.fifties = 81;
    kl.hundreds = 18;
    kl.ballsT = 0;
    kl.wickets = 0;
    kl.economy = 0;

    printf("\n");
    printf("    Name                    : KL Rahul \n");
    printf("    Age                     : %d \n", kl.age);
    printf("    Height                  : %d \n", kl.height);
    printf("    Matches                 : %d \n", kl.matches);
    printf("    Runs                    : %d \n", kl.runs);
    printf("    Balls Faced             : %d \n", kl.ballsF);
    printf("    Highest                 : %d \n", kl.highest);
    printf("    Average                 : %.2f \n", kl.average);
    printf("    Strike Rate             : %.2f \n", kl.sr);
    printf("    Fours                   : %d \n", kl.fours);
    printf("    Sixes                   : %d \n", kl.sixes);
    printf("    Fifties                 : %d \n", kl.fifties);
    printf("    Hundreds                : %d \n", kl.hundreds);
    printf("    Balls Thrown            : %d \n", kl.ballsT);
    printf("    Wickets                 : %d \n", kl.wickets);
    printf("    Economy                 : %.2f \n\n", kl.economy);
}

void vk(){

    struct player vk;

    vk.age = 34;
    vk.height = 175;
    vk.matches = 735;
    vk.runs = 32599;
    vk.ballsF = 37509;
    vk.highest = 254;
    vk.average = 49.01;
    vk.sr = 104.23;
    vk.fours = 3153;
    vk.sixes = 514;
    vk.fifties = 180;
    vk.hundreds = 82;
    vk.ballsT = 1219;
    vk.wickets = 12;
    vk.economy = 6.49;

    printf("\n");
    printf("    Name                        : Virat Kohli \n");
    printf("    Age                         : %d \n", vk.age);
    printf("    Height                      : %d \n", vk.height);
    printf("    Matches                     : %d \n", vk.matches);
    printf("    Runs                        : %d \n", vk.runs);
    printf("    Balls Faced                 : %d \n", vk.ballsF);
    printf("    Highest                     : %d \n", vk.highest);
    printf("    Average                     : %.2f \n", vk.average);
    printf("    Strike Rate                 : %.2f \n", vk.sr);
    printf("    Fours                       : %d \n", vk.fours);
    printf("    Sixes                       : %d \n", vk.sixes);
    printf("    Fifties                     : %d \n", vk.fifties);
    printf("    Hundreds                    : %d \n", vk.hundreds);
    printf("    Balls Thrown                : %d \n", vk.ballsT);
    printf("    Wickets                     : %d \n", vk.wickets);
    printf("    Economy                     : %.2f \n\n", vk.economy);
}

void sy(){

    struct player sy;

    sy.age = 32;
    sy.height = 180;
    sy.matches = 211;
    sy.runs = 5365;
    sy.ballsF = 3664;
    sy.highest = 117;
    sy.average = 27.61;
    sy.sr = 115.30;
    sy.fours = 545;
    sy.sixes = 216;
    sy.fifties = 36;
    sy.hundreds = 4;
    sy.ballsT = 6;
    sy.wickets = 0;
    sy.economy = 8.00;

    printf("\n");
    printf("    Name                    : Suryakumar Yadav \n");
    printf("    Age                     : %d \n", sy.age);
    printf("    Height                  : %d \n", sy.height);
    printf("    Matches                 : %d \n", sy.matches);
    printf("    Runs                    : %d \n", sy.runs);
    printf("    Balls Faced             : %d \n", sy.ballsF);
    printf("    Highest                 : %d \n", sy.highest);
    printf("    Average                 : %.2f \n", sy.average);
    printf("    Strike Rate             : %.2f \n", sy.sr);
    printf("    Fours                   : %d \n", sy.fours);
    printf("    Sixes                   : %d \n", sy.sixes);
    printf("    Fifties                 : %d \n", sy.fifties);
    printf("    Hundreds                : %d \n", sy.hundreds);
    printf("    Balls Thrown            : %d \n", sy.ballsT);
    printf("    Wickets                 : %d \n", sy.wickets);
    printf("    Economy                 : %.2f \n\n", sy.economy);
}

void si(){

    struct player si;

    si.age = 28;
    si.height = 180;
    si.matches = 202;
    si.runs = 6116;
    si.ballsF = 5683;
    si.highest = 113;
    si.average = 38.31;
    si.sr = 105.92;
    si.fours = 564;
    si.sixes = 187;
    si.fifties = 45;
    si.hundreds = 3;
    si.ballsT = 51;
    si.wickets = 0;
    si.economy = 5.11;

    printf("\n");
    printf("    Name                    : Shreyas Iyer \n");
    printf("    Age                     : %d \n", si.age);
    printf("    Height                  : %d \n", si.height);
    printf("    Matches                 : %d \n", si.matches);
    printf("    Runs                    : %d \n", si.runs);
    printf("    Balls Faced             : %d \n", si.ballsF);
    printf("    Highest                 : %d \n", si.highest);
    printf("    Average                 : %.2f \n", si.average);
    printf("    Strike Rate             : %.2f \n", si.sr);
    printf("    Fours                   : %d \n", si.fours);
    printf("    Sixes                   : %d \n", si.sixes);
    printf("    Fifties                 : %d \n", si.fifties);
    printf("    Hundreds                : %d \n", si.hundreds);
    printf("    Balls Thrown            : %d \n", si.ballsT);
    printf("    Wickets                 : %d \n", si.wickets);
    printf("    Economy                 : %.2f \n\n", si.economy);
}
void hp(){

    struct player hp;

    hp.age = 29;
    hp.height = 183;
    hp.matches = 295;
    hp.runs = 5696;
    hp.ballsF = 4611;
    hp.highest = 108;
    hp.average = 30.02;
    hp.sr = 118.49;
    hp.fours = 453;
    hp.sixes = 262;
    hp.fifties = 26;
    hp.hundreds = 1;
    hp.ballsT = 6378;
    hp.wickets = 211;
    hp.economy = 6.49;

    printf("\n");
    printf("    Name                    : Hardik Pandya \n");
    printf("    Age                     : %d \n", hp.age);
    printf("    Height                  : %d \n", hp.height);
    printf("    Matches                 : %d \n", hp.matches);
    printf("    Runs                    : %d \n", hp.runs);
    printf("    Balls Faced             : %d \n", hp.ballsF);
    printf("    Highest                 : %d \n", hp.highest);
    printf("    Average                 : %.2f \n", hp.average);
    printf("    Strike Rate             : %.2f \n", hp.sr);
    printf("    Fours                   : %d \n", hp.fours);
    printf("    Sixes                   : %d \n", hp.sixes);
    printf("    Fifties                 : %d \n", hp.fifties);
    printf("    Hundreds                : %d \n", hp.hundreds);
    printf("    Balls Thrown            : %d \n", hp.ballsT);
    printf("    Wickets                 : %d \n", hp.wickets);
    printf("    Economy                 : %.2f \n\n", hp.economy);
}

void msd(){

    struct player msd;

    msd.age = 41;
    msd.height = 180;
    msd.matches = 1288;
    msd.runs = 22348;
    msd.ballsF = 25572;
    msd.highest = 224;
    msd.average = 41.27;
    msd.sr = 102.18;
    msd.fours = 1835;
    msd.sixes = 598;
    msd.fifties = 132;
    msd.hundreds = 16;
    msd.ballsT = 132;
    msd.wickets = 1;
    msd.economy = 4.68;

    printf("\n");
    printf("    Name                    : Mahendra Singh Dhoni \n");
    printf("    Age                     : %d \n", msd.age);
    printf("    Height                  : %d \n", msd.height);
    printf("    Matches                 : %d \n", msd.matches);
    printf("    Runs                    : %d \n", msd.runs);
    printf("    Balls Faced             : %d \n", msd.ballsF);
    printf("    Highest                 : %d \n", msd.highest);
    printf("    Average                 : %.2f \n", msd.average);
    printf("    Strike Rate             : %.2f \n", msd.sr);
    printf("    Fours                   : %d \n", msd.fours);
    printf("    Sixes                   : %d \n", msd.sixes);
    printf("    Fifties                 : %d \n", msd.fifties);
    printf("    Hundreds                : %d \n", msd.hundreds);
    printf("    Balls Thrown            : %d \n", msd.ballsT);
    printf("    Wickets                 : %d \n", msd.wickets);
    printf("    Economy                 : %.2f \n\n", msd.economy);
}

void rj(){

    struct player rj;

    rj.age = 34;
    rj.height = 173;
    rj.matches = 529;
    rj.runs = 8381;
    rj.ballsF = 10108;
    rj.highest = 175;
    rj.average = 29.83;
    rj.sr = 99.01;
    rj.fours = 688;
    rj.sixes = 218;
    rj.fifties = 33;
    rj.hundreds = 3;
    rj.ballsT = 29335;
    rj.wickets = 659;
    rj.economy = 5.50;

    printf("\n");
    printf("    Name                    : Ravindra Jadeja \n");
    printf("    Age                     : %d \n", rj.age);
    printf("    Height                  : %d \n", rj.height);
    printf("    Matches                 : %d \n", rj.matches);
    printf("    Runs                    : %d \n", rj.runs);
    printf("    Balls Faced             : %d \n", rj.ballsF);
    printf("    Highest                 : %d \n", rj.highest);
    printf("    Average                 : %.2f \n", rj.average);
    printf("    Strike Rate             : %.2f \n", rj.sr);
    printf("    Fours                   : %d \n", rj.fours);
    printf("    Sixes                   : %d \n", rj.sixes);
    printf("    Fifties                 : %d \n", rj.fifties);
    printf("    Hundreds                : %d \n", rj.hundreds);
    printf("    Balls Thrown            : %d \n", rj.ballsT);
    printf("    Wickets                 : %d \n", rj.wickets);
    printf("    Economy                 : %.2f \n\n", rj.economy);
}

void ra(){

    struct player ra;

    ra.age = 36;
    ra.height = 188;
    ra.matches = 467;
    ra.runs = 4734;
    ra.ballsF = 7328;
    ra.highest = 124;
    ra.average = 20.73;
    ra.sr = 93.79;
    ra.fours = 490;
    ra.sixes = 55;
    ra.fifties = 15;
    ra.hundreds = 5;
    ra.ballsT = 36360;
    ra.wickets = 868;
    ra.economy = 5.41;

    printf("\n");
    printf("    Name                    : Ravichandran Ashwin \n");
    printf("    Age                     : %d \n", ra.age);
    printf("    Height                  : %d \n", ra.height);
    printf("    Matches                 : %d \n", ra.matches);
    printf("    Runs                    : %d \n", ra.runs);
    printf("    Balls Faced             : %d \n", ra.ballsF);
    printf("    Highest                 : %d \n", ra.highest);
    printf("    Average                 : %.2f \n", ra.average);
    printf("    Strike Rate             : %.2f \n", ra.sr);
    printf("    Fours                   : %d \n", ra.fours);
    printf("    Sixes                   : %d \n", ra.sixes);
    printf("    Fifties                 : %d \n", ra.fifties);
    printf("    Hundreds                : %d \n", ra.hundreds);
    printf("    Balls Thrown            : %d \n", ra.ballsT);
    printf("    Wickets                 : %d \n", ra.wickets);
    printf("    Economy                 : %.2f \n\n", ra.economy);
}

void bk(){

    struct player bk;

    bk.age = 33;
    bk.height = 175;
    bk.matches = 389;
    bk.runs = 1454;
    bk.ballsF = 2363;
    bk.highest = 63;
    bk.average = 13.36;
    bk.sr = 71.38;
    bk.fours = 150;
    bk.sixes = 12;
    bk.fifties = 4;
    bk.hundreds = 0;
    bk.ballsT = 14554;
    bk.wickets = 464;
    bk.economy = 5.60;

    printf("\n");
    printf("    Name                    : Bhuvneshwar Kumar \n");
    printf("    Age                     : %d \n", bk.age);
    printf("    Height                  : %d \n", bk.height);
    printf("    Matches                 : %d \n", bk.matches);
    printf("    Runs                    : %d \n", bk.runs);
    printf("    Balls Faced             : %d \n", bk.ballsF);
    printf("    Highest                 : %d \n", bk.highest);
    printf("    Average                 : %.2f \n", bk.average);
    printf("    Strike Rate             : %.2f \n", bk.sr);
    printf("    Fours                   : %d \n", bk.fours);
    printf("    Sixes                   : %d \n", bk.sixes);
    printf("    Fifties                 : %d \n", bk.fifties);
    printf("    Hundreds                : %d \n", bk.hundreds);
    printf("    Balls Thrown            : %d \n", bk.ballsT);
    printf("    Wickets                 : %d \n", bk.wickets);
    printf("    Economy                 : %.2f \n\n", bk.economy);
}

void ky(){

    struct player ky;

    ky.age = 28;
    ky.height = 168;
    ky.matches = 190;
    ky.runs = 429;
    ky.ballsF = 776;
    ky.highest = 40;
    ky.average = 14.55;
    ky.sr = 64.64;
    ky.fours = 35;
    ky.sixes = 2;
    ky.fifties = 0;
    ky.hundreds = 0;
    ky.ballsT = 7592;
    ky.wickets = 285;
    ky.economy = 5.89;

    printf("\n");
    printf("    Name                    : Kuldeep Yadav \n");
    printf("    Age                     : %d \n", ky.age);
    printf("    Height                  : %d \n", ky.height);
    printf("    Matches                 : %d \n", ky.matches);
    printf("    Runs                    : %d \n", ky.runs);
    printf("    Balls Faced             : %d \n", ky.ballsF);
    printf("    Highest                 : %d \n", ky.highest);
    printf("    Average                 : %.2f \n", ky.average);
    printf("    Strike Rate             : %.2f \n", ky.sr);
    printf("    Fours                   : %d \n", ky.fours);
    printf("    Sixes                   : %d \n", ky.sixes);
    printf("    Fifties                 : %d \n", ky.fifties);
    printf("    Hundreds                : %d \n", ky.hundreds);
    printf("    Balls Thrown            : %d \n", ky.ballsT);
    printf("    Wickets                 : %d \n", ky.wickets);
    printf("    Economy                 : %.2f \n\n", ky.economy);
}

void jb(){

    struct player jb;

    jb.age = 29;
    jb.height = 178;
    jb.matches = 282;
    jb.runs = 323;
    jb.ballsF = 627;
    jb.highest = 34;
    jb.average = 6.51;
    jb.sr = 60.88;
    jb.fours = 34;
    jb.sixes = 8;
    jb.fifties = 0;
    jb.hundreds = 0;
    jb.ballsT = 14100;
    jb.wickets = 464;
    jb.economy = 5.34;

    printf("\n");
    printf("    Name                    : Jasprit Bumrah \n");
    printf("    Age                     : %d \n", jb.age);
    printf("    Height                  : %d \n", jb.height);
    printf("    Matches                 : %d \n", jb.matches);
    printf("    Runs                    : %d \n", jb.runs);
    printf("    Balls Faced             : %d \n", jb.ballsF);
    printf("    Highest                 : %d \n", jb.highest);
    printf("    Average                 : %.2f \n", jb.average);
    printf("    Strike Rate             : %.2f \n", jb.sr);
    printf("    Fours                   : %d \n", jb.fours);
    printf("    Sixes                   : %d \n", jb.sixes);
    printf("    Fifties                 : %d \n", jb.fifties);
    printf("    Hundreds                : %d \n", jb.hundreds);
    printf("    Balls Thrown            : %d \n", jb.ballsT);
    printf("    Wickets                 : %d \n", jb.wickets);
    printf("    Economy                 : %.2f \n\n", jb.economy);
}
void ms(){

    struct player ms;

    ms.age = 32;
    ms.height = 178;
    ms.matches = 287;
    ms.runs = 1002;
    ms.ballsF = 1306;
    ms.highest = 56;
    ms.average = 8.62;
    ms.sr = 84.15;
    ms.fours = 99;
    ms.sixes = 36;
    ms.fifties = 2;
    ms.hundreds = 0;
    ms.ballsT = 18825;
    ms.wickets = 540;
    ms.economy = 6.58;

    printf("\n");
    printf("    Name                    : Mohammed Shami \n");
    printf("    Age                     : %d \n", ms.age);
    printf("    Height                  : %d \n", ms.height);
    printf("    Matches                 : %d \n", ms.matches);
    printf("    Runs                    : %d \n", ms.runs);
    printf("    Balls Faced             : %d \n", ms.ballsF);
    printf("    Highest                 : %d \n", ms.highest);
    printf("    Average                 : %.2f \n", ms.average);
    printf("    Strike Rate             : %.2f \n", ms.sr);
    printf("    Fours                   : %d \n", ms.fours);
    printf("    Sixes                   : %d \n", ms.sixes);
    printf("    Fifties                 : %d \n", ms.fifties);
    printf("    Hundreds                : %d \n", ms.hundreds);
    printf("    Balls Thrown            : %d \n", ms.ballsT);
    printf("    Wickets                 : %d \n", ms.wickets);
    printf("    Economy                 : %.2f \n\n", ms.economy);
}

void yc(){

    struct player yc;

    yc.age = 32;
    yc.height = 168;
    yc.matches = 292;
    yc.runs = 119;
    yc.ballsF = 238;
    yc.highest = 18;
    yc.average = 5.45;
    yc.sr = 47.69;
    yc.fours = 8;
    yc.sixes = 0;
    yc.fifties = 0;
    yc.hundreds = 0;
    yc.ballsT = 8568;
    yc.wickets = 399;
    yc.economy = 7.03;

    printf("\n");
    printf("    Name                    : Yuzvendra Chahal \n");
    printf("    Age                     : %d \n", yc.age);
    printf("    Height                  : %d \n", yc.height);
    printf("    Matches                 : %d \n", yc.matches);
    printf("    Runs                    : %d \n", yc.runs);
    printf("    Balls Faced             : %d \n", yc.ballsF);
    printf("    Highest                 : %d \n", yc.highest);
    printf("    Average                 : %.2f \n", yc.average);
    printf("    Strike Rate             : %.2f \n", yc.sr);
    printf("    Fours                   : %d \n", yc.fours);
    printf("    Sixes                   : %d \n", yc.sixes);
    printf("    Fifties                 : %d \n", yc.fifties);
    printf("    Hundreds                : %d \n", yc.hundreds);
    printf("    Balls Thrown            : %d \n", yc.ballsT);
    printf("    Wickets                 : %d \n", yc.wickets);
    printf("    Economy                 : %.2f \n\n", yc.economy);
}