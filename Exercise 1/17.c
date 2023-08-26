# include <stdio.h>

int main(){

    // Write a C program to calculate profit and loss on a transaction.

    float buyPrice, extraCost, totalCost, sellPrice, profit, loss;

    printf("Enter buying price of the product        : ");
    scanf("%f", &buyPrice);

    printf("Enter extra cost appeared on the procuct : ");
    scanf("%f", &extraCost);

    printf("Enter selling price of the product       : ");
    scanf("%f", &sellPrice);

    totalCost = buyPrice + extraCost;

    if (totalCost < sellPrice){

        profit = sellPrice - totalCost;
        printf("\nYou got ₹ %.2f & %.2f percent profit \n", profit, (profit * 100) / totalCost);
    }

    else if (totalCost > sellPrice){

        loss = totalCost - sellPrice;
        printf("\nYou got ₹ %.2f & %.2f percent loss \n", loss, (loss * 100) / totalCost);
    }

    else {
        printf("\nYou got neither profit nor loss \n");
    }

    return 0;
}