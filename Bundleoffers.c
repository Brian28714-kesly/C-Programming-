/*
Name:Brian cheruiyot 
Reg No:PA106/G/28714/25 
Description: Program to calculate water bill
*/
#include <stdio.h>
int main(){
    int choice;
    // Display available offers
    printf("Available Internet Bundles:\n");
    printf("1. 100 MB  - KES 50\n");
    printf("2. 500 MB  - KES 200\n");
    printf("3. 1 GB    - KES 350\n");
    printf("4. 2 GB    - KES 600\n");
    // Ask user his/her choice
    printf("\nEnter your choice (1-4): ");
    scanf("%d", &choice);

    // determine user's choice 
    if (choice == 1) {
      printf("You selected: 100 MB @ KES 50\n");
    }
    else if (choice == 2) {
        printf("You selected: 500 MB @ KES 200\n");
    }
    else if (choice == 3) {
        printf("You selected: 1 GB @ KES 350\n");
    }
    else if (choice == 4) {
        printf("You selected: 2 GB @ KES 600\n");
    }
    else { //for numbers outside 1-4
        printf("Invalid choice! Please select between 1 and 4.\n");
    }

    return 0;
}