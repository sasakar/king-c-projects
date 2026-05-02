// Approximates e by computing the value of
// 1 + 1/1! + 1/2! + 1/3! + … + 1/n!
// where n is an integer entered by the user

#include <stdio.h>

int main(void) {
    int n;
    double e = 1.0;
    double fact = 1.0;

    printf("Enter an integer n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        fact *= i; // Calculate factorial incrementally
        e += 1.0 /fact;
    }

    printf("Approximation of e: %.10f\n", e);

    return 0;
}