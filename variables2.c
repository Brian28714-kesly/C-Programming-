// Simple info program
/*
Name: Brian Cheruiyot
Reg  no: PA106/G/28714/25
Description: Program to prompt user to enter height,ID number and Bank balance
*/

#include <stdio.h>

int main() {
    float height, bank_balance;
    int id_number;

    // Prompt the user for input
    printf("Enter your height (in cm): ");
    scanf("%f", &height);

    printf("Enter your ID Number: ");
    scanf("%d", &id_number);

    printf("Enter your Bank Balance: ");
    scanf("%f", &bank_balance);

    // Display the details
    printf("\n User Details \n");
    printf("Height: %.2f cm\n", height);
    printf("ID Number: %d\n", id_number);
    printf("Bank Balance: %.2f\n", bank_balance);

    return 0;} 