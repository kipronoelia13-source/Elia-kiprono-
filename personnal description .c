/* personal details 
/*
Name :kimutai Elia
Reg no:PA106/G/28745/25
Description: personnal details 
*/
#include <stdio.h>

int main() {
    float height, bankBalance;
    long idNumber;

    // Prompt user for height
    printf("Enter your height (in cm): ");
    scanf("%f", &height);

    // Prompt user for ID number
    printf("Enter your ID number: ");
    scanf("%lld", &idNumber);

    // Prompt user for bank balance
    printf("Enter your bank balance: ");
    scanf("%f", &bankBalance);

    // Display the values entered
    printf("\n--- User Information ---\n");
    printf("Height: %.2f cm\n", height);
    printf("ID Number: %lld\n", idNumber);
    printf("Bank Balance: %.2f\n", bankBalance);

    return 0;
}