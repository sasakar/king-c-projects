#include <stdio.h>
#include <math.h>

int main() {
    printf("Enter a positive number: ");
    double x;
    scanf("%lf", &x);

    double y = 1;

    do {
        y = ((y + (x/y))/2);
    } while (fabs(y - ((y + (x/y))/2)) > 0.00001);

    printf("The square root is: %f\n", y);
}
