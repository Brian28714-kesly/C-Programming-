/*
Name:Brian cheruiyot 
Reg No:PA106/G/28714/25 
Description: Program for password system 
*/
#include <stdio.h>
//input variable 
int main() {
    int password;

    do {
        printf("Enter password: ");
        //Prompt user to enter password 
        scanf("%d", &password);
        //required password 
    } while(password != 1234);
//if password is correct 
    printf("Access Granted\n");
    return 0;
}