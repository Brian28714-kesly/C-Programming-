/*
Name:Brian cheruiyot 
Reg No:PA106/G/28714 
Description: Variables and Data types
*/

#include <stdio.h>   // scanf(), printf()

int main() {
    // Variable declaration and initialization
    char a = 'K';              // %c
    char name[] = "Agnes";     // %s (string/array)
    int age = 10;              // %d
    float pi = 3.142;          // %f
    double profit = 10000.10;  // %lf

    // Display to the user screen
    printf("The character is %c\n", a);
    printf("The name (string) is %s\n", name);
    printf("Age is: %d years\n", age);
    printf("The value of pi is %.2f\n", pi);
    printf("The profit is Ksh. %.4lf\n", profit);

    return 0;   // Execution successful
}