# include <stdio.h>

// Create a structure representing a bank account of a customer

typedef struct bankAc{

    char bankName[20];
    int branchCode;
    char holderName[20];
    int accNum;
    int age;
    float amount;
} acc;

int main(){

    acc account[50];

    printf("Enter bank name : ");
    scanf("%s", account[0].bankName);

    printf("Enter branch code : ");
    scanf("%d", &account[0].branchCode);

    printf("Enter Account holder name : ");
    scanf("%s", account[0].holderName);

    printf("Enter Account number : ");
    scanf("%d", &account[0].accNum);

    printf("Enter age : ");
    scanf("%d", &account[0].age);

    printf("Enter amount in your bank account : ");
    scanf("%f", &account[0].amount);
    
    return 0;
}