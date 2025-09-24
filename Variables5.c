// Variables and data types in C
#include <stdio.h>   // scanf(), printf()

int main() {
    // Variable declaration
    char a;             // %c
    char name[50];      // %s
    int age;            // %d
    float salary;       // %f
    double budget;      // %lf

    // Prompting the user to enter values of each variable
    printf("Please enter the value of age: ");
    scanf("%d", &age);

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter the value of salary: ");
    scanf("%f", &salary);

    printf("Enter the value of budget: ");
    scanf("%lf", &budget);

    printf("Enter the value of character: ");
    scanf(" %c", &a);   // Added space before %c to consume leftover whitespace

    // Print the output to the user screen
    printf("\nThe value of age is %d\n", age);
    printf("Your name is %s\n", name);
    printf("The value of salary is %.2f\n", salary);
    printf("The value of budget is %.2lf\n", budget);
    printf("The value of character is %c\n", a);

    return 0;
}