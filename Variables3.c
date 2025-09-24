/*
Name:
Reg No:
Description: Program to compute simple interest
Formula: S_I = P * rate / 100 * time
*/

#include <stdio.h>

int main() {
    // Variable declaration
    float principle, rate, time, interest;

    // Prompt the user to enter principal
    printf("Enter Principal amount: ");
    scanf("%f", &principle);

    // Prompt the user to enter rate
    printf("Enter rate: ");
    scanf("%f", &rate);

    // Prompt the user to enter time
    printf("Enter time: ");
    scanf("%f", &time);

    // Compute interest
    interest = principle * rate / 100 * time;

    // Display interest
    printf("\nSimple Interest is Ksh. %.2f\n", interest);

    return 0;
}