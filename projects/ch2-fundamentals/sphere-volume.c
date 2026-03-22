#include <stdio.h>

int main(){
    printf("Enter the radius of the sphere: ");
    double radius;
    scanf("%lf", &radius);
    double volume = (4.0/3.0) * 3.14159 * radius * radius * radius;
    printf("The volume of the sphere is: %lf\n", volume);
    return 0;
}