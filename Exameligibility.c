/*
Name:Brian cheruiyot 
Reg No:PA106/G/28714/25 
Description: Program to determine eligibility
*/
#include <stdio.h>

int main() {
//what to enter 
    float attendance,average_marks;
//Prompt user to enter percentage attendance
    printf("Enter percentage attendance:");
    scanf("%f", &attendance);
//Prompt user to enter average marks
    printf("Enter average marks: ");
    scanf("%f", &average_marks);
//check eligibility
    if (attendance >= 75 && average_marks >= 40) {
        printf("Eligible for final exams.\n");
    } else {
        printf("Not eligible.\n");
    }

    return 0;
}