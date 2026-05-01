#include <stdio.h>

int main(void) {
    int m;
    int n;
    int gcd;
    int rem;

    printf("Enter 2 integers: ");
    scanf("%d %d", &m, &n);

    for (;;) {
        if (n == 0) {
            gcd = m;
            break;
        }

        rem = m % n;
        m = n;
        n = rem;
    }
    
    printf("Greatest Common Divisor: %d", gcd);
    return 0;
}