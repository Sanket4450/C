// Movie Ticket Generator...

# include <stdio.h>

int main(){

    printf("\n\"Welcome to SK Cinemas\"\n\n");

    printf("Here, is a list of current trending movies with rating : \n");
    printf("Select a Movie you are interested in... \n\n");

    int choose1, choose2, choose3, choose4, upipin, cotp, gotp, potp;
    long long number, customerid, paytmnum, googlenum;
    char upiid[30], password[20];

    printf("    01 — Avatar : The Way of Water ★ 7.7/10 \n");
    printf("    02 — Spider-Man : No Way Home ★ 8.2/10 \n");
    printf("    03 — The Batman ★ 7.8/10 \n");
    printf("    04 — Godzilla vs. Kong ★ 6.3/10 \n");
    printf("    05 — Fast X ★ 6.3/10 \n");
    printf("    06 — The Matrix Resurrections ★ 5.7/10 \n");
    printf("    07 — Thor : Love and Thunder ★ 6.2/10 \n");
    printf("    08 — Doctor Strange in the Multiverse of Madness ★ 6.9/10 \n");
    printf("    09 — Jurassic World Dominion ★ 5.6/10 \n");
    printf("    10 — Black Adam ★ 6.3/10 \n\n");

    selection1 :

    printf("Enter a number for a specific movie : ");
    scanf("%d", &choose1);

    switch (choose1){

        case 1 : printf("\nYou selected \"Avatar : The Way of Water\"\n");
            break;

        case 2 : printf("\nYou selected \"Spider-Man : No Way Home\"\n");
            break;

        case 3 : printf("\nYou selected \"The Batman\"\n");
            break;

        case 4 : printf("\nYou selected \"Godzilla vs. Kong\"\n");
            break;

        case 5 : printf("\nYou selected \"Fast X\"\n");
            break;

        case 6 : printf("\nYou selected \"The Matrix Resurrections\"\n");
            break;

        case 7 : printf("\nYou selected \"Thor : Love and Thunder\"\n");
            break;

        case 8 : printf("\nYou selected \"Doctor Strange in the Multiverse of Madness\"\n");
            break;

        case 9 : printf("\nYou selected \"Jurassic World Dominion\"\n");
            break;

        case 10 : printf("\nYou selected \"Black Adam\"\n");
            break;

        default : printf("\ninvalid selection, please try again... \n\n");
            goto selection1;
    }

    printf("\nHere, is a list of shows available for this movie : \n\n");

    printf("    Show 1 : Today, 3:15 PM\f- INOX Raj Imperial, Deepkamal Mall & Multiplex, Zoo Rd, Surat \n");
    printf("    Show 2 : Today, 9:15 PM\f- INOX Raj Imperial, Deepkamal Mall & Multiplex, Zoo Rd, Surat \n");
    printf("    Show 3 : Tommorow, 9:30 AM\f- PVR Rahul Raj, Rahul Raj Mall, Dumas Rd, Surat \n");
    printf("    Show 4 : Tommorow, 3:15 PM\f- INOX Raj Imperial, Deepkamal Mall & Multiplex, Zoo Rd, Surat \n");
    printf("    Show 5 : Sunday, 8:15 AM\f- PVR Rahul Raj, Rahul Raj Mall, Dumas Rd, Surat \n");
    printf("    Show 6 : Sunday, 3:15 PM\f- INOX Raj Imperial, Deepkamal Mall & Multiplex, Zoo Rd, Surat \n");
    printf("    Show 7 : Monday, 3:15 PM\f- INOX Raj Imperial, Deepkamal Mall & Multiplex, Zoo Rd, Surat \n");
    printf("    Show 8 : Tuesday, 3:30 PM\f- PVR Rahul Raj, Rahul Raj Mall, Dumas Rd, Surat \n");
    printf("    Show 9 : Wednesday, 3:15 PM\f- INOX Raj Imperial, Deepkamal Mall & Multiplex, Zoo Rd, Surat \n");
    printf("    Show 10 : Thursday, 12:30\f- PVR Rahul Raj, Rahul Raj Mall, Dumas Rd, Surat \n\n");

    selection2 :

    printf("Enter show number : ");
    scanf("%d", &choose2);

    switch (choose2){

        case 1 : printf("\nYou chose Show 1, Get ready on 3.15 PM at INOX Raj imperial \n");
            break;

        case 2 : printf("\nYou chose Show 2, Get ready on 9:15 PM at INOX Raj Imperial \n");
            break;

        case 3 : printf("\nYou chose Show 3, Get ready on tomorrow, 9:30 AM at PVR Rahul Raj \n");
            break;

        case 4 : printf("\nYou chose Show 4, Get ready on tomorrow, 3.15 PM at INOX Raj imperial \n");
            break;

        case 5 : printf("\nYou chose Show 5, Get ready on Sunday, 3.15 PM at PVR Rahul Raj \n");
            break;

        case 6 : printf("\nYou chose Show 6, Get ready on Sunday, 3.15 PM at INOX Raj imperial \n");
            break;

        case 7 : printf("\nYou chose Show 7, Get ready on Monday, 3.15 PM at INOX Raj imperial \n");
            break;

        case 8 : printf("\nYou chose Show 8, Get ready on Tuesday, 3.15 PM at PVR Rahul Raj \n");
            break;

        case 9 : printf("\nYou chose Show 9, Get ready on Wednesday, 3.15 PM at INOX Raj imperial \n");
            break;

        case 10 : printf("\nYou chose Show 10, Get ready on Thursday, 3.15 PM at PVR Rahul Raj \n");
            break;

        default : printf("\ninvalid show, please try again... \n\n");
            goto selection2;
    }

    switch (choose2){

        case 1 : printf("Price for Show 1 is : ₹ 320/- \n");
            break;

        case 2 : printf("Price for Show 2 is : ₹ 300/- \n");
            break;

        case 3 : printf("Price for Show 3 is : ₹ 280/- \n");
            break;

        case 4 : printf("Price for Show 4 is : ₹ 280/- \n");
            break;

        case 5 : printf("Price for Show 5 is : ₹ 240/- \n");
            break;

        case 6 : printf("Price for Show 6 is : ₹ 250/- \n");
            break;

        case 7 : printf("Price for Show 7 is : ₹ 220/- \n");
            break;

        case 8 : printf("Price for Show 8 is : ₹ 200/- \n");
            break;

        case 9 : printf("Price for Show 9 is : ₹ 180/- \n");
            break;

        case 10 : printf("Price for Show 10 is : ₹ 140/- \n");
            break;
    }

    printf("\nChoose a payment method from these... \n\n");

    printf("1. Credit/Debit Card \n\n");
    printf("2. UPI \n\n");
    printf("3. Net Banking \n\n");
    printf("4. Paytm Wallet \n\n");
    printf("5. Google Pay \n\n");

    selection3 :

    printf("Enter a number for a specific payment method : ");
    scanf("%d", &choose3);

    switch (choose3){

        case 1 :
        
        printf("\nEnter Credit/Debit Card number : ");
        scanf("%lld", &number);

        printf("Enter OTP sent to your registered number : ");
        scanf("%d", &cotp);

        printf("Payment Successful! \n\n");

            break;

        case 2 :

        printf("\nEnter UPI ID : ");
        scanf("%s", upiid);

        printf("Enter UPI PIN : ");
        scanf("%d", &upipin);

        printf("Payment Successful! \n\n");

            break;

        case 3 :

        printf("\nEnter Customer ID : ");
        scanf("%lld", &customerid);

        printf("Enter password : ");
        scanf("%s", password);

        printf("Payment Successful! \n\n");
        
            break;

        case 4 :

        printf("\nEnter Paytm number : ");
        scanf("%lld", &paytmnum);

        printf("Enter OTP sent to your Paytm number : ");
        scanf("%d", &potp);

        printf("Payment Successful! \n\n");

            break;

        case 5 :

        printf("\nEnter Google Pay registered number : ");
        scanf("%lld", &googlenum);

        printf("Enter OTP sent to your registered Google Pay number : ");
        scanf("%d", &gotp);

        printf("\nPayment Successful! \n\n");

            break;

        default : printf("\ninvalid method, please try again... \n\n");
            goto selection3;
    }

    printf("Enjoy the Show !!! \n\n");

    return 0;
}