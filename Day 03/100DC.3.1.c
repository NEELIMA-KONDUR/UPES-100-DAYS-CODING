// Write a program to convert temperature from Celsius to Fahrenheit.
#include <stdio.h>

int main() {
    float c;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);
    printf("Fahrenheit=%.0f\n", (c * 9 / 5) + 32);
    return 0;
}
