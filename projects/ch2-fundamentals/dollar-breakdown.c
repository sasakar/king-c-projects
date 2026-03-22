#include <stdio.h>

#define TWENTY_DOLLARS 20
#define TEN_DOLLARS 10
#define FIVE_DOLLARS 5
#define ONE_DOLLAR 1

int main() {
    printf("Enter dollar amount: ");
    int amount;
    scanf("%d", &amount);
    int twenties = amount / TWENTY_DOLLARS;
    int remainder = amount - (twenties * TWENTY_DOLLARS);
    int tens = remainder / TEN_DOLLARS;
    remainder = remainder - (tens * TEN_DOLLARS);
    int fives = remainder / FIVE_DOLLARS;
    remainder = remainder - (fives * FIVE_DOLLARS);
    int ones = remainder / ONE_DOLLAR;
    printf("The breakdown is:\n");
    printf("$20 bills: %d\n", twenties);
    printf("$10 bills: %d\n", tens);
    printf("$5 bills: %d\n", fives);
    printf("$1 bills: %d\n", ones);
    return 0;
}