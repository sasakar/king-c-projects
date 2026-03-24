#include <stdio.h>

int main(){
    int decimal;
    printf("Enter a decimal number between 0 and 32767: ");
    scanf("%d", &decimal);
    int octal;
    octal = decimal % 8;
    decimal = decimal / 8;
    octal = octal + (decimal % 8) * 10;
    decimal = decimal / 8;
    octal = octal + (decimal % 8) * 100;
    decimal = decimal / 8;
    octal = octal + (decimal % 8) * 1000;
    printf("The octal equivalent is: %.5d\n", octal);
    return 0;
}