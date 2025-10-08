/*
Name:Brian cheruiyot 
Reg No:PA106/G/28714/25 
Description: Program for atm withdrawal 
*/
#include <stdio.h>
//Input types
int main() {
    float balance;
    float withdraw;
 
    printf("Enter your account balance: ");
   // Prompt user to display account balance 
    scanf("%f", &balance);

    while(balance > 0) {
        printf("Enter amount to withdraw: ");
        //Prompt user to enter amount to withdraw 
        scanf("%f", &withdraw);
        balance -= withdraw;
        //show account balance 
        printf("Remaining balance: %.2f\n", balance);
    }

    printf("Balance is zero. Transaction stopped.\n");
    return 0;
}