/*
Name:Brian cheruiyot 
Reg No:PA106/G/28714/25 
Description: Program to calculate water bill
*/
#include <stdio.h>
int main() {
    int units;
    float bill;
    //Prompt user to enter units consumed
    printf("Enter the number of water units consumed: ");
    scanf("%d", &units);
    //Calculate the price 
    if (units >= 0 && units <= 30) {
      bill = units * 20.0;
    }
    else if (units >= 31 && units <= 60) {
    bill = units * 25.0;
    }
    else if (units > 60) {
        bill = units * 30.0;
    }
    else {
        printf("Invalid input! Units cannot be negative.\n");
        return 1; //when input is invalid
    }

    // Display total bill
    printf("Total Water Bill:ksh %.2f \n", bill);

    return 0;
}