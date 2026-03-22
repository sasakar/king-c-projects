#include <stdio.h>

int main() {
    printf("Enter amount in dollars and cents: ");
    double amount;
    scanf("%lf", &amount);
    printf("With tax added: %.2lf\n", amount * 1.05);
    return 0;
}